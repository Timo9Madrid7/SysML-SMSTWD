/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorDatabase
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SensorDatabase.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SensorDatabase.h"
//#[ ignore
#define SMSWTD_SensorDatabase_SensorDatabase_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class SensorDatabase
SensorDatabase::SensorDatabase(void) : Database() {
    NOTIFY_CONSTRUCTOR(SensorDatabase, SensorDatabase(), 0, SMSWTD_SensorDatabase_SensorDatabase_SERIALIZE);
}

SensorDatabase::~SensorDatabase(void) {
    NOTIFY_DESTRUCTOR(~SensorDatabase, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSensorDatabase::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedDatabase::serializeAttributes(aomsAttributes);
}

void OMAnimatedSensorDatabase::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedDatabase::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(SensorDatabase, SMSWTD, false, Database, OMAnimatedDatabase, OMAnimatedSensorDatabase)

OMINIT_SUPERCLASS(Database, OMAnimatedDatabase)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorDatabase.cpp
*********************************************************************/
