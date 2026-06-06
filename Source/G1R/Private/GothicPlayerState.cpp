#include "GothicPlayerState.h"

AGothicPlayerState::AGothicPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsABot = false;
}


AGothicPlayerState* AGothicPlayerState::GetMainPlayerState(const UObject* WorldContextObject) {
    return NULL;
}

AGothicPlayerState* AGothicPlayerState::GetLocalPlayerState(const UObject* WorldContextObject) {
    return NULL;
}

AGothicPlayerState* AGothicPlayerState::FindPlayerByUniqueName(const UObject* WorldContextObject, FName UniqueName) {
    return NULL;
}

AGothicPlayerState* AGothicPlayerState::FindPlayerByGlobalId(const UObject* WorldContextObject, FName GlobalId) {
    return NULL;
}

TArray<AGothicPlayerState*> AGothicPlayerState::FindAllPlayersByUniqueName(const UObject* WorldContextObject, FName UniqueName) {
    return TArray<AGothicPlayerState*>();
}


