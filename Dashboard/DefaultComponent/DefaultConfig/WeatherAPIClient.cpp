/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WeatherAPIClient
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\WeatherAPIClient.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "WeatherAPIClient.h"
//#[ ignore
#define SMSWTD_WeatherAPIClient_WeatherAPIClient_SERIALIZE OM_NO_OP

#define OMAnim_SMSWTD_WeatherAPIClient_setHumidityLevel_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_humidityLevel)

#define OMAnim_SMSWTD_WeatherAPIClient_setHumidityLevel_int_SERIALIZE_RET_VAL

#define OMAnim_SMSWTD_WeatherAPIClient_setTemprature_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_temprature)

#define OMAnim_SMSWTD_WeatherAPIClient_setTemprature_int_SERIALIZE_RET_VAL
//#]

//## package SMSWTD

//## class WeatherAPIClient
//#[ ignore
WeatherAPIClient::p_LocationProvider_lat_C::p_LocationProvider_lat_C(void) : float_latitude_ProxyFlowPropertyInterface(), _p_(0), itsFloat_latitude_ProxyFlowPropertyInterface(NULL) {
}

WeatherAPIClient::p_LocationProvider_lat_C::~p_LocationProvider_lat_C(void) {
    cleanUpRelations();
}

void WeatherAPIClient::p_LocationProvider_lat_C::connectWeatherAPIClient(WeatherAPIClient* part) {
    setItsFloat_latitude_ProxyFlowPropertyInterface(part);
    
}

float_latitude_ProxyFlowPropertyInterface* WeatherAPIClient::p_LocationProvider_lat_C::getItsFloat_latitude_ProxyFlowPropertyInterface(void) {
    return this;
}

void WeatherAPIClient::p_LocationProvider_lat_C::setLatitude(float p_latitude) {
    
    if (itsFloat_latitude_ProxyFlowPropertyInterface != NULL) {
        itsFloat_latitude_ProxyFlowPropertyInterface->setLatitude(p_latitude);
    }
    
}

void WeatherAPIClient::p_LocationProvider_lat_C::setItsFloat_latitude_ProxyFlowPropertyInterface(float_latitude_ProxyFlowPropertyInterface* const p_float_latitude_ProxyFlowPropertyInterface) {
    itsFloat_latitude_ProxyFlowPropertyInterface = p_float_latitude_ProxyFlowPropertyInterface;
}

void WeatherAPIClient::p_LocationProvider_lat_C::cleanUpRelations(void) {
    if(itsFloat_latitude_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_latitude_ProxyFlowPropertyInterface = NULL;
        }
}

WeatherAPIClient::p_LocationProvider_lng_C::p_LocationProvider_lng_C(void) : float_longitude_ProxyFlowPropertyInterface(), _p_(0), itsFloat_longitude_ProxyFlowPropertyInterface(NULL) {
}

WeatherAPIClient::p_LocationProvider_lng_C::~p_LocationProvider_lng_C(void) {
    cleanUpRelations();
}

void WeatherAPIClient::p_LocationProvider_lng_C::connectWeatherAPIClient(WeatherAPIClient* part) {
    setItsFloat_longitude_ProxyFlowPropertyInterface(part);
    
}

float_longitude_ProxyFlowPropertyInterface* WeatherAPIClient::p_LocationProvider_lng_C::getItsFloat_longitude_ProxyFlowPropertyInterface(void) {
    return this;
}

void WeatherAPIClient::p_LocationProvider_lng_C::setLongitude(float p_longitude) {
    
    if (itsFloat_longitude_ProxyFlowPropertyInterface != NULL) {
        itsFloat_longitude_ProxyFlowPropertyInterface->setLongitude(p_longitude);
    }
    
}

void WeatherAPIClient::p_LocationProvider_lng_C::setItsFloat_longitude_ProxyFlowPropertyInterface(float_longitude_ProxyFlowPropertyInterface* const p_float_longitude_ProxyFlowPropertyInterface) {
    itsFloat_longitude_ProxyFlowPropertyInterface = p_float_longitude_ProxyFlowPropertyInterface;
}

void WeatherAPIClient::p_LocationProvider_lng_C::cleanUpRelations(void) {
    if(itsFloat_longitude_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_longitude_ProxyFlowPropertyInterface = NULL;
        }
}

WeatherAPIClient::p_WeatherAPIClient_humidity_C::p_WeatherAPIClient_humidity_C(void) : int_humidityLevel_ProxyFlowPropertyInterface(), _p_(0), itsInt_humidityLevel_ProxyFlowPropertyInterface(NULL) {
}

WeatherAPIClient::p_WeatherAPIClient_humidity_C::~p_WeatherAPIClient_humidity_C(void) {
    cleanUpRelations();
}

int_humidityLevel_ProxyFlowPropertyInterface* WeatherAPIClient::p_WeatherAPIClient_humidity_C::getItsInt_humidityLevel_ProxyFlowPropertyInterface(void) {
    return this;
}

