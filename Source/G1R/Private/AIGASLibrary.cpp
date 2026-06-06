#include "AIGASLibrary.h"
#include "Templates/SubclassOf.h"

UAIGASLibrary::UAIGASLibrary() {
}

bool UAIGASLibrary::HasTags(AActor* Entity, const FGameplayTagContainer& Tags) {
    return false;
}

FGameplayTag UAIGASLibrary::GetHitType(AActor* Entity) {
    return FGameplayTag{};
}

float UAIGASLibrary::GetAttributeValue(AActor* Entity, TSubclassOf<UAttributeSetBase> attributSetClass, FName attributName) {
    return 0.0f;
}


