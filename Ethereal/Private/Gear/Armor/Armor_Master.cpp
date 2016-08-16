// © 2014 - 2016 Soverance Studios. All Rights Reserved.

#include "Ethereal.h"
#include "Armor_Master.h"

AArmor_Master::AArmor_Master(const FObjectInitializer& ObjectInitializer)
{
	// Asset, Reference Obtained Via Right Click in Editor
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SkeletalMeshObject(TEXT("SkeletalMesh'/Game/VFX/sphere_skeletal.sphere_skeletal'"));

	// Creates a scene component and sets it as the root
	Root = NewObject<USceneComponent>(this, TEXT("Root"));
	RootComponent = Root;

	// Set Default Objects
	SK_HeadArmorSkeletalMesh = SkeletalMeshObject.Object;

	// Create
	HeadArmorSkeletalMesh = NewObject<USkeletalMeshComponent>(this, TEXT("Head Armor"));

	// Set Mesh
	HeadArmorSkeletalMesh->SetSkeletalMesh(SK_HeadArmorSkeletalMesh);

	// Configure Mesh
	SetupSKComponentsWithCollision(HeadArmorSkeletalMesh);
}

// Called when the game starts or when spawned
void AArmor_Master::BeginPlay()
{
	Super::BeginPlay();

	// Attachment
	HeadArmorSkeletalMesh->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::SnapToTargetIncludingScale);
}


