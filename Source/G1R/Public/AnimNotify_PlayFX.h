#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_PlayFX.generated.h"

class UFMODAudioComponent;
class UFMODEvent;
class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_PlayFX : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag EffectTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
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
    UAnimNotify_PlayFX();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetPreviewNiagara(TSoftObjectPtr<UNiagaraSystem> NiagaraSystem, FVector PositionOffset, FRotator PreviewRotationOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetEffectTag(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetAttachPoint(FName bone) const;
    
};

