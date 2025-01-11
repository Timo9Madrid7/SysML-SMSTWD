/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorDatabase
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SensorDatabase.h
*********************************************************************/

#ifndef SensorDatabase_H
#define SensorDatabase_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## class SensorDatabase
#include "Database.h"
//## package SMSWTD

//## class SensorDatabase
class SensorDatabase : public Database {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSensorDatabase;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SensorDatabase(void);
    
    //## auto_generated
    ~SensorDatabase(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSensorDatabase : public OMAnimatedDatabase {
    DECLARE_META(SensorDatabase, OMAnimatedSensorDatabase)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorDatabase.h
*********************************************************************/
