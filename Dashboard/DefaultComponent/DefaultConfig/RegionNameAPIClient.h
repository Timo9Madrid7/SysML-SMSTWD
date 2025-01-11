/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RegionNameAPIClient
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\RegionNameAPIClient.h
*********************************************************************/

#ifndef RegionNameAPIClient_H
#define RegionNameAPIClient_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## class RegionNameAPIClient
#include "float_latitude_ProxyFlowPropertyInterface.h"
//## class RegionNameAPIClient
#include "float_longitude_ProxyFlowPropertyInterface.h"
//## classInstance itsLocationProvider
#include "LocationProvider.h"
//## class p_RegionNameAPIClient_region_C
#include "RhpString_region_ProxyFlowPropertyInterface.h"
//#[ ignore
#define OMAnim_SMSWTD_RegionNameAPIClient_setRegion_RhpString_ARGS_DECLARATION RhpString p_region;
//#]

//## package SMSWTD

//## class RegionNameAPIClient
class RegionNameAPIClient : public float_longitude_ProxyFlowPropertyInterface, public float_latitude_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package SMSWTD
    class p_LocationProvider_lng_C : public float_longitude_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_LocationProvider_lng_C(void);
        
        //## auto_generated
        virtual ~p_LocationProvider_lng_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectRegionNameAPIClient(RegionNameAPIClient* part);
        
        //## auto_generated
        float_longitude_ProxyFlowPropertyInterface* getItsFloat_longitude_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        virtual void setLongitude(float p_longitude);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsFloat_longitude_ProxyFlowPropertyInterface(float_longitude_ProxyFlowPropertyInterface* const p_float_longitude_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        float_longitude_ProxyFlowPropertyInterface* itsFloat_longitude_ProxyFlowPropertyInterface;		//## link itsFloat_longitude_ProxyFlowPropertyInterface
    };
    
    //## package SMSWTD
    class p_LocationProvider_lat_C : public float_latitude_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_LocationProvider_lat_C(void);
        
        //## auto_generated
        virtual ~p_LocationProvider_lat_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectRegionNameAPIClient(RegionNameAPIClient* part);
        
        //## auto_generated
        float_latitude_ProxyFlowPropertyInterface* getItsFloat_latitude_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        virtual void setLatitude(float p_latitude);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsFloat_latitude_ProxyFlowPropertyInterface(float_latitude_ProxyFlowPropertyInterface* const p_float_latitude_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        float_latitude_ProxyFlowPropertyInterface* itsFloat_latitude_ProxyFlowPropertyInterface;		//## link itsFloat_latitude_ProxyFlowPropertyInterface
    };
    
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
        RhpString_region_ProxyFlowPropertyInterface* getItsRhpString_region_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        RhpString_region_ProxyFlowPropertyInterface* getOutBound(void);
        
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
    friend class OMAnimatedRegionNameAPIClient;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    RegionNameAPIClient(void);
    
    //## auto_generated
    ~RegionNameAPIClient(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setLatitude(float p_latitude);
    
    void setLongitude(float p_longitude);
    
    void setRegion(RhpString p_region);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_LocationProvider_lng_C* getP_LocationProvider_lng(void) const;
    
    //## auto_generated
    p_LocationProvider_lng_C* get_p_LocationProvider_lng(void) const;
    
    //## auto_generated
    p_LocationProvider_lat_C* getP_LocationProvider_lat(void) const;
    
    //## auto_generated
    p_LocationProvider_lat_C* get_p_LocationProvider_lat(void) const;
    
    //## auto_generated
    p_RegionNameAPIClient_region_C* getP_RegionNameAPIClient_region(void) const;
    
    //## auto_generated
    p_RegionNameAPIClient_region_C* get_p_RegionNameAPIClient_region(void) const;
    
    //## auto_generated
    const float getLatitude(void) const;
    
    //## auto_generated
    const float getLongitude(void) const;
    
    //## auto_generated
    const RhpString getRegion(void) const;
    
    //## auto_generated
    const LocationProvider* getItsLocationProvider(void) const;

protected :

    //## auto_generated
    void initRelations(void);
    
    ////    Attributes    ////

private :

    float latitude;		//## attribute latitude
    
    float longitude;		//## attribute longitude
    
    RhpString region;		//## attribute region
    
    ////    Relations and components    ////
    
//#[ ignore
    p_LocationProvider_lng_C p_LocationProvider_lng;
    
    p_LocationProvider_lat_C p_LocationProvider_lat;
    
    p_RegionNameAPIClient_region_C p_RegionNameAPIClient_region;
//#]

    LocationProvider itsLocationProvider;		//## classInstance itsLocationProvider
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(SMSWTD_RegionNameAPIClient_setRegion_RhpString)

//#[ ignore
class OMAnimatedRegionNameAPIClient : virtual public AOMInstance {
    DECLARE_META(RegionNameAPIClient, OMAnimatedRegionNameAPIClient)
    
    DECLARE_META_OP(SMSWTD_RegionNameAPIClient_setRegion_RhpString)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RegionNameAPIClient.h
*********************************************************************/
