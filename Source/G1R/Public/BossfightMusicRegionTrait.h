#pragma once
#include "CoreMinimal.h"
#include "StoryActionRegionTrait.h"
#include "BossfightMusicRegionTrait.generated.h"

UCLASS(EditInlineNew)
class G1R_API UBossfightMusicRegionTrait : public UStoryActionRegionTrait {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName DefaultContentID;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere)
    float HysteresisThreshold;
    
    UBossfightMusicRegionTrait();

    UFUNCTION(BlueprintNativeEvent)
    FName GetContentID() const;
    
};

