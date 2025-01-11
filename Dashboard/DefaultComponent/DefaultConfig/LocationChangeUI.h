/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: LocationChangeUI
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\LocationChangeUI.h
*********************************************************************/

#ifndef LocationChangeUI_H
#define LocationChangeUI_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## classInstance itsRegionNameAPIClient
#include "RegionNameAPIClient.h"
//## class LocationChangeUI
#include "RhpString_region_ProxyFlowPropertyInterface.h"
//## package SMSWTD

//## class LocationChangeUI
class LocationChangeUI : public RhpString_region_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package SMSWTD
    class p_RegionNameAPIClient_region_C : public RhpString_region_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_RegionNameAPIClient_region_C(void);
        
        //## auto_generated
        virtual ~p_RegionNameAPIClient_region_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectLocationChangeUI(LocationChangeUI* part);
        
        //## auto_generated
        RhpString_region_ProxyFlowPropertyInterface* getItsRhpString_region_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        virtual void setRegion(RhpString p_region);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsRhpString_region_ProxyFlowPropertyInterface(RhpString_region_ProxyFlowPropertyInterface* const p_RhpString_region_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        RhpString_region_ProxyFlowPropertyInterface* itsRhpString_region_ProxyFlowPropertyInterface;		//## link itsRhpString_region_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedLocationChangeUI;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    LocationChangeUI(void);
    
    //## auto_generated
    ~LocationChangeUI(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setRegion(RhpString p_region);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_RegionNameAPIClient_region_C* getP_RegionNameAPIClient_region(void) const;
    
    //## auto_generated
    p_RegionNameAPIClient_region_C* get_p_RegionNameAPIClient_region(void) const;
    
    //## auto_generated
    const RhpString getRegion(void) const;
    
    //## auto_generated
    const RegionNameAPIClient* getItsRegionNameAPIClient(void) const;

protected :

    //## auto_generated
    void initRelations(void);
    
    ////    Attributes    ////

private :

    RhpString region;		//## attribute region
    
    ////    Relations and components    ////
    
//#[ ignore
    p_RegionNameAPIClient_region_C p_RegionNameAPIClient_region;
//#]

    RegionNameAPIClient itsRegionNameAPIClient;		//## classInstance itsRegionNameAPIClient
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedLocationChangeUI : virtual public AOMInstance {
    DECLARE_META(LocationChangeUI, OMAnimatedLocationChangeUI)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\LocationChangeUI.h
*********************************************************************/
