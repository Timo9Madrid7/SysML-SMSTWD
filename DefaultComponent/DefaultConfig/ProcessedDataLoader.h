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
//## class ProcessedDataLoader
#include "RhpString_satelliteImage_ProxyFlowPropertyInterface.h"
//## package SMSWTD

//## class ProcessedDataLoader
class ProcessedDataLoader : public DataLoader, public RhpString_satelliteImage_ProxyFlowPropertyInterface {
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
        void connectProcessedDataLoader(ProcessedDataLoader* part);
        
        //## auto_generated
        RhpString_satelliteImage_ProxyFlowPropertyInterface* getItsRhpString_satelliteImage_ProxyFlowPropertyInterface(void);
        
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
    
    //## package SMSWTD
    class p_ResearcherPortal_satellite_image_C : public RhpString_satelliteImage_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_ResearcherPortal_satellite_image_C(void);
        
        //## auto_generated
        virtual ~p_ResearcherPortal_satellite_image_C(void);
        
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
    friend class OMAnimatedProcessedDataLoader;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ProcessedDataLoader(void);
    
    //## auto_generated
    ~ProcessedDataLoader(void);
    
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
    p_ResearcherPortal_satellite_image_C* getP_ResearcherPortal_satellite_image(void) const;
    
    //## auto_generated
    p_ResearcherPortal_satellite_image_C* get_p_ResearcherPortal_satellite_image(void) const;
    
    //## auto_generated
    const RhpString getSatelliteImage(void) const;

protected :

    //## auto_generated
    void initRelations(void);
    
    ////    Attributes    ////

private :

    RhpString satelliteImage;		//## attribute satelliteImage
    
    ////    Relations and components    ////
    
//#[ ignore
    p_ProcessedDataLoader_satellite_image_C p_ProcessedDataLoader_satellite_image;
    
    p_ResearcherPortal_satellite_image_C p_ResearcherPortal_satellite_image;
//#]
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
