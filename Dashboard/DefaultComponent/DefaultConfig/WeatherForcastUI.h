/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WeatherForcastUI
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\WeatherForcastUI.h
*********************************************************************/

#ifndef WeatherForcastUI_H
#define WeatherForcastUI_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## class WeatherForcastUI
#include "int_humidityLevel_ProxyFlowPropertyInterface.h"
//## classInstance itsWeatherAPIClient
#include "WeatherAPIClient.h"
//## class p_WeatherAPIClient_temp_C
#include "int_temprature_ProxyFlowPropertyInterface.h"
//## package SMSWTD

//## class WeatherForcastUI
class WeatherForcastUI : public int_humidityLevel_ProxyFlowPropertyInterface {
public :

//#[ ignore
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
        void connectWeatherForcastUI(WeatherForcastUI* part);
        
        //## auto_generated
        int_humidityLevel_ProxyFlowPropertyInterface* getItsInt_humidityLevel_ProxyFlowPropertyInterface(void);
        
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
    friend class OMAnimatedWeatherForcastUI;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    WeatherForcastUI(void);
    
    //## auto_generated
    ~WeatherForcastUI(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setHumidityLevel(int p_humidityLevel);
    
    void setTemprature(int p_temprature);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_WeatherAPIClient_humidity_C* getP_WeatherAPIClient_humidity(void) const;
    
    //## auto_generated
    p_WeatherAPIClient_humidity_C* get_p_WeatherAPIClient_humidity(void) const;
    
    //## auto_generated
    p_WeatherAPIClient_temp_C* getP_WeatherAPIClient_temp(void) const;
    
    //## auto_generated
    p_WeatherAPIClient_temp_C* get_p_WeatherAPIClient_temp(void) const;
    
    //## auto_generated
    const int getHumidityLevel(void) const;
    
    //## auto_generated
    const int getTemprature(void) const;
    
    //## auto_generated
    const int getUvLevel(void) const;
    
    //## auto_generated
    void setUvLevel(const int p_uvLevel);
    
    //## auto_generated
    const WeatherAPIClient* getItsWeatherAPIClient(void) const;

protected :

    //## auto_generated
    void initRelations(void);
    
    ////    Attributes    ////

private :

    int humidityLevel;		//## attribute humidityLevel
    
    int temprature;		//## attribute temprature
    
    int uvLevel;		//## attribute uvLevel
    
    ////    Relations and components    ////
    
//#[ ignore
    p_WeatherAPIClient_humidity_C p_WeatherAPIClient_humidity;
    
    p_WeatherAPIClient_temp_C p_WeatherAPIClient_temp;
//#]

    WeatherAPIClient itsWeatherAPIClient;		//## classInstance itsWeatherAPIClient
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWeatherForcastUI : virtual public AOMInstance {
    DECLARE_META(WeatherForcastUI, OMAnimatedWeatherForcastUI)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WeatherForcastUI.h
*********************************************************************/
