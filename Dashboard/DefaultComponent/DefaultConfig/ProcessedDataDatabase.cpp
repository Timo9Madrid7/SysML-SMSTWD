/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ProcessedDataDatabase
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\ProcessedDataDatabase.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ProcessedDataDatabase.h"
//#[ ignore
#define SMSWTD_ProcessedDataDatabase_ProcessedDataDatabase_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class ProcessedDataDatabase
ProcessedDataDatabase::ProcessedDataDatabase(void) : Database() {
    NOTIFY_CONSTRUCTOR(ProcessedDataDatabase, ProcessedDataDatabase(), 0, SMSWTD_ProcessedDataDatabase_ProcessedDataDatabase_SERIALIZE);
}

ProcessedDataDatabase::~ProcessedDataDatabase(void) {
    NOTIFY_DESTRUCTOR(~ProcessedDataDatabase, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedProcessedDataDatabase::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedDatabase::serializeAttributes(aomsAttributes);
}

void OMAnimatedProcessedDataDatabase::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedDatabase::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(ProcessedDataDatabase, SMSWTD, false, Database, OMAnimatedDatabase, OMAnimatedProcessedDataDatabase)

OMINIT_SUPERCLASS(Database, OMAnimatedDatabase)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ProcessedDataDatabase.cpp
*********************************************************************/
