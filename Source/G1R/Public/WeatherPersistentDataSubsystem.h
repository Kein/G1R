#pragma once
#include "CoreMinimal.h"
#include "PersistentDataBaseSubsystem.h"
#include "WeatherSaveGame.h"
#include "WeatherPersistentDataSubsystem.generated.h"

class UObject;
class UWeatherPersistentDataSubsystem;

UCLASS()
class G1R_API UWeatherPersistentDataSubsystem : public UPersistentDataBaseSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FWeatherSaveGame WeatherGameState;
    
    UWeatherPersistentDataSubsystem();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWeatherPersistentDataSubsystem* GetWeatherPersistantDataSubsystem(UObject* WorldContextObject);
    
};

