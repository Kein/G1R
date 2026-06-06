#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayAbilitySpellBasic.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilitySpellSummon.generated.h"

class AGothicNPCState;
class UAIState_DailyRoutine;
class UGameplayEffect;
class USpawnAIAgentDefinition;

UCLASS()
class G1R_API UGameplayAbilitySpellSummon : public UGameplayAbilitySpellBasic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TSubclassOf<UGameplayEffect> m_SummonedEffect;
    
public:
    UGameplayAbilitySpellSummon();

protected:
    UFUNCTION(BlueprintCallable)
    void SummonAI(TSubclassOf<USpawnAIAgentDefinition> SpawnAIAgentDefinition, FVector position, TSubclassOf<UAIState_DailyRoutine> DailyRoutine);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSummonedServer_Scriptable(AGothicNPCState* CharacterState);
    
};

