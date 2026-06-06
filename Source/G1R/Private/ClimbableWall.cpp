#include "ClimbableWall.h"
#include "Components/BoxComponent.h"

AClimbableWall::AClimbableWall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->m_BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Entry Area"));
    this->m_Character = NULL;
    this->m_CharacterCapsuleComponent = NULL;
    this->m_BoxComponent->SetupAttachment(RootComponent);
}


