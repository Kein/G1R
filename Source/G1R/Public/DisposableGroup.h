#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Disposable.h"
#include "DisposableGroup.generated.h"

UCLASS(BlueprintType)
class G1R_API UDisposableGroup : public UObject, public IDisposable {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<TScriptInterface<IDisposable>> Disposables;
    
public:
    UDisposableGroup();

    UFUNCTION(BlueprintCallable)
    void AddDisposable(TScriptInterface<IDisposable>& Disposable);
    

    // Fix for true pure virtual functions not being implemented
};

