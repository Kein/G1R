#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CharacterVisualsGameInstanceSubsystem.generated.h"

UCLASS(DefaultConfig, Config=Game)
class UCharacterVisualsGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    int32 m_defaultLoadPriority;
    
public:
    UCharacterVisualsGameInstanceSubsystem();

};

