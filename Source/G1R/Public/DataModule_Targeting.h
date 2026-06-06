#pragma once
#include "CoreMinimal.h"
#include "DataModule.h"
#include "Templates/SubclassOf.h"
#include "DataModule_Targeting.generated.h"

class AActor;
class ACharacter;
class USceneComponent;
class UTargetConfigBase;

UCLASS(BlueprintType)
class G1R_API UDataModule_Targeting : public UDataModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    TWeakObjectPtr<AActor> m_Target;
    
    UPROPERTY(Replicated)
    bool m_IsCameraRelevant;
    
    UPROPERTY(Export, ReplicatedUsing=OnRep_TargetComp)
    TWeakObjectPtr<USceneComponent> m_TargetComp;
    
    UPROPERTY(Replicated)
    TArray<ACharacter*> m_TargetedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UTargetConfigBase> m_TargetConfigClass;
    
public:
    UDataModule_Targeting();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_TargetComp();
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetTargetedByCount() const;
    
    UFUNCTION(BlueprintPure)
    TArray<ACharacter*> GetTargetedBy() const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetTargetComp() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetTarget() const;
    
};

