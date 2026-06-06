#pragma once
#include "CoreMinimal.h"
#include "TopicSelectedDelegateDelegate.generated.h"

class UConversationTopic;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTopicSelectedDelegate, UConversationTopic*, Topic);

