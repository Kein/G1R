#pragma once
#include "CoreMinimal.h"
#include "HUDNotificationData.h"
#include "HUDNotificationData_Glossary.generated.h"

class UGlossaryDocument;

USTRUCT(BlueprintType)
struct FHUDNotificationData_Glossary : public FHUDNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    UGlossaryDocument* m_GlossaryDocument;
    
    G1R_API FHUDNotificationData_Glossary();
};

