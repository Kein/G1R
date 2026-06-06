#include "GlobalCrimeDataEntry.h"

FGlobalCrimeDataEntry::FGlobalCrimeDataEntry() {
    this->ID = 0;
    this->bIsForgiven = false;
    this->AffectedEntitySource = ECrimeAffectedEntitySource::Area;
    this->ItemDefinitionClass = NULL;
    this->InteractiveObjectDefinitionClass = NULL;
}

