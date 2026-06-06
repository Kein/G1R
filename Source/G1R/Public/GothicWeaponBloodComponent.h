#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GothicWeaponBloodComponent.generated.h"

class UGothicWeatherComponent;
class UMaterialInstanceDynamic;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicWeaponBloodComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UMaterialInstanceDynamic* m_MaterialInstance;
    
    UPROPERTY(Instanced)
    UGothicWeatherComponent* m_WeatherComponent;
    
public:
    UGothicWeaponBloodComponent(const FObjectInitializer& ObjectInitializer);

};

