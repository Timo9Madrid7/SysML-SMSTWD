/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: LocationProvider
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\LocationProvider.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "LocationProvider.h"
//#[ ignore
#define SMSWTD_LocationProvider_LocationProvider_SERIALIZE OM_NO_OP

#define OMAnim_SMSWTD_LocationProvider_setLatitude_float_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_latitude)

#define OMAnim_SMSWTD_LocationProvider_setLatitude_float_SERIALIZE_RET_VAL

#define OMAnim_SMSWTD_LocationProvider_setLongitude_float_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_longitude)

#define OMAnim_SMSWTD_LocationProvider_setLongitude_float_SERIALIZE_RET_VAL
//#]

//## package SMSWTD

//## class LocationProvider
//#[ ignore
LocationProvider::p_LocationProvider_lat_C::p_LocationProvider_lat_C(void) : float_latitude_ProxyFlowPropertyInterface(), _p_(0), itsFloat_latitude_ProxyFlowPropertyInterface(NULL) {
}

LocationProvider::p_LocationProvider_lat_C::~p_LocationProvider_lat_C(void) {
    cleanUpRelations();
}

float_latitude_ProxyFlowPropertyInterface* LocationProvider::p_LocationProvider_lat_C::getItsFloat_latitude_ProxyFlowPropertyInterface(void) {
    return this;
}

float_latitude_ProxyFlowPropertyInterface* LocationProvider::p_LocationProvider_lat_C::getOutBound(void) {
    return this;
}

void LocationProvider::p_LocationProvider_lat_C::setLatitude(float p_latitude) {
    
    if (itsFloat_latitude_ProxyFlowPropertyInterface != NULL) {
        itsFloat_latitude_ProxyFlowPropertyInterface->setLatitude(p_latitude);
    }
    
}

void LocationProvider::p_LocationProvider_lat_C::setItsFloat_latitude_ProxyFlowPropertyInterface(float_latitude_ProxyFlowPropertyInterface* const p_float_latitude_ProxyFlowPropertyInterface) {
    itsFloat_latitude_ProxyFlowPropertyInterface = p_float_latitude_ProxyFlowPropertyInterface;
}

void LocationProvider::p_LocationProvider_lat_C::cleanUpRelations(void) {
    if(itsFloat_latitude_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_latitude_ProxyFlowPropertyInterface = NULL;
        }
}

LocationProvider::p_LocationProvider_lng_C::p_LocationProvider_lng_C(void) : float_longitude_ProxyFlowPropertyInterface(), _p_(0), itsFloat_longitude_ProxyFlowPropertyInterface(NULL) {
}

LocationProvider::p_LocationProvider_lng_C::~p_LocationProvider_lng_C(void) {
    cleanUpRelations();
}

float_longitude_ProxyFlowPropertyInterface* LocationProvider::p_LocationProvider_lng_C::getItsFloat_longitude_ProxyFlowPropertyInterface(void) {
    return this;
}

float_longitude_ProxyFlowPropertyInterface* LocationProvider::p_LocationProvider_lng_C::getOutBound(void) {
    return this;
}

void LocationProvider::p_LocationProvider_lng_C::setLongitude(float p_longitude) {
    
    if (itsFloat_longitude_ProxyFlowPropertyInterface != NULL) {
        itsFloat_longitude_ProxyFlowPropertyInterface->setLongitude(p_longitude);
    }
    
}

void LocationProvider::p_LocationProvider_lng_C::setItsFloat_longitude_ProxyFlowPropertyInterface(float_longitude_ProxyFlowPropertyInterface* const p_float_longitude_ProxyFlowPropertyInterface) {
    itsFloat_longitude_ProxyFlowPropertyInterface = p_float_longitude_ProxyFlowPropertyInterface;
}

void LocationProvider::p_LocationProvider_lng_C::cleanUpRelations(void) {
    if(itsFloat_longitude_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_longitude_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

LocationProvider::LocationProvider(void) {
    NOTIFY_CONSTRUCTOR(LocationProvider, LocationProvider(), 0, SMSWTD_LocationProvider_LocationProvider_SERIALIZE);
}

LocationProvider::~LocationProvider(void) {
    NOTIFY_DESTRUCTOR(~LocationProvider, true);
}

//#[ ignore
void LocationProvider::setLatitude(float p_latitude) {
    if (latitude != p_latitude)  {
        latitude = p_latitude;
        FLOW_DATA_SEND_MULTICAST(latitude, p_LocationProvider_lat, setLatitude, x2String, 2);
    }
}

void LocationProvider::setLongitude(float p_longitude) {
    if (longitude != p_longitude)  {
        longitude = p_longitude;
        FLOW_DATA_SEND_MULTICAST(longitude, p_LocationProvider_lng, setLongitude, x2String, 2);
    }
}
//#]

Rhp_int32_t LocationProvider::getP_LocationProvider_lat(void) const {
    Rhp_int32_t iter = 0;
    return iter;
}

LocationProvider::p_LocationProvider_lat_C* LocationProvider::getP_LocationProvider_latAt(Rhp_int32_t iterI) const {
    return (LocationProvider::p_LocationProvider_lat_C*) &p_LocationProvider_lat[iterI];
}

LocationProvider::p_LocationProvider_lat_C* LocationProvider::get_p_LocationProvider_lat(Rhp_int32_t iterI) const {
    return (LocationProvider::p_LocationProvider_lat_C*) &p_LocationProvider_lat[iterI];
}

Rhp_int32_t LocationProvider::getP_LocationProvider_lng(void) const {
    Rhp_int32_t iter = 0;
    return iter;
}

LocationProvider::p_LocationProvider_lng_C* LocationProvider::getP_LocationProvider_lngAt(Rhp_int32_t iterI) const {
    return (LocationProvider::p_LocationProvider_lng_C*) &p_LocationProvider_lng[iterI];
}

LocationProvider::p_LocationProvider_lng_C* LocationProvider::get_p_LocationProvider_lng(Rhp_int32_t iterI) const {
    return (LocationProvider::p_LocationProvider_lng_C*) &p_LocationProvider_lng[iterI];
}

const float LocationProvider::getLatitude(void) const {
    return latitude;
}

const float LocationProvider::getLongitude(void) const {
    return longitude;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLocationProvider::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("latitude", x2String(myReal->latitude));
    aomsAttributes->addAttribute("longitude", x2String(myReal->longitude));
}
//#]

IMPLEMENT_META_P(LocationProvider, SMSWTD, SMSWTD, false, OMAnimatedLocationProvider)

IMPLEMENT_META_OP(OMAnimatedLocationProvider, SMSWTD_LocationProvider_setLatitude_float, "setLatitude", FALSE, "setLatitude(float)", 1)

IMPLEMENT_OP_CALL(SMSWTD_LocationProvider_setLatitude_float, LocationProvider, setLatitude(p_latitude), NO_OP())

IMPLEMENT_META_OP(OMAnimatedLocationProvider, SMSWTD_LocationProvider_setLongitude_float, "setLongitude", FALSE, "setLongitude(float)", 1)

IMPLEMENT_OP_CALL(SMSWTD_LocationProvider_setLongitude_float, LocationProvider, setLongitude(p_longitude), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\LocationProvider.cpp
*********************************************************************/