int_humidityLevel_ProxyFlowPropertyInterface* WeatherAPIClient::p_WeatherAPIClient_humidity_C::getOutBound(void) {
    return this;
}

void WeatherAPIClient::p_WeatherAPIClient_humidity_C::setHumidityLevel(int p_humidityLevel) {
    
    if (itsInt_humidityLevel_ProxyFlowPropertyInterface != NULL) {
        itsInt_humidityLevel_ProxyFlowPropertyInterface->setHumidityLevel(p_humidityLevel);
    }
    
}

void WeatherAPIClient::p_WeatherAPIClient_humidity_C::setItsInt_humidityLevel_ProxyFlowPropertyInterface(int_humidityLevel_ProxyFlowPropertyInterface* const p_int_humidityLevel_ProxyFlowPropertyInterface) {
    itsInt_humidityLevel_ProxyFlowPropertyInterface = p_int_humidityLevel_ProxyFlowPropertyInterface;
}

void WeatherAPIClient::p_WeatherAPIClient_humidity_C::cleanUpRelations(void) {
    if(itsInt_humidityLevel_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_humidityLevel_ProxyFlowPropertyInterface = NULL;
        }
}

WeatherAPIClient::p_WeatherAPIClient_temp_C::p_WeatherAPIClient_temp_C(void) : int_temprature_ProxyFlowPropertyInterface(), _p_(0), itsInt_temprature_ProxyFlowPropertyInterface(NULL) {
}

WeatherAPIClient::p_WeatherAPIClient_temp_C::~p_WeatherAPIClient_temp_C(void) {
    cleanUpRelations();
}

int_temprature_ProxyFlowPropertyInterface* WeatherAPIClient::p_WeatherAPIClient_temp_C::getItsInt_temprature_ProxyFlowPropertyInterface(void) {
    return this;
}

int_temprature_ProxyFlowPropertyInterface* WeatherAPIClient::p_WeatherAPIClient_temp_C::getOutBound(void) {
    return this;
}

void WeatherAPIClient::p_WeatherAPIClient_temp_C::setTemprature(int p_temprature) {
    
    if (itsInt_temprature_ProxyFlowPropertyInterface != NULL) {
        itsInt_temprature_ProxyFlowPropertyInterface->setTemprature(p_temprature);
    }
    
}

void WeatherAPIClient::p_WeatherAPIClient_temp_C::setItsInt_temprature_ProxyFlowPropertyInterface(int_temprature_ProxyFlowPropertyInterface* const p_int_temprature_ProxyFlowPropertyInterface) {
    itsInt_temprature_ProxyFlowPropertyInterface = p_int_temprature_ProxyFlowPropertyInterface;
}

