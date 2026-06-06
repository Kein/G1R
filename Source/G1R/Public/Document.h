#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "Document.generated.h"

class AGothicCharacterState;
class UDocument;
class UDocumentElement;
class UDocumentSegment;

UCLASS(BlueprintType)
class G1R_API UDocument : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UDocumentSegment>> AddedSegments;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<UDocumentSegment*> BuiltSegments;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FString> MetaData;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<UDocumentSegment>> PotentialSegmentClasses;
    
    UDocument();

    UFUNCTION(BlueprintCallable)
    static void RememberSegmentViewed(AGothicCharacterState* Reader, TSubclassOf<UDocument> DocumentClass, TSubclassOf<UDocumentSegment> SegmentClass);
    
    UFUNCTION(BlueprintCallable)
    static void RememberSegmentUnlocked(AGothicCharacterState* Reader, TSubclassOf<UDocument> DocumentClass, TSubclassOf<UDocumentSegment> SegmentClass);
    
    UFUNCTION(BlueprintCallable)
    void NotifyShownToReader(AGothicCharacterState* Reader);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSegmentUnlockedByReader(const AGothicCharacterState* Reader, TSubclassOf<UDocumentSegment> SegmentClass);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAllowedToUnlockSegment(AGothicCharacterState* Reader, TSubclassOf<UDocument> DocumentClass, TSubclassOf<UDocumentSegment> SegmentClass);
    
    UFUNCTION(BlueprintPure)
    bool HasBeenBuilt() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UDocumentElement*> GetContentOfLastBuild() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<TSubclassOf<UDocumentSegment>> FindSegmentsViewedByReader(const AGothicCharacterState* Reader, TSubclassOf<UDocument> DocumentClass);
    
    UFUNCTION(BlueprintCallable)
    static TArray<TSubclassOf<UDocumentSegment>> FindSegmentsUnlockedByReader(const AGothicCharacterState* Reader, TSubclassOf<UDocument> DocumentClass);
    
    UFUNCTION(BlueprintCallable)
    TArray<UDocumentElement*> BuildDocument(const AGothicCharacterState* Reader);
    
    UFUNCTION(BlueprintCallable)
    void AddSegment(TSubclassOf<UDocumentSegment> SegmentClass);
    
};

