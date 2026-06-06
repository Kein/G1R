#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GothicBaseConfig.h"
#include "Templates/SubclassOf.h"
#include "WorldPointConfig.h"
#include "WorldPointManagerConfig.generated.h"

class UObject;
class UWorldPointScript;

UCLASS(BlueprintType, EditInlineNew)
class G1R_API UWorldPointManagerConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FWorldPointConfig> m_WorldPointConfigs;
    
public:
    UWorldPointManagerConfig();

    UFUNCTION(BlueprintCallable)
    void AddWorldScene(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void AddWorldRadius(float Radius);
    
    UFUNCTION(BlueprintCallable)
    void AddWorldPosition(FRotator Rotator, FVector position);
    
    UFUNCTION(BlueprintCallable)
    void AddWorldPointWithScript(FName Name, FRotator Rotator, FVector position, TSubclassOf<UWorldPointScript> worldScript);
    
    UFUNCTION(BlueprintCallable)
    void AddWorldPoint(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void AddScriptDefinition(TSubclassOf<UWorldPointScript> worldScript);
    
    UFUNCTION(BlueprintCallable)
    void AddProxyPoint(const int32 ID, const FRotator& Rotator, const FVector& position, const FName& Mesh, const FRotator& extraRotator, const FVector& extraPos);
    
    UFUNCTION(BlueprintCallable)
    void AddPayload(UObject* Payload);
    
    UFUNCTION(BlueprintCallable)
    void AddActorTransform(FRotator Rotator, FVector position);
    
};

