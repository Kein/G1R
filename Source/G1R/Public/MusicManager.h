#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FMODBlueprintStatics.h"
#include "ELoadingScreenType.h"
#include "Templates/SubclassOf.h"
#include "MusicManager.generated.h"

class UMusicManager;
class UMusicModeParameter;
class UObject;

UCLASS(BlueprintType)
class G1R_API UMusicManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UMusicModeParameter*> AvailableMusicModes;
    
    UPROPERTY()
    TSubclassOf<UMusicModeParameter> CurrentMusicModeClass;
    
    UPROPERTY()
    FFMODEventInstance MasterEventInstance;
    
public:
    UMusicManager();

    UFUNCTION(BlueprintCallable)
    void PlayMusic();
    
    UFUNCTION(BlueprintPure)
    bool PlayerIsInBossFightMusicRegion() const;
    
protected:
    UFUNCTION()
    void HandleLoadingScreenChanged(ELoadingScreenType LoadingScreenType);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMusicManager* Get(const UObject* WorldContextObject);
    
};

