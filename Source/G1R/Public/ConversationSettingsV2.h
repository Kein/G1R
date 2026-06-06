#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "ConversationSettingsV2.generated.h"

class AConversationCameraV2;
class UConversationWidget;

UCLASS(DefaultConfig, Config=Game)
class G1R_API UConversationSettingsV2 : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UConversationWidget> ConversationWidgetClass;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<AConversationCameraV2> ConversationCameraClass;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FString, FGameplayTag> ExpressionNameToTag;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FFilePath> StoryProjectRelativePaths;
    
    UConversationSettingsV2();

};

