/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ProcessedDataLoader
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\ProcessedDataLoader.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ProcessedDataLoader.h"
//#[ ignore
#define SMSWTD_ProcessedDataLoader_ProcessedDataLoader_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class ProcessedDataLoader
ProcessedDataLoader::ProcessedDataLoader(void) : DataLoader() {
    NOTIFY_CONSTRUCTOR(ProcessedDataLoader, ProcessedDataLoader(), 0, SMSWTD_ProcessedDataLoader_ProcessedDataLoader_SERIALIZE);
}

ProcessedDataLoader::~ProcessedDataLoader(void) {
    NOTIFY_DESTRUCTOR(~ProcessedDataLoader, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedProcessedDataLoader::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedDataLoader::serializeAttributes(aomsAttributes);
}

void OMAnimatedProcessedDataLoader::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedDataLoader::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(ProcessedDataLoader, SMSWTD, false, DataLoader, OMAnimatedDataLoader, OMAnimatedProcessedDataLoader)

OMINIT_SUPERCLASS(DataLoader, OMAnimatedDataLoader)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ProcessedDataLoader.cpp
*********************************************************************/