void WeatherAPIClient::p_WeatherAPIClient_temp_C::cleanUpRelations(void) {
    if(itsInt_temprature_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_temprature_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

WeatherAPIClient::WeatherAPIClient(void) : BackendAPIClient(), float_latitude_ProxyFlowPropertyInterface(), float_longitude_ProxyFlowPropertyInterface() {
    NOTIFY_CONSTRUCTOR(WeatherAPIClient, WeatherAPIClient(), 0, SMSWTD_WeatherAPIClient_WeatherAPIClient_SERIALIZE);
    initRelations();
}

WeatherAPIClient::~WeatherAPIClient(void) {
    NOTIFY_DESTRUCTOR(~WeatherAPIClient, false);
}

//#[ ignore
void WeatherAPIClient::setHumidityLevel(int p_humidityLevel) {
    if (humidityLevel != p_humidityLevel)  {
        humidityLevel = p_humidityLevel;
        FLOW_DATA_SEND(humidityLevel, p_WeatherAPIClient_humidity, setHumidityLevel, x2String);
    }
}

void WeatherAPIClient::setLatitude(float p_latitude) {
    if (latitude != p_latitude) {
        latitude = p_latitude;
        FLOW_DATA_RECEIVE("latitude", latitude, x2String);
    }
    
}

void WeatherAPIClient::setLongitude(float p_longitude) {
    if (longitude != p_longitude) {
        longitude = p_longitude;
        FLOW_DATA_RECEIVE("longitude", longitude, x2String);
    }
    
}

void WeatherAPIClient::setTemprature(int p_temprature) {
    if (temprature != p_temprature)  {
        temprature = p_temprature;
        FLOW_DATA_SEND(temprature, p_WeatherAPIClient_temp, setTemprature, x2String);
    }
}
//#]

WeatherAPIClient::p_LocationProvider_lat_C* WeatherAPIClient::getP_LocationProvider_lat(void) const {
    return (WeatherAPIClient::p_LocationProvider_lat_C*) &p_LocationProvider_lat;
}

WeatherAPIClient::p_LocationProvider_lat_C* WeatherAPIClient::get_p_LocationProvider_lat(void) const {
    return (WeatherAPIClient::p_LocationProvider_lat_C*) &p_LocationProvider_lat;
}

WeatherAPIClient::p_LocationProvider_lng_C* WeatherAPIClient::getP_LocationProvider_lng(void) const {
    return (WeatherAPIClient::p_LocationProvider_lng_C*) &p_LocationProvider_lng;
}

WeatherAPIClient::p_LocationProvider_lng_C* WeatherAPIClient::get_p_LocationProvider_lng(void) const {
    return (WeatherAPIClient::p_LocationProvider_lng_C*) &p_LocationProvider_lng;
}

WeatherAPIClient::p_WeatherAPIClient_humidity_C* WeatherAPIClient::getP_WeatherAPIClient_humidity(void) const {
    return (WeatherAPIClient::p_WeatherAPIClient_humidity_C*) &p_WeatherAPIClient_humidity;
}

WeatherAPIClient::p_WeatherAPIClient_humidity_C* WeatherAPIClient::get_p_WeatherAPIClient_humidity(void) const {
    return (WeatherAPIClient::p_WeatherAPIClient_humidity_C*) &p_WeatherAPIClient_humidity;
}

WeatherAPIClient::p_WeatherAPIClient_temp_C* WeatherAPIClient::getP_WeatherAPIClient_temp(void) const {
    return (WeatherAPIClient::p_WeatherAPIClient_temp_C*) &p_WeatherAPIClient_temp;
}

WeatherAPIClient::p_WeatherAPIClient_temp_C* WeatherAPIClient::get_p_WeatherAPIClient_temp(void) const {
    return (WeatherAPIClient::p_WeatherAPIClient_temp_C*) &p_WeatherAPIClient_temp;
}

const RhpString WeatherAPIClient::getAppropriateAction(void) const {
    return appropriateAction;
}

void WeatherAPIClient::setAppropriateAction(const RhpString p_appropriateAction) {
    appropriateAction = p_appropriateAction;
}

const int WeatherAPIClient::getHumidityLevel(void) const {
    return humidityLevel;
}

const float WeatherAPIClient::getLatitude(void) const {
    return latitude;
}

const float WeatherAPIClient::getLongitude(void) const {
    return longitude;
}

const int WeatherAPIClient::getTemprature(void) const {
    return temprature;
}

const int WeatherAPIClient::getUvLevel(void) const {
    return uvLevel;
}

void WeatherAPIClient::setUvLevel(const int p_uvLevel) {
    uvLevel = p_uvLevel;
}

const LocationProvider* WeatherAPIClient::getItsLocationProvider(void) const {
    return &itsLocationProvider;
}

void WeatherAPIClient::initRelations(void) {
    if (get_p_LocationProvider_lat() != NULL) {
        get_p_LocationProvider_lat()->connectWeatherAPIClient(this);
    }
    if (get_p_LocationProvider_lng() != NULL) {
        get_p_LocationProvider_lng()->connectWeatherAPIClient(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedWeatherAPIClient::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("humidityLevel", x2String(myReal->humidityLevel));
    aomsAttributes->addAttribute("temprature", x2String(myReal->temprature));
    aomsAttributes->addAttribute("uvLevel", x2String(myReal->uvLevel));
    aomsAttributes->addAttribute("latitude", x2String(myReal->latitude));
    aomsAttributes->addAttribute("longitude", x2String(myReal->longitude));
    aomsAttributes->addAttribute("appropriateAction", x2String(myReal->appropriateAction));
    OMAnimatedBackendAPIClient::serializeAttributes(aomsAttributes);
}

void OMAnimatedWeatherAPIClient::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsLocationProvider", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLocationProvider);
    OMAnimatedBackendAPIClient::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(WeatherAPIClient, SMSWTD, false, BackendAPIClient, OMAnimatedBackendAPIClient, OMAnimatedWeatherAPIClient)

OMINIT_SUPERCLASS(BackendAPIClient, OMAnimatedBackendAPIClient)

OMREGISTER_CLASS

IMPLEMENT_META_OP(OMAnimatedWeatherAPIClient, SMSWTD_WeatherAPIClient_setHumidityLevel_int, "setHumidityLevel", FALSE, "setHumidityLevel(int)", 1)

IMPLEMENT_OP_CALL(SMSWTD_WeatherAPIClient_setHumidityLevel_int, WeatherAPIClient, setHumidityLevel(p_humidityLevel), NO_OP())

IMPLEMENT_META_OP(OMAnimatedWeatherAPIClient, SMSWTD_WeatherAPIClient_setTemprature_int, "setTemprature", FALSE, "setTemprature(int)", 1)

IMPLEMENT_OP_CALL(SMSWTD_WeatherAPIClient_setTemprature_int, WeatherAPIClient, setTemprature(p_temprature), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WeatherAPIClient.cpp
*********************************************************************/
