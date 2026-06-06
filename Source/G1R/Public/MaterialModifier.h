#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Disposable.h"
#include "ModifyState.h"
#include "MaterialModifier.generated.h"

class IMaterialPropertyModifier;
class UMaterialPropertyModifier;

UCLASS(BlueprintType)
class G1R_API UMaterialModifier : public UObject, public IDisposable {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ModifyState State;
    
    UPROPERTY()
    TArray<TScriptInterface<IMaterialPropertyModifier>> Modifiers;
    
public:
    UMaterialModifier();

    UFUNCTION(BlueprintCallable)
    void RegisterModifier(TScriptInterface<IMaterialPropertyModifier> Modify);
    
private:
    UFUNCTION()
    static void ExecutePropertyModify(const TScriptInterface<IMaterialPropertyModifier>& Modifier);
    
public:
    UFUNCTION(BlueprintCallable)
    void Dispose_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void Apply();
    

    // Fix for true pure virtual functions not being implemented
};

