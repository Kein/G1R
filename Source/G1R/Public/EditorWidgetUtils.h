#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Animation/AnimTypes.h"
#include "EditorWidgetUtils.generated.h"

class UAnimMontage;

UCLASS(BlueprintType)
class G1R_API UEditorWidgetUtils : public UObject {
    GENERATED_BODY()
public:
    UEditorWidgetUtils();

private:
    UFUNCTION(BlueprintCallable)
    static void OpenDirectoryDialog(const FString& DialogTitle, const FString& DefaultPath, FString& OutFolderName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FAnimNotifyEvent> GetFirstSequenceNotifies(UAnimMontage* Montage);
    
};

