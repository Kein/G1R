#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LightValues.h"
#include "AdditionalConversationLight.generated.h"

class URectLightComponent;

UCLASS(Abstract)
class G1R_API AAdditionalConversationLight : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    bool bIsForSpeaker;
    
    UPROPERTY(EditAnywhere, Instanced)
    URectLightComponent* RectLightComponent;
    
    UPROPERTY(EditAnywhere)
    FLightValues LightValues;
    
    AAdditionalConversationLight(const FObjectInitializer& ObjectInitializer);

};

