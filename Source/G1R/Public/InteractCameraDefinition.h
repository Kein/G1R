#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Camera/PlayerCameraManager.h"
#include "InteractCameraDefinition.generated.h"

UCLASS(Abstract, BlueprintType)
class G1R_API UInteractCameraDefinition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EViewTargetBlendFunction> m_BlendFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BlendExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_LockOutgoing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Time;
    
    UInteractCameraDefinition();

};

