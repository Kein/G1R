#include "DataModule_LookAt.h"

UDataModule_LookAt::UDataModule_LookAt() {
}

FRotator UDataModule_LookAt::GetLookAtRotation() const {
    return FRotator{};
}

FVector UDataModule_LookAt::GetLookAtPosition() const {
    return FVector{};
}

FVector UDataModule_LookAt::GetLookAtPoint() const {
    return FVector{};
}

float UDataModule_LookAt::GetEnableLookAt() const {
    return 0.0f;
}


