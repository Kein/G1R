#include "Decorator_CompoundInputHint.h"

UDecorator_CompoundInputHint::UDecorator_CompoundInputHint() : URichTextBlockDecorator(FObjectInitializer::Get()) {
    this->m_FlattenRows = false;
    this->m_CompoundScale = 1.50f;
    this->m_Owner = NULL;
    this->m_DataTable = NULL;
}


