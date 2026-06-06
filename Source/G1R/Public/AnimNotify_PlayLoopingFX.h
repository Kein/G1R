#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AnimNotifyState_Base.h"
#include "AnimNotify_PlayLoopingFX.generated.h"

class UFMODAudioComponent;
class UFMODEvent;
class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(CollapseCategories, EditInlineNew)
class G1R_API UAnimNotify_PlayLoopingFX : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag EffectTag;
    
    UPROPERTY(EditAnywhere)
    FName AttachPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> PreviewNiagara;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector PreviewNiagaraPositionOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator PreviewNiagaraRotationOffset;
    
    UPROPERTY(Instanced)
    UFMODAudioComponent* FMODPreviewInstance;
    
    UPROPERTY(Instanced)
    UNiagaraComponent* NiagaraPreviewInstance;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UFMODEvent> PreviewFMODEvent;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UFMODEvent> FMODOEventOverride;
    
    UPROPERTY(EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator RotationOffset;
    
public:
    UAnimNotify_PlayLoopingFX();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetPreviewNiagara(TSoftObjectPtr<UNiagaraSystem> NiagaraSystem, FVector PositionOffset, FRotator PreviewRotationOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetEffectTag(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetAttachPoint(FName bone) const;
    
};

