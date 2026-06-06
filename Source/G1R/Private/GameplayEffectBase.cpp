#include "GameplayEffectBase.h"
#include "GameplayEffectComponents/AdditionalEffectsGameplayEffectComponent.h"
#include "GameplayEffectComponents/AssetTagsGameplayEffectComponent.h"
#include "GameplayEffectComponents/BlockAbilityTagsGameplayEffectComponent.h"
#include "GameplayEffectComponents/TargetTagRequirementsGameplayEffectComponent.h"
#include "GameplayEffectComponents/TargetTagsGameplayEffectComponent.h"
#include "GothicAbilitiesGameplayEffectComponent.h"

UGameplayEffectBase::UGameplayEffectBase() {
    this->bExecutePeriodicEffectOnApplication = false;
    //FIXME this->GEComponents.AddDefaulted(6);
    //this->TargetTagsComponent = CreateDefaultSubobject<UTargetTagsGameplayEffectComponent>(TEXT("TagComponent"));
    //this->BlockAbilityTagsComponent = CreateDefaultSubobject<UBlockAbilityTagsGameplayEffectComponent>(TEXT("BlockAbilityTagsComponent"));
    //this->AssetTagsComponent = CreateDefaultSubobject<UAssetTagsGameplayEffectComponent>(TEXT("AssetTagsComponent"));
    //this->TargetTagRequirements = CreateDefaultSubobject<UTargetTagRequirementsGameplayEffectComponent>(TEXT("TargetTagRequirements"));
    this->RemoveOther = NULL;
    //this->AdditionalEffects = CreateDefaultSubobject<UAdditionalEffectsGameplayEffectComponent>(TEXT("AdditionalEffects"));
    //this->AbilitiesComponent = CreateDefaultSubobject<UGothicAbilitiesGameplayEffectComponent>(TEXT("AbilitiesComponent"));
}

void UGameplayEffectBase::BP_RemoveOtherTags() {
}


