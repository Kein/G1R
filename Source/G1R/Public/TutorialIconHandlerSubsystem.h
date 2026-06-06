#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "TutorialIconHandlerSubsystem_Data.h"
#include "TutorialIconHandlerSubsystem.generated.h"

class UInputAction;

UCLASS()
class G1R_API UTutorialIconHandlerSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FName, FTutorialIconHandlerSubsystem_Data> m_Data;
    
    UPROPERTY(Transient)
    TMap<UInputAction*, FTutorialIconHandlerSubsystem_Data> m_CompoundData;
    
public:
    UTutorialIconHandlerSubsystem();

protected:
    UFUNCTION()
    void HandleInputSettingsChanged();
    
};

