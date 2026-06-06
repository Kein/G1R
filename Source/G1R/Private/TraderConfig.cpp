#include "TraderConfig.h"
#include "Templates/SubclassOf.h"

UTraderConfig::UTraderConfig() {
    this->m_TotalSeconds = -1000.00f;
    this->m_Liquidity = 0;
}

void UTraderConfig::AddTraderItem(TSubclassOf<UItemDefinition> Item, int32 Amount, const FString& Chapter, TSubclassOf<UDifficultySettings> difficulty) {
}


