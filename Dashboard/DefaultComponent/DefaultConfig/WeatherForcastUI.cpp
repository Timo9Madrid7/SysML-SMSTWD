/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WeatherForcastUI
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\WeatherForcastUI.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "WeatherForcastUI.h"
//#[ ignore
#define SMSWTD_WeatherForcastUI_WeatherForcastUI_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class WeatherForcastUI
//#[ ignore
WeatherForcastUI::p_WeatherAPIClient_humidity_C::p_WeatherAPIClient_humidity_C(void) : int_humidityLevel_ProxyFlowPropertyInterface(), _p_(0), itsInt_humidityLevel_ProxyFlowPropertyInterface(NULL) {
}

WeatherForcastUI::p_WeatherAPIClient_humidity_C::~p_WeatherAPIClient_humidity_C(void) {
    cleanUpRelations();
}

void WeatherForcastUI::p_WeatherAPIClient_humidity_C::connectWeatherForcastUI(WeatherForcastUI* part) {
    setItsInt_humidityLevel_ProxyFlowPropertyInterface(part);
    
}

int_humidityLevel_ProxyFlowPropertyInterface* WeatherForcastUI::p_WeatherAPIClient_humidity_C::getItsInt_humidityLevel_ProxyFlowPropertyInterface(void) {
    return this;
}

void WeatherForcastUI::p_WeatherAPIClient_humidity_C::setHumidityLevel(int p_humidityLevel) {
    
    if (itsInt_humidityLevel_ProxyFlowPropertyInterface != NULL) {
        itsInt_humidityLevel_ProxyFlowPropertyInterface->setHumidityLevel(p_humidityLevel);
    }
    
}

void WeatherForcastUI::p_WeatherAPIClient_humidity_C::setItsInt_humidityLevel_ProxyFlowPropertyInterface(int_humidityLevel_ProxyFlowPropertyInterface* const p_int_humidityLevel_ProxyFlowPropertyInterface) {
    itsInt_humidityLevel_ProxyFlowPropertyInterface = p_int_humidityLevel_ProxyFlowPropertyInterface;
}

void WeatherForcastUI::p_WeatherAPIClient_humidity_C::cleanUpRelations(void) {
    if(itsInt_humidityLevel_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_humidityLevel_ProxyFlowPropertyInterface = NULL;
        }
}

WeatherForcastUI::p_WeatherAPIClient_temp_C::p_WeatherAPIClient_temp_C(void) : int_temprature_ProxyFlowPropertyInterface(), _p_(0), itsInt_temprature_ProxyFlowPropertyInterface(NULL) {
}

WeatherForcastUI::p_WeatherAPIClient_temp_C::~p_WeatherAPIClient_temp_C(void) {
    cleanUpRelations();
}

int_temprature_ProxyFlowPropertyInterface* WeatherForcastUI::p_WeatherAPIClient_temp_C::getItsInt_temprature_ProxyFlowPropertyInterface(void) {
    return this;
}

int_temprature_ProxyFlowPropertyInterface* WeatherForcastUI::p_WeatherAPIClient_temp_C::getOutBound(void) {
    return this;
}

void WeatherForcastUI::p_WeatherAPIClient_temp_C::setTemprature(int p_temprature) {
    
    if (itsInt_temprature_ProxyFlowPropertyInterface != NULL) {
        itsInt_temprature_ProxyFlowPropertyInterface->setTemprature(p_temprature);
    }
    
}

void WeatherForcastUI::p_WeatherAPIClient_temp_C::setItsInt_temprature_ProxyFlowPropertyInterface(int_temprature_ProxyFlowPropertyInterface* const p_int_temprature_ProxyFlowPropertyInterface) {
    itsInt_temprature_ProxyFlowPropertyInterface = p_int_temprature_ProxyFlowPropertyInterface;
}

void WeatherForcastUI::p_WeatherAPIClient_temp_C::cleanUpRelations(void) {
    if(itsInt_temprature_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_temprature_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

WeatherForcastUI::WeatherForcastUI(void) : int_humidityLevel_ProxyFlowPropertyInterface() {
    NOTIFY_CONSTRUCTOR(WeatherForcastUI, WeatherForcastUI(), 0, SMSWTD_WeatherForcastUI_WeatherForcastUI_SERIALIZE);
    initRelations();
}

WeatherForcastUI::~WeatherForcastUI(void) {
    NOTIFY_DESTRUCTOR(~WeatherForcastUI, true);
}

//#[ ignore
void WeatherForcastUI::setHumidityLevel(int p_humidityLevel) {
    if (humidityLevel != p_humidityLevel) {
        humidityLevel = p_humidityLevel;
        FLOW_DATA_RECEIVE("humidityLevel", humidityLevel, x2String);
    }
    
}

void WeatherForcastUI::setTemprature(int p_temprature) {
    if (temprature != p_temprature)  {
        temprature = p_temprature;
        FLOW_DATA_SEND(temprature, p_WeatherAPIClient_temp, setTemprature, x2String);
    }
}
//#]

WeatherForcastUI::p_WeatherAPIClient_humidity_C* WeatherForcastUI::getP_WeatherAPIClient_humidity(void) const {
    return (WeatherForcastUI::p_WeatherAPIClient_humidity_C*) &p_WeatherAPIClient_humidity;
}

WeatherForcastUI::p_WeatherAPIClient_humidity_C* WeatherForcastUI::get_p_WeatherAPIClient_humidity(void) const {
    return (WeatherForcastUI::p_WeatherAPIClient_humidity_C*) &p_WeatherAPIClient_humidity;
}

WeatherForcastUI::p_WeatherAPIClient_temp_C* WeatherForcastUI::getP_WeatherAPIClient_temp(void) const {
    return (WeatherForcastUI::p_WeatherAPIClient_temp_C*) &p_WeatherAPIClient_temp;
}

WeatherForcastUI::p_WeatherAPIClient_temp_C* WeatherForcastUI::get_p_WeatherAPIClient_temp(void) const {
    return (WeatherForcastUI::p_WeatherAPIClient_temp_C*) &p_WeatherAPIClient_temp;
}

const int WeatherForcastUI::getHumidityLevel(void) const {
    return humidityLevel;
}

const int WeatherForcastUI::getTemprature(void) const {
    return temprature;
}

const int WeatherForcastUI::getUvLevel(void) const {
    return uvLevel;
}

void WeatherForcastUI::setUvLevel(const int p_uvLevel) {
    uvLevel = p_uvLevel;
}

const WeatherAPIClient* WeatherForcastUI::getItsWeatherAPIClient(void) const {
    return &itsWeatherAPIClient;
}

void WeatherForcastUI::initRelations(void) {
    if (get_p_WeatherAPIClient_humidity() != NULL) {
        get_p_WeatherAPIClient_humidity()->connectWeatherForcastUI(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedWeatherForcastUI::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("temprature", x2String(myReal->temprature));
    aomsAttributes->addAttribute("humidityLevel", x2String(myReal->humidityLevel));
    aomsAttributes->addAttribute("uvLevel", x2String(myReal->uvLevel));
}

void OMAnimatedWeatherForcastUI::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsWeatherAPIClient", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsWeatherAPIClient);
}
//#]

IMPLEMENT_META_P(WeatherForcastUI, SMSWTD, SMSWTD, false, OMAnimatedWeatherForcastUI)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WeatherForcastUI.cpp
*********************************************************************/
