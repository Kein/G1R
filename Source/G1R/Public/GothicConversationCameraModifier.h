#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "GothicConversationCameraModifier.generated.h"

UCLASS()
class G1R_API UGothicConversationCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UGothicConversationCameraModifier();

};

