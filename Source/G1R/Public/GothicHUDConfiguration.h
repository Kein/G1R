#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "GothicHUDConfiguration.generated.h"

class UUserWidget;

UCLASS(BlueprintType, EditInlineNew)
class G1R_API UGothicHUDConfiguration : public UGothicBaseConfig {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FString, TSoftClassPtr<UUserWidget>> BlueprintPaths;
    
    UPROPERTY()
    TMap<FString, int32> BlueprintZOrders;
    
public:
    UGothicHUDConfiguration();

    UFUNCTION(BlueprintCallable)
    void AddBlueprintPath(const FString& BlueprintName, const FName& BlueprintPath, const int32 ZOrder);
    
};

