/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ProcessedDataLoader
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\ProcessedDataLoader.h
*********************************************************************/

#ifndef ProcessedDataLoader_H
#define ProcessedDataLoader_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## class ProcessedDataLoader
#include "DataLoader.h"
//## package SMSWTD

//## class ProcessedDataLoader
class ProcessedDataLoader : public DataLoader {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedProcessedDataLoader;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ProcessedDataLoader(void);
    
    //## auto_generated
    ~ProcessedDataLoader(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedProcessedDataLoader : public OMAnimatedDataLoader {
    DECLARE_META(ProcessedDataLoader, OMAnimatedProcessedDataLoader)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ProcessedDataLoader.h
*********************************************************************/
