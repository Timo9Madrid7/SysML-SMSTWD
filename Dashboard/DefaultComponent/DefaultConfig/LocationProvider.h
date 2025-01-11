/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: LocationProvider
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\LocationProvider.h
*********************************************************************/

#ifndef LocationProvider_H
#define LocationProvider_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## class p_LocationProvider_lat_C
#include "float_latitude_ProxyFlowPropertyInterface.h"
//## class p_LocationProvider_lng_C
#include "float_longitude_ProxyFlowPropertyInterface.h"
//#[ ignore
#define OMAnim_SMSWTD_LocationProvider_setLatitude_float_ARGS_DECLARATION float p_latitude;

#define OMAnim_SMSWTD_LocationProvider_setLongitude_float_ARGS_DECLARATION float p_longitude;
//#]

//## package SMSWTD

//## class LocationProvider
class LocationProvider {
public :

//#[ ignore
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
        float_latitude_ProxyFlowPropertyInterface* getItsFloat_latitude_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        float_latitude_ProxyFlowPropertyInterface* getOutBound(void);
        
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
    class p_LocationProvider_lng_C : public float_longitude_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_LocationProvider_lng_C(void);
        
        //## auto_generated
        virtual ~p_LocationProvider_lng_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        float_longitude_ProxyFlowPropertyInterface* getItsFloat_longitude_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        float_longitude_ProxyFlowPropertyInterface* getOutBound(void);
        
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
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedLocationProvider;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    LocationProvider(void);
    
    //## auto_generated
    ~LocationProvider(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setLatitude(float p_latitude);
    
    void setLongitude(float p_longitude);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    Rhp_int32_t getP_LocationProvider_lat(void) const;
    
    //## auto_generated
    p_LocationProvider_lat_C* getP_LocationProvider_latAt(Rhp_int32_t iterI) const;
    
    //## auto_generated
    p_LocationProvider_lat_C* get_p_LocationProvider_lat(Rhp_int32_t iterI) const;
    
    //## auto_generated
    Rhp_int32_t getP_LocationProvider_lng(void) const;
    
    //## auto_generated
    p_LocationProvider_lng_C* getP_LocationProvider_lngAt(Rhp_int32_t iterI) const;
    
    //## auto_generated
    p_LocationProvider_lng_C* get_p_LocationProvider_lng(Rhp_int32_t iterI) const;
    
    //## auto_generated
    const float getLatitude(void) const;
    
    //## auto_generated
    const float getLongitude(void) const;
    
    ////    Attributes    ////

private :

    float latitude;		//## attribute latitude
    
    float longitude;		//## attribute longitude
    
    ////    Relations and components    ////
    
//#[ ignore
    p_LocationProvider_lat_C p_LocationProvider_lat[2];
    
    p_LocationProvider_lng_C p_LocationProvider_lng[2];
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(SMSWTD_LocationProvider_setLatitude_float)

DECLARE_OPERATION_CLASS(SMSWTD_LocationProvider_setLongitude_float)

//#[ ignore
class OMAnimatedLocationProvider : virtual public AOMInstance {
    DECLARE_META(LocationProvider, OMAnimatedLocationProvider)
    
    DECLARE_META_OP(SMSWTD_LocationProvider_setLatitude_float)
    
    DECLARE_META_OP(SMSWTD_LocationProvider_setLongitude_float)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\LocationProvider.h
*********************************************************************/
