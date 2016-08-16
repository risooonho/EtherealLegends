// © 2014 - 2016 Soverance Studios. All Rights Reserved.

#pragma once

#include "Gear/EtherealGearMaster.h"
#include "Armor_Master.generated.h"

/**
 * 
 */
UCLASS()
class ETHEREAL_API AArmor_Master : public AEtherealGearMaster
{
	GENERATED_BODY()
	
public:

	AArmor_Master(const FObjectInitializer& ObjectInitializer);

	// BeginPlay Override
	virtual void BeginPlay() override;

	/** Armor Meshes. */
	// Armor Skeletal Mesh
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Meshes)
	USkeletalMeshComponent* HeadArmorSkeletalMesh;
	USkeletalMesh* SK_HeadArmorSkeletalMesh;
	
	
};
