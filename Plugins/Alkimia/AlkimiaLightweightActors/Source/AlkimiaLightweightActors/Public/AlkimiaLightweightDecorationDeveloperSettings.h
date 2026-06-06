#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Engine/EngineTypes.h"
#include "AlkimiaLightweightDecorationDeveloperSettings.generated.h"

class AActor;

UCLASS(DefaultConfig, Config=Engine)
class ALKIMIALIGHTWEIGHTACTORS_API UAlkimiaLightweightDecorationDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bAllowLightweightReplacementsInEditor;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAllowLightweightReplacementsOnCook;
    
    UPROPERTY(Config, EditAnywhere)
    int32 LightweightificationNumActorThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    int32 LightweightificationSubcellSplitThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    int32 LightweightificationSubcellSize;
    
    UPROPERTY(Config, EditAnywhere)
    TSet<TSoftClassPtr<AActor>> FullyConvertActorsOfClass;
    
    UPROPERTY(Config, EditAnywhere)
    TSet<TSoftClassPtr<AActor>> IgnoreActorsOfClass;
    
    UPROPERTY(Config, EditAnywhere)
    TSet<TEnumAsByte<EMaterialShadingModel>> SupportedShadingModels;
    
    UAlkimiaLightweightDecorationDeveloperSettings();

};

