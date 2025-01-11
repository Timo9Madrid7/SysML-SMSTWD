/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WeatherAPIClient
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\WeatherAPIClient.h
*********************************************************************/

#ifndef WeatherAPIClient_H
#define WeatherAPIClient_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## class WeatherAPIClient
#include "BackendAPIClient.h"
//## class WeatherAPIClient
#include "float_latitude_ProxyFlowPropertyInterface.h"
//## class WeatherAPIClient
#include "float_longitude_ProxyFlowPropertyInterface.h"
//## classInstance itsLocationProvider
#include "LocationProvider.h"
//## class p_WeatherAPIClient_humidity_C
#include "int_humidityLevel_ProxyFlowPropertyInterface.h"
//## class p_WeatherAPIClient_temp_C
#include "int_temprature_ProxyFlowPropertyInterface.h"
//#[ ignore
#define OMAnim_SMSWTD_WeatherAPIClient_setHumidityLevel_int_ARGS_DECLARATION int p_humidityLevel;

#define OMAnim_SMSWTD_WeatherAPIClient_setTemprature_int_ARGS_DECLARATION int p_temprature;
//#]

//## package SMSWTD

//## class WeatherAPIClient
class WeatherAPIClient : public BackendAPIClient, public float_latitude_ProxyFlowPropertyInterface, public float_longitude_ProxyFlowPropertyInterface {
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
        void connectWeatherAPIClient(WeatherAPIClient* part);
        
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
    class p_LocationProvider_lng_C : public float_longitude_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_LocationProvider_lng_C(void);
        
        //## auto_generated
        virtual ~p_LocationProvider_lng_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectWeatherAPIClient(WeatherAPIClient* part);
        
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
    class p_WeatherAPIClient_humidity_C : public int_humidityLevel_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_WeatherAPIClient_humidity_C(void);
        
        //## auto_generated
        virtual ~p_WeatherAPIClient_humidity_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        int_humidityLevel_ProxyFlowPropertyInterface* getItsInt_humidityLevel_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_humidityLevel_ProxyFlowPropertyInterface* getOutBound(void);
        
        //## auto_generated
        virtual void setHumidityLevel(int p_humidityLevel);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsInt_humidityLevel_ProxyFlowPropertyInterface(int_humidityLevel_ProxyFlowPropertyInterface* const p_int_humidityLevel_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        int_humidityLevel_ProxyFlowPropertyInterface* itsInt_humidityLevel_ProxyFlowPropertyInterface;		//## link itsInt_humidityLevel_ProxyFlowPropertyInterface
    };
    
    //## package SMSWTD
    class p_WeatherAPIClient_temp_C : public int_temprature_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_WeatherAPIClient_temp_C(void);
        
        //## auto_generated
        virtual ~p_WeatherAPIClient_temp_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        int_temprature_ProxyFlowPropertyInterface* getItsInt_temprature_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_temprature_ProxyFlowPropertyInterface* getOutBound(void);
        
        //## auto_generated
        virtual void setTemprature(int p_temprature);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsInt_temprature_ProxyFlowPropertyInterface(int_temprature_ProxyFlowPropertyInterface* const p_int_temprature_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        int_temprature_ProxyFlowPropertyInterface* itsInt_temprature_ProxyFlowPropertyInterface;		//## link itsInt_temprature_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedWeatherAPIClient;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    WeatherAPIClient(void);
    
    //## auto_generated
    ~WeatherAPIClient(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setHumidityLevel(int p_humidityLevel);
    
    void setLatitude(float p_latitude);
    
    void setLongitude(float p_longitude);
    
    void setTemprature(int p_temprature);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_LocationProvider_lat_C* getP_LocationProvider_lat(void) const;
    
    //## auto_generated
    p_LocationProvider_lat_C* get_p_LocationProvider_lat(void) const;
    
    //## auto_generated
    p_LocationProvider_lng_C* getP_LocationProvider_lng(void) const;
    
    //## auto_generated
    p_LocationProvider_lng_C* get_p_LocationProvider_lng(void) const;
    
    //## auto_generated
    p_WeatherAPIClient_humidity_C* getP_WeatherAPIClient_humidity(void) const;
    
    //## auto_generated
    p_WeatherAPIClient_humidity_C* get_p_WeatherAPIClient_humidity(void) const;
    
    //## auto_generated
    p_WeatherAPIClient_temp_C* getP_WeatherAPIClient_temp(void) const;
    
    //## auto_generated
    p_WeatherAPIClient_temp_C* get_p_WeatherAPIClient_temp(void) const;
    
    //## auto_generated
    const RhpString getAppropriateAction(void) const;
    
    //## auto_generated
    void setAppropriateAction(const RhpString p_appropriateAction);
    
    //## auto_generated
    const int getHumidityLevel(void) const;
    
    //## auto_generated
    const float getLatitude(void) const;
    
    //## auto_generated
    const float getLongitude(void) const;
    
    //## auto_generated
    const int getTemprature(void) const;
    
    //## auto_generated
    const int getUvLevel(void) const;
    
    //## auto_generated
    void setUvLevel(const int p_uvLevel);
    
    //## auto_generated
    const LocationProvider* getItsLocationProvider(void) const;

protected :

    //## auto_generated
    void initRelations(void);
    
    ////    Attributes    ////

private :

    RhpString appropriateAction;		//## attribute appropriateAction
    
    int humidityLevel;		//## attribute humidityLevel
    
    float latitude;		//## attribute latitude
    
    float longitude;		//## attribute longitude
    
    int temprature;		//## attribute temprature
    
    int uvLevel;		//## attribute uvLevel
    
    ////    Relations and components    ////
    
//#[ ignore
    p_LocationProvider_lat_C p_LocationProvider_lat;
    
    p_LocationProvider_lng_C p_LocationProvider_lng;
    
    p_WeatherAPIClient_humidity_C p_WeatherAPIClient_humidity;
    
    p_WeatherAPIClient_temp_C p_WeatherAPIClient_temp;
//#]

    LocationProvider itsLocationProvider;		//## classInstance itsLocationProvider
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(SMSWTD_WeatherAPIClient_setHumidityLevel_int)

DECLARE_OPERATION_CLASS(SMSWTD_WeatherAPIClient_setTemprature_int)

//#[ ignore
class OMAnimatedWeatherAPIClient : public OMAnimatedBackendAPIClient {
    DECLARE_META(WeatherAPIClient, OMAnimatedWeatherAPIClient)
    
    DECLARE_META_OP(SMSWTD_WeatherAPIClient_setHumidityLevel_int)
    
    DECLARE_META_OP(SMSWTD_WeatherAPIClient_setTemprature_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WeatherAPIClient.h
*********************************************************************/
