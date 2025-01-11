/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ProcessedDataDatabase
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\ProcessedDataDatabase.h
*********************************************************************/

#ifndef ProcessedDataDatabase_H
#define ProcessedDataDatabase_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## class ProcessedDataDatabase
#include "Database.h"
//## package SMSWTD

//## class ProcessedDataDatabase
class ProcessedDataDatabase : public Database {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedProcessedDataDatabase;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ProcessedDataDatabase(void);
    
    //## auto_generated
    ~ProcessedDataDatabase(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedProcessedDataDatabase : public OMAnimatedDatabase {
    DECLARE_META(ProcessedDataDatabase, OMAnimatedProcessedDataDatabase)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ProcessedDataDatabase.h
*********************************************************************/
