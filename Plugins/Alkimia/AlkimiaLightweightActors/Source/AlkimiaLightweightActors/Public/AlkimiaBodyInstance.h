#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AlkimiaBodyInstance.generated.h"

class UMaterialInterface;
class UPhysicalMaterial;
class UPhysicalMaterialMask;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FAlkimiaBodyInstance {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<ECollisionChannel> ObjectType;
    
    UPROPERTY()
    TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled;
    
    UPROPERTY()
    FName CollisionProfileName;
    
    UPROPERTY()
    float WalkableSlopeAngle;
    
    UPROPERTY()
    TEnumAsByte<EWalkableSlopeBehavior> WalkableSlopeBehavior;
    
    UPROPERTY()
    UPhysicalMaterial* PhysMaterialOverride;
    
    UPROPERTY()
    TArray<FResponseChannel> CollisionResponses;
    
    UPROPERTY()
    UPhysicalMaterial* SimplePhysicsMaterial;
    
    UPROPERTY()
    TArray<UPhysicalMaterial*> ComplexPhysicsMaterials;
    
    UPROPERTY()
    TArray<UPhysicalMaterialMask*> ComplexPhysicsMaterialMasks;
    
    UPROPERTY()
    TArray<UMaterialInterface*> ComplexPhysicsMaterialMaps;
    
    UPROPERTY()
    UStaticMesh* BodySetupOf;
    
    ALKIMIALIGHTWEIGHTACTORS_API FAlkimiaBodyInstance();
};

