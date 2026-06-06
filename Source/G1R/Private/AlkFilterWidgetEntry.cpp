#include "AlkFilterWidgetEntry.h"

FAlkFilterWidgetEntry::FAlkFilterWidgetEntry() {
    this->m_Visibility = EAlkFilterWidgetEntryVisibility::InitiallyHidden;
    this->m_CanBeMarkedUnseen = false;
    this->m_SortOrder = 0;
}

