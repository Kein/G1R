#include "GothicDirectionalLight.h"
#include "Components/ArrowComponent.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/StaticMeshComponent.h"

AGothicDirectionalLight::AGothicDirectionalLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("DayDirectionalLight"));
    this->m_UpdateWithGameTime = false;
    this->m_DawnHour = 6.00f;
    this->m_CurrentLightPreset = EWeather::Sunny;
    this->m_NightDirectionalLightComponent = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("NightDirectionalLight"));
    this->m_DayDirectionalLightComponent = (UDirectionalLightComponent*)RootComponent;
    this->M_Moon = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Moon"));
    this->m_DayArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("DayArrow"));
    this->m_NightArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("NightArrow"));
    this->M_Moon->SetupAttachment(RootComponent);
    this->m_NightDirectionalLightComponent->SetupAttachment(RootComponent);
}


