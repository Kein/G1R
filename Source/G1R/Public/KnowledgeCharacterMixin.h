#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KnowledgeCharacterMixin.generated.h"

class AGothicCharacterState;

UCLASS(BlueprintType)
class UKnowledgeCharacterMixin : public UObject {
    GENERATED_BODY()
public:
    UKnowledgeCharacterMixin();

    UFUNCTION(BlueprintCallable)
    static FName TextToKnowledge(const FText& Text, const FString& Prefix);
    
    UFUNCTION(BlueprintCallable)
    static void RememberVoiceline(AGothicCharacterState* This, const FText& Voiceline);
    
    UFUNCTION(BlueprintCallable)
    static bool RemembersVoiceline(const AGothicCharacterState* This, const FText& Voiceline);
    
    UFUNCTION(BlueprintCallable)
    static bool Remembers(const AGothicCharacterState* This, FName Knowledge);
    
    UFUNCTION(BlueprintCallable)
    static void Remember(AGothicCharacterState* This, FName Knowledge);
    
};

