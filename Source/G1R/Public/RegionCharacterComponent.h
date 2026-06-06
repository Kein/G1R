#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "RegionCharacterComponent.generated.h"

class URegionTrait;

UCLASS(BlueprintType, ClassGroup=Custom, Within=GothicCharacterState, meta=(BlueprintSpawnableComponent))
class G1R_API URegionCharacterComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    TSet<URegionTrait*> ApplicableTraits;
    
    UPROPERTY(Export)
    TSet<URegionTrait*> NonApplicableTraits;
    
public:
    URegionCharacterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateTraits();
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveTraits(const TArray<URegionTrait*>& TraitsToAdd);
    
    UFUNCTION(BlueprintPure)
    bool HasTraitOfClass(TSubclassOf<URegionTrait> TraitClass) const;
    
    UFUNCTION(BlueprintPure)
    bool HasPotentiallyApplicableTraitOfClassAtLocation(const FVector& QueryLocation, TSubclassOf<URegionTrait> TraitClass) const;
    
    UFUNCTION(BlueprintPure)
    FBox GetTraitBoundsOfClass(TSubclassOf<URegionTrait> TraitClass) const;
    
    UFUNCTION(BlueprintCallable)
    int32 AddNewPotentialTraits(const TArray<URegionTrait*>& TraitsToAdd);
    
};

