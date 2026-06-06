#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EPerceptionNoiseLoudness.h"
#include "EPerceptionSense.h"
#include "PerceptionComponent.generated.h"

class AActor;
class AGothicCharacter;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UPerceptionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float CustomUpdateRate;
    
    UPerceptionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ReportAreaEventAt(const FGameplayTag& EventTag, const FVector& AtLocation, float Radius, AActor* SensedActor, AActor* TargetActor, AActor* InstigatorActor, AActor* AffectedActor);
    
    UFUNCTION(BlueprintPure)
    bool IsInHearingRangeOfAnyPlayer(EPerceptionNoiseLoudness Loudness) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AGothicCharacter*> GetCharactersPerceivingMe(EPerceptionSense ViaSense, const FGameplayTagContainer& IncludeCharactersWith, const FGameplayTagContainer& ExcludeCharactersWith) const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeSeenByAnyPlayer(float MinTimeSeconds) const;
    
    UFUNCTION(BlueprintCallable)
    void BroadcastAreaEvent(const FGameplayTag& EventTag, float Radius, AActor* SensedActor, AActor* TargetActor, AActor* InstigatorActor, AActor* AffectedActor);
    
};

