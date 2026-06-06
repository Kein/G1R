#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "CinematicCharacter.generated.h"

class UAbilitySystemComponent;
class UGothicAbilitySystemComponent;

UCLASS()
class G1R_API ACinematicCharacter : public ACharacter, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UGothicAbilitySystemComponent* AbilitySystemComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText m_CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ForceCinematicLOD;
    
    ACinematicCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UAbilitySystemComponent* GetAbilitySystemComponent() const;
    

    // Fix for true pure virtual functions not being implemented
};

