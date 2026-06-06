#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GothicConversationCameraModifier.h"
#include "GothicCameraModifierDirectionInput.generated.h"

UCLASS()
class G1R_API UGothicCameraModifierDirectionInput : public UGothicConversationCameraModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MouseIdleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MousePercentageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StickPercentageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxYawChangeMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxPitchChangeMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxYawChangeStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxPitchChangeStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveTimeStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveTimeMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EasyInExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 CustomPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LowestFramerate;
    
    UPROPERTY()
    FVector2D RightStickPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bModifierIsActive;
    
public:
    UGothicCameraModifierDirectionInput();

};

