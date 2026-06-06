#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GothicMaterialsComponent.generated.h"

class IDisposable;
class UDisposable;
class IMaterialPropertyProvider;
class UMaterialPropertyProvider;
class UMaterialInstanceDynamic;
class UMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicMaterialsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMaterialInstanceDynamic*> DynamicMaterials;
    
    UGothicMaterialsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSweatIntensity(float Amount);
    
    UFUNCTION(BlueprintCallable)
    float GetSweatIntensity();
    
    UFUNCTION(BlueprintCallable)
    TArray<UMaterialInstanceDynamic*> GetDynamicMaterials();
    
private:
    UFUNCTION()
    TScriptInterface<IDisposable> EnqueueModifyWithCustomDynamic(const TScriptInterface<IMaterialPropertyProvider>& PropertyProvider, bool IsDynamic);
    
public:
    UFUNCTION(BlueprintCallable)
    TScriptInterface<IDisposable> EnqueueModify(TScriptInterface<IMaterialPropertyProvider> PropertyProvider);
    
    UFUNCTION(BlueprintCallable)
    TScriptInterface<IDisposable> EnqueueDynamicModify(TScriptInterface<IMaterialPropertyProvider> PropertyProvider);
    
};

