#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_Base.h"
#include "EPerceptionNoiseLoudness.h"
#include "EPerceptionSoundLengthType.h"
#include "Templates/SubclassOf.h"
#include "AnimNotify_PlayCustomFXByActorTag.generated.h"

class UFMODAudioComponent;
class UFMODEvent;
class UGothicFXDefinition;
class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_PlayCustomFXByActorTag : public UAnimNotify_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGameplayTag EffectTag;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer EffectSpecs;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FVector> TargetSockets;
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, TSoftObjectPtr<UFMODEvent>> FMODEventMap;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UFMODEvent> FMODEvent;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UFMODEvent> FMODEvent1;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag FMODEventMapTagToTest;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag PerceptionSoundTag;
    
    UPROPERTY(EditAnywhere)
    EPerceptionNoiseLoudness PerceptionLoudness;
    
    UPROPERTY(EditAnywhere)
    EPerceptionSoundLengthType PerceptionLength;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> NiagaraSystemPath;
    
    UPROPERTY(EditAnywhere)
    FName NiagaraAttachPoint;
    
    UPROPERTY(EditAnywhere)
    FVector NiagaraPositionOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator NiagaraRotationOffset;
    
    UPROPERTY(EditAnywhere)
    bool bIsUnderWaterEffect;
    
    UPROPERTY(EditAnywhere)
    bool bIsLooping;
    
    UPROPERTY(EditAnywhere)
    bool bIsInstantEffect;
    
    UPROPERTY(Instanced)
    UFMODAudioComponent* FMODPreview;
    
    UPROPERTY(Instanced)
    UNiagaraComponent* NiagaraPreview;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGothicFXDefinition> FXDefinitionTemplate;
    
    UPROPERTY()
    UGothicFXDefinition* FXDefinition;
    
public:
    UAnimNotify_PlayCustomFXByActorTag();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetPerceptionParameter(FGameplayTag SoundTag, EPerceptionNoiseLoudness Loudness) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetPerceptionSoundTag() const;
    
};

