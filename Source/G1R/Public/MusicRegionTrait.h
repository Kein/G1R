#pragma once
#include "CoreMinimal.h"
#include "StoryActionRegionTrait.h"
#include "MusicRegionTrait.generated.h"

class AGothicCharacter;

UCLASS(EditInlineNew)
class G1R_API UMusicRegionTrait : public UStoryActionRegionTrait {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName MusicLocation;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere)
    float HysteresisThreshold;
    
    UPROPERTY(EditAnywhere)
    float DefaultCustomValue;
    
    UMusicRegionTrait();

    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetPlayerCharacter() const;
    
    UFUNCTION(BlueprintNativeEvent)
    float GetCustomValue() const;
    
};

