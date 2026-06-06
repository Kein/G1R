#pragma once
#include "CoreMinimal.h"
#include "ENavigationAgent.h"
#include "ENavigationType.h"
#include "GothicBaseConfig.h"
#include "GothicPathfollowSettings.h"
#include "Templates/SubclassOf.h"
#include "AIAgentConfig_Navigation.generated.h"

class UNavigationQueryFilter;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class UAIAgentConfig_Navigation : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> m_NavigationQueryFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ENavigationType m_PreferedNavigationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ENavigationType, ENavigationAgent> m_NavDataTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NavShotQueryDistance;
    
    UPROPERTY(EditAnywhere)
    float GlobalMetaRepathRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGothicPathfollowSettings DefaultPathfollowSettings;
    
public:
    UAIAgentConfig_Navigation();

};

