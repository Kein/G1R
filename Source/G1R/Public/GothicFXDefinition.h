#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "FXDecal.h"
#include "FXFMODEvent.h"
#include "FXParticleSystem.h"
#include "FXPerceptionSoundArea.h"
#include "GothicFXDefinition.generated.h"

class AActor;

UCLASS(Blueprintable)
class UGothicFXDefinition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag EffectTag;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer FXSpecs;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer RequiredTags;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer IgnoreTags;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsInstantEffect;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PreferenceLayer;
    
    UPROPERTY(EditDefaultsOnly)
    float CoolDownTime;
    
    UPROPERTY(BlueprintReadWrite)
    FFXFMODEvent FMODEvent;
    
    UPROPERTY(BlueprintReadWrite)
    FFXParticleSystem ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite)
    FFXPerceptionSoundArea PerceptionSoundArea;
    
    UPROPERTY(BlueprintReadWrite)
    FFXDecal decal;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FName, FVector> TargetSockets;
    
    UGothicFXDefinition();

    UFUNCTION(BlueprintNativeEvent)
    void PrepareFX(AActor* Instigator, const FHitResult& HitResult);
    
};

