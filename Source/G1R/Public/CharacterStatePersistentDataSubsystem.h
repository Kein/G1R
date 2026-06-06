#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CharacterStateSaveGameData.h"
#include "PersistentDataBaseSubsystem.h"
#include "CharacterStatePersistentDataSubsystem.generated.h"

UCLASS(Config=Game)
class G1R_API UCharacterStatePersistentDataSubsystem : public UPersistentDataBaseSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY()
    TOptional<FCharacterStateSaveGameData> LoadedSaveGameData;
    
    UPROPERTY(Config)
    FGameplayTagContainer LooseTagsToSaveOnCharacters;
    
    UPROPERTY(Config)
    int32 SecondsToBodyDisappear;
    
    UCharacterStatePersistentDataSubsystem();

};

