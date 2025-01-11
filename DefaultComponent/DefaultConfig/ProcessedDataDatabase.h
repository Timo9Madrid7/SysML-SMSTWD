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
//## class p_ProcessedDataLoader_satellite_image_C
#include "RhpString_satelliteImage_ProxyFlowPropertyInterface.h"
//#[ ignore
#define OMAnim_SMSWTD_ProcessedDataDatabase_setSatelliteImage_RhpString_ARGS_DECLARATION RhpString p_satelliteImage;
//#]

//## package SMSWTD

//## class ProcessedDataDatabase
class ProcessedDataDatabase : public Database {
public :

//#[ ignore
    //## package SMSWTD
    class p_ProcessedDataLoader_satellite_image_C : public RhpString_satelliteImage_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_ProcessedDataLoader_satellite_image_C(void);
        
        //## auto_generated
        virtual ~p_ProcessedDataLoader_satellite_image_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        RhpString_satelliteImage_ProxyFlowPropertyInterface* getItsRhpString_satelliteImage_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        RhpString_satelliteImage_ProxyFlowPropertyInterface* getOutBound(void);
        
        //## auto_generated
        virtual void setSatelliteImage(RhpString p_satelliteImage);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsRhpString_satelliteImage_ProxyFlowPropertyInterface(RhpString_satelliteImage_ProxyFlowPropertyInterface* const p_RhpString_satelliteImage_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        RhpString_satelliteImage_ProxyFlowPropertyInterface* itsRhpString_satelliteImage_ProxyFlowPropertyInterface;		//## link itsRhpString_satelliteImage_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedProcessedDataDatabase;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ProcessedDataDatabase(void);
    
    //## auto_generated
    ~ProcessedDataDatabase(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setSatelliteImage(RhpString p_satelliteImage);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_ProcessedDataLoader_satellite_image_C* getP_ProcessedDataLoader_satellite_image(void) const;
    
    //## auto_generated
    p_ProcessedDataLoader_satellite_image_C* get_p_ProcessedDataLoader_satellite_image(void) const;
    
    //## auto_generated
    const RhpString getSatelliteImage(void) const;
    
    ////    Attributes    ////

private :

    RhpString satelliteImage;		//## attribute satelliteImage
    
    ////    Relations and components    ////
    
//#[ ignore
    p_ProcessedDataLoader_satellite_image_C p_ProcessedDataLoader_satellite_image;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(SMSWTD_ProcessedDataDatabase_setSatelliteImage_RhpString)

//#[ ignore
class OMAnimatedProcessedDataDatabase : public OMAnimatedDatabase {
    DECLARE_META(ProcessedDataDatabase, OMAnimatedProcessedDataDatabase)
    
    DECLARE_META_OP(SMSWTD_ProcessedDataDatabase_setSatelliteImage_RhpString)
    
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
