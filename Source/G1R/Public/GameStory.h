#pragma once
#include "CoreMinimal.h"
#include "WorldPartition/DataLayer/DataLayerInstance.h"
#include "TickableGameStateSubsystem.h"
#include "Templates/SubclassOf.h"
#include "GameStory.generated.h"

class UGameStory;
class UHUDNotificationWidgetBase;
class UObject;

UCLASS(Abstract, Blueprintable, Config=Game)
class G1R_API UGameStory : public UTickableGameStateSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FText ChapterFormatText;
    
    UPROPERTY(SaveGame, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Chapter;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FName, EDataLayerRuntimeState> StoryDataLayersState;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHUDNotificationWidgetBase> ChapterNotificationWidgetClass;
    
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bShouldActivateStory;
    
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float SortOrder;
    
public:
    UGameStory();

protected:
    UFUNCTION(BlueprintCallable)
    void RequestChapterHUDNotification(int32 NewChapter);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsStoryActive(const UObject* WorldContextObject, TSubclassOf<UGameStory> StoryClass);
    
    UFUNCTION(BlueprintPure)
    bool IsInChapter(int32 Number) const;
    
    UFUNCTION(BlueprintPure)
    bool HasReachedChapter(int32 Number) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TSubclassOf<UGameStory> GetMainStoryClass(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGameStory* GetMainStory(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    FText GetChapterDisplayName(int32 ChapterIndex);
    
    UFUNCTION(BlueprintPure)
    int32 GetChapter() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UGameStory*> GetAllActiveStories(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGameStory* GetActiveStoryOfClass(const UObject* WorldContextObject, TSubclassOf<UGameStory> StoryClass);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateStoryDataLayer(const FString& DataLayerName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeChapter(int32 NewChapter);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_HandleChapterChanged(int32 NewChapter);
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateStoryDataLayer(const FString& DataLayerName);
    
};

