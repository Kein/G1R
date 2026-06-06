#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ConversationStatics.generated.h"

class UFMODAudioComponent;
class UFMODEvent;
class UHUDCinematicController;
class UObject;

UCLASS(BlueprintType)
class G1R_API UConversationStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConversationStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowTopSubtitle(const UObject* WorldContextObject, FText Speaker, FText Text, float DurationSeconds);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFMODAudioComponent* PlayLocalizedVoiceline2D(const UObject* WorldContextObject, UFMODEvent* FMODEvent, FText Text, float& OutAudioDurationSeconds);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HideTopSubtitles(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHUDCinematicController* GetHUDCinematicController(const UObject* WorldContextObject);
    
};

