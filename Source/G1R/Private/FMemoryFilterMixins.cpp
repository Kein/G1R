#include "FMemoryFilterMixins.h"

UFMemoryFilterMixins::UFMemoryFilterMixins() {
}

int32 UFMemoryFilterMixins::IsEmpty(const FMemoryFilter& This) {
    return 0;
}

int32 UFMemoryFilterMixins::GetCount(const FMemoryFilter& This) {
    return 0;
}

TArray<FMemorizedEvent> UFMemoryFilterMixins::GetArrayOldestToNewest(const FMemoryFilter& This) {
    return TArray<FMemorizedEvent>();
}

TArray<FMemorizedEvent> UFMemoryFilterMixins::GetArrayNewestToOldest(const FMemoryFilter& This) {
    return TArray<FMemorizedEvent>();
}

TArray<FMemorizedEvent> UFMemoryFilterMixins::GetArray(const FMemoryFilter& This) {
    return TArray<FMemorizedEvent>();
}


