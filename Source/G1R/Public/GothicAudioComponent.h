#pragma once
#include "CoreMinimal.h"
#include "FMODAudioComponent.h"
#include "GameplayTagContainer.h"
#include "GothicAudioComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicAudioComponent : public UFMODAudioComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bIgnoreEnvironment;
    
protected:
    UPROPERTY()
    FGameplayTag AudioEnvironmentTag;
    
    UPROPERTY(EditAnywhere)
    bool bShouldPlayWhenInRange;
    
    UPROPERTY(EditAnywhere)
    bool bShouldAlwaysPlay;
    
    UPROPERTY(EditAnywhere)
    bool bDestroyWhenOutOfRange;
    
    UPROPERTY()
    TOptional<float> CachedMaxDistance;
    
public:
    UGothicAudioComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetShouldPlayWhenInRange(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldAlwaysPlay(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDestroyWhenOutOfRange(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoDestroy(bool bValue);
    
    UFUNCTION(BlueprintPure)
    bool IsInRange() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShouldPlayWhenInRange() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShouldAlwaysPlay() const;
    
};

