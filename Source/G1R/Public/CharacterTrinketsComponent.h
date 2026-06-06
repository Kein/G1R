#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActiveGameplayEffectHandle.h"
#include "EInventoryTypes.h"
#include "GothicActorComponentInterface.h"
#include "Templates/SubclassOf.h"
#include "CharacterTrinketsComponent.generated.h"

class UItemDefinition;

UCLASS(ClassGroup=Custom, Within=GothicCharacter, meta=(BlueprintSpawnableComponent))
class G1R_API UCharacterTrinketsComponent : public UActorComponent, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<EInventoryTypes, FActiveGameplayEffectHandle> m_GameplayEffectContextHandles;
    
public:
    UCharacterTrinketsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Reliable, Server)
    void ServerNotifyTrinketUnEquip(EInventoryTypes InventoryType);
    
    UFUNCTION(Reliable, Server)
    void ServerNotifyTrinketChanged(EInventoryTypes InventoryType, TSubclassOf<UItemDefinition> itemDef);
    

    // Fix for true pure virtual functions not being implemented
};

