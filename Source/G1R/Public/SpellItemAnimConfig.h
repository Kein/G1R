#pragma once
#include "CoreMinimal.h"
#include "WeaponItemAnimConfig.h"
#include "SpellItemAnimConfig.generated.h"

class UAnimMontage;

UCLASS(Abstract, EditInlineNew)
class G1R_API USpellItemAnimConfig : public UWeaponItemAnimConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_CastMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_CastEndMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_CastFailMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_LaunchMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_LaunchEndMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_LaunchFailMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_CustomLaunchMontage;
    
private:
    UPROPERTY()
    TWeakObjectPtr<UAnimMontage> m_CastMontageInternal;
    
    UPROPERTY()
    TWeakObjectPtr<UAnimMontage> m_CastEndMontageInternal;
    
    UPROPERTY()
    TWeakObjectPtr<UAnimMontage> m_CastFailMontageInternal;
    
    UPROPERTY()
    TWeakObjectPtr<UAnimMontage> m_LaunchMontageInternal;
    
    UPROPERTY()
    TWeakObjectPtr<UAnimMontage> m_LaunchEndMontageInternal;
    
    UPROPERTY()
    TWeakObjectPtr<UAnimMontage> m_LaunchMovingEndMontageInternal;
    
    UPROPERTY()
    TWeakObjectPtr<UAnimMontage> m_LaunchFailMontageInternal;
    
    UPROPERTY()
    TWeakObjectPtr<UAnimMontage> m_CustomLaunchMontageInternal;
    
public:
    USpellItemAnimConfig();

    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetLaunchMontage();
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetLaunchFailMontage();
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetLaunchEndMontage();
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetCustomLaunchMontage();
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetCastMontage();
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetCastFailMontage();
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetCastEndMontage();
    
    UFUNCTION()
    TArray<UAnimMontage*> GetAllMontages();
    
};

