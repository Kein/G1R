#include "Document.h"
#include "Templates/SubclassOf.h"

UDocument::UDocument() {
}

void UDocument::RememberSegmentViewed(AGothicCharacterState* Reader, TSubclassOf<UDocument> DocumentClass, TSubclassOf<UDocumentSegment> SegmentClass) {
}

void UDocument::RememberSegmentUnlocked(AGothicCharacterState* Reader, TSubclassOf<UDocument> DocumentClass, TSubclassOf<UDocumentSegment> SegmentClass) {
}

void UDocument::NotifyShownToReader(AGothicCharacterState* Reader) {
}

bool UDocument::IsSegmentUnlockedByReader(const AGothicCharacterState* Reader, TSubclassOf<UDocumentSegment> SegmentClass) {
    return false;
}

bool UDocument::IsAllowedToUnlockSegment(AGothicCharacterState* Reader, TSubclassOf<UDocument> DocumentClass, TSubclassOf<UDocumentSegment> SegmentClass) {
    return false;
}

bool UDocument::HasBeenBuilt() const {
    return false;
}

TArray<UDocumentElement*> UDocument::GetContentOfLastBuild() const {
    return TArray<UDocumentElement*>();
}

TArray<TSubclassOf<UDocumentSegment>> UDocument::FindSegmentsViewedByReader(const AGothicCharacterState* Reader, TSubclassOf<UDocument> DocumentClass) {
    return TArray<TSubclassOf<UDocumentSegment>>();
}

TArray<TSubclassOf<UDocumentSegment>> UDocument::FindSegmentsUnlockedByReader(const AGothicCharacterState* Reader, TSubclassOf<UDocument> DocumentClass) {
    return TArray<TSubclassOf<UDocumentSegment>>();
}

TArray<UDocumentElement*> UDocument::BuildDocument(const AGothicCharacterState* Reader) {
    return TArray<UDocumentElement*>();
}

void UDocument::AddSegment(TSubclassOf<UDocumentSegment> SegmentClass) {
}


