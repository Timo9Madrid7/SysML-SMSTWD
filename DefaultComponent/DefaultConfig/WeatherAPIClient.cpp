/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WeatherAPIClient
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\WeatherAPIClient.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "WeatherAPIClient.h"
//#[ ignore
#define SMSWTD_WeatherAPIClient_WeatherAPIClient_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class WeatherAPIClient
WeatherAPIClient::WeatherAPIClient(void) : BackendAPIClient() {
    NOTIFY_CONSTRUCTOR(WeatherAPIClient, WeatherAPIClient(), 0, SMSWTD_WeatherAPIClient_WeatherAPIClient_SERIALIZE);
}

WeatherAPIClient::~WeatherAPIClient(void) {
    NOTIFY_DESTRUCTOR(~WeatherAPIClient, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedWeatherAPIClient::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedBackendAPIClient::serializeAttributes(aomsAttributes);
}

void OMAnimatedWeatherAPIClient::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedBackendAPIClient::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(WeatherAPIClient, SMSWTD, false, BackendAPIClient, OMAnimatedBackendAPIClient, OMAnimatedWeatherAPIClient)

OMINIT_SUPERCLASS(BackendAPIClient, OMAnimatedBackendAPIClient)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WeatherAPIClient.cpp
*********************************************************************/
