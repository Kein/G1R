#pragma once
#include "CoreMinimal.h"
#include "AttackConfig.h"
#include "Templates/SubclassOf.h"
#include "AttackSpawnActorConfig.generated.h"

class AActor;
class UAnimMontage;

UCLASS(Abstract)
class G1R_API UAttackSpawnActorConfig : public UAttackConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_AttackMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> m_ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_SocketName;
    
public:
    UAttackSpawnActorConfig();

    UFUNCTION(BlueprintPure)
    FName GetSocketName() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetAttackMontage() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AActor> GetActorClass() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetActor() const;
    
};

