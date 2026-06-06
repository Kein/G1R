#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DataModuleComponent.generated.h"

class UDataModule;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UDataModuleComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_DataModules)
    TArray<UDataModule*> m_DataModules;
    
public:
    UDataModuleComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnRep_DataModules();
    
};

