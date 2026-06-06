#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMusicMode.h"
#include "Templates/SubclassOf.h"
#include "MusicModeParameter.generated.h"

class AGothicCharacter;
class AGothicCharacterState;
class UCommonActivatableWidget;
class UGothicAudioSettings;
class UMusicModeParameter;
class UWorld;

UCLASS(Abstract, Blueprintable)
class UMusicModeParameter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EMusicMode Mode;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UMusicModeParameter>> InappropriateModesToFollow;
    
    UPROPERTY(EditDefaultsOnly)
    float Priority;
    
    UMusicModeParameter();

    UFUNCTION(BlueprintPure)
    bool IsWidgetClassActive(TSoftClassPtr<UCommonActivatableWidget> SoftWidgetClass) const;
    
    UFUNCTION(BlueprintPure)
    bool IsMapActive(UWorld* Map) const;
    
    UFUNCTION(BlueprintPure)
    bool IntroIsPlaying() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacterState* GetPlayerCharacterState() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetPlayerCharacter() const;
    
    UFUNCTION(BlueprintPure)
    UGothicAudioSettings* GetMusicSettings() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool CanBeActivated() const;
    
};

