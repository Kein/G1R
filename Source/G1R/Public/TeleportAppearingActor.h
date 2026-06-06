#pragma once
#include "CoreMinimal.h"
#include "VFXCue.h"
#include "TeleportAppearingActor.generated.h"

class AGothicCharacter;

UCLASS()
class G1R_API ATeleportAppearingActor : public AVFXCue {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<AGothicCharacter*> m_CharactersTeleported;
    
public:
    ATeleportAppearingActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnAppearingStart(const TArray<AGothicCharacter*>& charactersTeleported, float Duration);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAppearingEnd();
    
};

