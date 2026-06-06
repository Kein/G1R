#pragma once
#include "CoreMinimal.h"
#include "HUDNotificationData.h"
#include "HUDNotificationData_Chapter.generated.h"

class UGameStory;

USTRUCT(BlueprintType)
struct FHUDNotificationData_Chapter : public FHUDNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    UGameStory* m_Story;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 m_ChapterNumber;
    
    G1R_API FHUDNotificationData_Chapter();
};

