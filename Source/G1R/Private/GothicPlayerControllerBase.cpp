#include "GothicPlayerControllerBase.h"
#include "BehaviorModuleComponent.h"
#include "ControlCharacterComponent.h"
#include "GothicAudioOcclusionComponent.h"
#include "GothicPathFollowingComponent.h"
#include "GothicWeatherAudioComponent.h"
#include "IndoorDetectionComponent.h"
#include "Templates/SubclassOf.h"

AGothicPlayerControllerBase::AGothicPlayerControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->m_PathfollowingComponent = CreateDefaultSubobject<UGothicPathFollowingComponent>(TEXT("PathFollowingComponent"));
    this->m_IndoorDetectionComponent = CreateDefaultSubobject<UIndoorDetectionComponent>(TEXT("OcclusionDetectionComponent"));
    this->m_AudioOcclusionComponent = CreateDefaultSubobject<UGothicAudioOcclusionComponent>(TEXT("AudioOcclusionComponent"));
    this->m_BehaviorModuleComponent = CreateDefaultSubobject<UBehaviorModuleComponent>(TEXT("BehaviorModuleComponent"));
    this->m_WeatherAudioComponent = CreateDefaultSubobject<UGothicWeatherAudioComponent>(TEXT("WeatherAudioComponent"));
    this->m_GothicCharacter = NULL;
    this->m_WidgetClass = NULL;
    this->m_TransitionWidgetClass = NULL;
    this->m_WidgetDebugClass = NULL;
    this->m_Widget = NULL;
    this->m_TransitionWidget = NULL;
    this->m_DebugWidget = NULL;
    this->m_GothicInputConfig = NULL;
    this->m_InvertedVerticalCamera = false;
    this->m_InvertedHorizontalCamera = false;
    this->m_GeneralCameraSensitivity = 1.00f;
    this->m_LeftStickYAxis = 0.00f;
    this->m_LeftStickXAxis = 0.00f;
    this->m_RightStickYAxis = 0.00f;
    this->m_RightStickXAxis = 0.00f;
    this->m_ControlCharacterComponent = CreateDefaultSubobject<UControlCharacterComponent>(TEXT("ControlCharacterComponent"));
    this->m_InputContextControllerClass = NULL;
    this->m_GothicInputContextController = NULL;
    this->m_AudioOcclusionComponent->SetupAttachment(RootComponent);
    this->m_IndoorDetectionComponent->SetupAttachment(RootComponent);
    this->m_WeatherAudioComponent->SetupAttachment(RootComponent);
}

void AGothicPlayerControllerBase::UpdateControllerModifiers(bool InvertedHorizontalCamera, bool InvertedVerticalCamera, float CameraSensitivity) {
}

void AGothicPlayerControllerBase::ToggleHUD() {
}

void AGothicPlayerControllerBase::SetHudVisibility(ESlateVisibility Visibility) {
}

void AGothicPlayerControllerBase::SetActiveAudioComponentsPaused(bool bPaused) {
}

void AGothicPlayerControllerBase::Server_NotifyPlayerViewedQuest_Implementation(TSubclassOf<UQuest> QuestClass) const {
}

void AGothicPlayerControllerBase::Server_EquipItemToCharacter_Implementation(const AGothicCharacter* characterToEquip, int32 ID, EInventoryTypes InventoryType) {
}

void AGothicPlayerControllerBase::OnNoMotionController(const FGameplayTag CallbackTag, int32 NewCount) const {
}

void AGothicPlayerControllerBase::OnNoMotionCharacter(const FGameplayTag CallbackTag, int32 NewCount) {
}

void AGothicPlayerControllerBase::OnNoMotionAll(const FGameplayTag CallbackTag, int32 NewCount) {
}

void AGothicPlayerControllerBase::ModifyTextForSubtitle(FText& TextToBeDisplayed, FText& SecondaryTextToBeDisplayed) {
}

UGothicWeatherAudioComponent* AGothicPlayerControllerBase::GetWeatherAudioComponent() const {
    return NULL;
}

UPlayerWidget* AGothicPlayerControllerBase::GetPlayerWidget() const {
    return NULL;
}

UIndoorDetectionComponent* AGothicPlayerControllerBase::GetIndoorDetectionComponent() const {
    return NULL;
}

AGothicHUDBase* AGothicPlayerControllerBase::GetGothicHUD() const {
    return NULL;
}

UAudioEnvironmentRegionTrait* AGothicPlayerControllerBase::GetCurrentAudioEnvironment() const {
    return NULL;
}

void AGothicPlayerControllerBase::ClientSetSpectatorCamera_Implementation(const FVector cameraLocation, const FRotator cameraRotation) {
}

void AGothicPlayerControllerBase::ClientOnPossess_Implementation(APawn* aPawn) {
}

AGothicCharacterState* AGothicPlayerControllerBase::BP_GetCharacterState() const {
    return NULL;
}


