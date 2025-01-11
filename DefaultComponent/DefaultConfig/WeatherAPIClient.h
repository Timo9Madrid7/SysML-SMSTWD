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
//## package SMSWTD

//## class WeatherAPIClient
class WeatherAPIClient : public BackendAPIClient {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedWeatherAPIClient;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    WeatherAPIClient(void);
    
    //## auto_generated
    ~WeatherAPIClient(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWeatherAPIClient : public OMAnimatedBackendAPIClient {
    DECLARE_META(WeatherAPIClient, OMAnimatedWeatherAPIClient)
    
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
