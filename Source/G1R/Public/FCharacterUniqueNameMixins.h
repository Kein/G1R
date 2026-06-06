#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CharacterUniqueName.h"
#include "FCharacterUniqueNameMixins.generated.h"

class AGothicCharacter;
class AGothicCharacterState;
class AGothicNPCState;
class AGothicPlayerState;
class UGameplayAbility_CharacterAI;

UCLASS(BlueprintType)
class G1R_API UFCharacterUniqueNameMixins : public UObject {
    GENERATED_BODY()
public:
    UFCharacterUniqueNameMixins();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool HasSpawnedVisuals(const FCharacterUniqueName& This, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGothicCharacter* GetSpawnedCharacter(const FCharacterUniqueName& This, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGothicPlayerState* GetPlayerState(const FCharacterUniqueName& This, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetNumWithSpawnedVisuals(const FCharacterUniqueName& This, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetNumTotal(const FCharacterUniqueName& This, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGothicNPCState* GetNPCState(const FCharacterUniqueName& This, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGothicCharacterState* GetCharacterState(const FCharacterUniqueName& This, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AGothicCharacter*> GetAllSpawnedCharacters(const FCharacterUniqueName& This, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AGothicPlayerState*> GetAllPlayerStates(const FCharacterUniqueName& This, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AGothicNPCState*> GetAllNPCStates(const FCharacterUniqueName& This, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AGothicCharacterState*> GetAllCharacterStates(const FCharacterUniqueName& This, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGameplayAbility_CharacterAI* GetAI(const FCharacterUniqueName& This, const UObject* WorldContextObject);
    
};

