#pragma once
#include "CoreMinimal.h"
#include "GothicCommonActivatableWidget.h"
#include "OnWritingInitializedDelegate.h"
#include "PageContent.h"
#include "Templates/SubclassOf.h"
#include "WritingUIWidget.generated.h"

class UDocument;
class UTexture2D;
class UWritingDocument;

UCLASS(EditInlineNew)
class G1R_API UWritingUIWidget : public UGothicCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDocument* m_CurrentDocument;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_BackgroundTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPageContent m_WritingContent;
    
    UPROPERTY(BlueprintAssignable)
    FOnWritingInitialized m_OnWritingInitialized;
    
    UWritingUIWidget();

    UFUNCTION()
    void InitializeWriting(TSubclassOf<UWritingDocument> _Document);
    
};

