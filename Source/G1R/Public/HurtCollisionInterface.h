#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "HurtCollisionInterface.generated.h"

class UMaterialInterface;
class UNiagaraSystem;

UINTERFACE(Blueprintable)
class G1R_API UHurtCollisionInterface : public UInterface {
    GENERATED_BODY()
};

class G1R_API IHurtCollisionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UNiagaraSystem* GetWeaponBloodNiagaraSystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UNiagaraSystem* GetMutilationBloodNiagaraSystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMaterialInterface* GetDecalMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UNiagaraSystem* GetBodyBloodNiagaraSystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FLinearColor GetBloodColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetBloodAmount() const;
    
};

