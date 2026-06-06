#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/WorldSettings.h"
#include "Templates/SubclassOf.h"
#include "GothicWorldSettings.generated.h"

class AGothicWorldSettings;
class UDifficultyPreset;
class UFreepointManagerConfig;
class UGameTimeSubsystemConfig;
class UMaterialParameterCollection;
class UObject;
class UOutlineSubsystemConfig;
class USpawningManagerConfig;
class USpawnpointManagerConfig;
class UTerritorySubsystemWorldConfig;
class UTexture2D;
class UWeatherSubsystemConfig;
class UWorldItemSpawnConfig;
class UWorldPointManagerConfig;

UCLASS()
class G1R_API AGothicWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UFreepointManagerConfig* FreepointManagerConfig;
    
    UPROPERTY(EditAnywhere, Instanced)
    USpawnpointManagerConfig* SpawnpointManagerConfig;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGameTimeSubsystemConfig* GameTimeConfig;
    
    UPROPERTY(EditAnywhere, Instanced)
    UWeatherSubsystemConfig* WeatherConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UTerritorySubsystemWorldConfig* TerritoryWorldConfig;
    
    UPROPERTY(EditAnywhere, Instanced)
    USpawningManagerConfig* SpawningManagerConfig;
    
    UPROPERTY(EditAnywhere)
    FName WorldPartitionGridToBeFullyLoadedForNPCSpawn;
    
    UPROPERTY(EditAnywhere, Instanced)
    UOutlineSubsystemConfig* OutlineSubsystemConfig;
    
    UPROPERTY(EditAnywhere, Instanced)
    UWorldPointManagerConfig* WorldPointManagerConfig;
    
    UPROPERTY(EditAnywhere, Instanced)
    UWorldItemSpawnConfig* WorldItemSpawnConfig;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDifficultyPreset> DifficultyPresetOverride;
    
    UPROPERTY(EditAnywhere)
    FVector WorldBoundsMin;
    
    UPROPERTY(EditAnywhere)
    FVector WorldBoundsMax;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> MapTexture;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialParameterCollection> ParameterCollection;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialParameterCollection> SleeperFadeParameterCollection;
    
    AGothicWorldSettings(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGothicWorldSettings* Get(const UObject* WorldContextObject);
    
};

