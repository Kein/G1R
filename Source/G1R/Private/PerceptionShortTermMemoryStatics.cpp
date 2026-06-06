#include "PerceptionShortTermMemoryStatics.h"

UPerceptionShortTermMemoryStatics::UPerceptionShortTermMemoryStatics() {
}

bool UPerceptionShortTermMemoryStatics::IsEmpty(const FPerceptionShortTermMemory& This) {
    return false;
}

bool UPerceptionShortTermMemoryStatics::HasAny(const FPerceptionShortTermMemory& This) {
    return false;
}

int32 UPerceptionShortTermMemoryStatics::GetNum(const FPerceptionShortTermMemory& This) {
    return 0;
}

TArray<FRememberedPerception> UPerceptionShortTermMemoryStatics::GetArray(const FPerceptionShortTermMemory& This) {
    return TArray<FRememberedPerception>();
}


