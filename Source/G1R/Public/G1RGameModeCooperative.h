#pragma once
#include "CoreMinimal.h"
#include "CooperativeGameMode.h"
#include "Templates/SubclassOf.h"
#include "G1RGameModeCooperative.generated.h"

class UPlayerConfig;
class UWorldDefinition;

UCLASS(NonTransient)
class G1R_API AG1RGameModeCooperative : public ACooperativeGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UWorldDefinition> m_WorldDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UPlayerConfig> m_MainPlayerConfig;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<TSubclassOf<UPlayerConfig>> m_SecondaryPlayerConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_CleanSaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_CanAutosave;
    
    AG1RGameModeCooperative(const FObjectInitializer& ObjectInitializer);

};

