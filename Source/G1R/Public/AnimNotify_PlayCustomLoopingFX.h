#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AnimNotifyState_Base.h"
#include "EPerceptionNoiseLoudness.h"
#include "EPerceptionSoundLengthType.h"
#include "GothicFXInstanceHandle.h"
#include "Templates/SubclassOf.h"
#include "AnimNotify_PlayCustomLoopingFX.generated.h"

class AActor;
class UFMODAudioComponent;
class UFMODEvent;
class UGothicFXDefinition;
class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(CollapseCategories, EditInlineNew)
class G1R_API UAnimNotify_PlayCustomLoopingFX : public UAnimNotifyState_Base {
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
    TSoftObjectPtr<UFMODEvent> FMODEvent;
    
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
    
    UPROPERTY()
    UGothicFXDefinition* FXDefinition;
    
    UPROPERTY()
    TMap<AActor*, FGothicFXInstanceHandle> ActiveEffects;
    
    UPROPERTY(Instanced)
    UFMODAudioComponent* FMODPreview;
    
    UPROPERTY(Instanced)
    UNiagaraComponent* NiagaraPreview;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGothicFXDefinition> FXDefinitionTemplate;
    
public:
    UAnimNotify_PlayCustomLoopingFX();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetTemplateClass(const TSubclassOf<UGothicFXDefinition> Template) const;
    
};

