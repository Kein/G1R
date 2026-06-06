#pragma once
#include "CoreMinimal.h"
#include "ProjectileVisual.h"
#include "SpellProjectileVisual.generated.h"

UCLASS()
class G1R_API ASpellProjectileVisual : public AProjectileVisual {
    GENERATED_BODY()
public:
    ASpellProjectileVisual(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent)
    void Update_Scriptable(float DeltaSeconds);
    
};

