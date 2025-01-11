/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RegionNameAPIClient
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\RegionNameAPIClient.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "RegionNameAPIClient.h"
//#[ ignore
#define SMSWTD_RegionNameAPIClient_RegionNameAPIClient_SERIALIZE OM_NO_OP

#define OMAnim_SMSWTD_RegionNameAPIClient_setRegion_RhpString_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_region)

#define OMAnim_SMSWTD_RegionNameAPIClient_setRegion_RhpString_SERIALIZE_RET_VAL
//#]

//## package SMSWTD

//## class RegionNameAPIClient
//#[ ignore
RegionNameAPIClient::p_LocationProvider_lng_C::p_LocationProvider_lng_C(void) : float_longitude_ProxyFlowPropertyInterface(), _p_(0), itsFloat_longitude_ProxyFlowPropertyInterface(NULL) {
}

RegionNameAPIClient::p_LocationProvider_lng_C::~p_LocationProvider_lng_C(void) {
    cleanUpRelations();
}

void RegionNameAPIClient::p_LocationProvider_lng_C::connectRegionNameAPIClient(RegionNameAPIClient* part) {
    setItsFloat_longitude_ProxyFlowPropertyInterface(part);
    
}

float_longitude_ProxyFlowPropertyInterface* RegionNameAPIClient::p_LocationProvider_lng_C::getItsFloat_longitude_ProxyFlowPropertyInterface(void) {
    return this;
}

void RegionNameAPIClient::p_LocationProvider_lng_C::setLongitude(float p_longitude) {
    
    if (itsFloat_longitude_ProxyFlowPropertyInterface != NULL) {
        itsFloat_longitude_ProxyFlowPropertyInterface->setLongitude(p_longitude);
    }
    
}

void RegionNameAPIClient::p_LocationProvider_lng_C::setItsFloat_longitude_ProxyFlowPropertyInterface(float_longitude_ProxyFlowPropertyInterface* const p_float_longitude_ProxyFlowPropertyInterface) {
    itsFloat_longitude_ProxyFlowPropertyInterface = p_float_longitude_ProxyFlowPropertyInterface;
}

void RegionNameAPIClient::p_LocationProvider_lng_C::cleanUpRelations(void) {
    if(itsFloat_longitude_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_longitude_ProxyFlowPropertyInterface = NULL;
        }
}

RegionNameAPIClient::p_LocationProvider_lat_C::p_LocationProvider_lat_C(void) : float_latitude_ProxyFlowPropertyInterface(), _p_(0), itsFloat_latitude_ProxyFlowPropertyInterface(NULL) {
}

RegionNameAPIClient::p_LocationProvider_lat_C::~p_LocationProvider_lat_C(void) {
    cleanUpRelations();
}

void RegionNameAPIClient::p_LocationProvider_lat_C::connectRegionNameAPIClient(RegionNameAPIClient* part) {
    setItsFloat_latitude_ProxyFlowPropertyInterface(part);
    
}

float_latitude_ProxyFlowPropertyInterface* RegionNameAPIClient::p_LocationProvider_lat_C::getItsFloat_latitude_ProxyFlowPropertyInterface(void) {
    return this;
}

void RegionNameAPIClient::p_LocationProvider_lat_C::setLatitude(float p_latitude) {
    
    if (itsFloat_latitude_ProxyFlowPropertyInterface != NULL) {
        itsFloat_latitude_ProxyFlowPropertyInterface->setLatitude(p_latitude);
    }
    
}

void RegionNameAPIClient::p_LocationProvider_lat_C::setItsFloat_latitude_ProxyFlowPropertyInterface(float_latitude_ProxyFlowPropertyInterface* const p_float_latitude_ProxyFlowPropertyInterface) {
    itsFloat_latitude_ProxyFlowPropertyInterface = p_float_latitude_ProxyFlowPropertyInterface;
}

void RegionNameAPIClient::p_LocationProvider_lat_C::cleanUpRelations(void) {
    if(itsFloat_latitude_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_latitude_ProxyFlowPropertyInterface = NULL;
        }
}

RegionNameAPIClient::p_RegionNameAPIClient_region_C::p_RegionNameAPIClient_region_C(void) : RhpString_region_ProxyFlowPropertyInterface(), _p_(0), itsRhpString_region_ProxyFlowPropertyInterface(NULL) {
}

RegionNameAPIClient::p_RegionNameAPIClient_region_C::~p_RegionNameAPIClient_region_C(void) {
    cleanUpRelations();
}

RhpString_region_ProxyFlowPropertyInterface* RegionNameAPIClient::p_RegionNameAPIClient_region_C::getItsRhpString_region_ProxyFlowPropertyInterface(void) {
    return this;
}

RhpString_region_ProxyFlowPropertyInterface* RegionNameAPIClient::p_RegionNameAPIClient_region_C::getOutBound(void) {
    return this;
}

void RegionNameAPIClient::p_RegionNameAPIClient_region_C::setRegion(RhpString p_region) {
    
    if (itsRhpString_region_ProxyFlowPropertyInterface != NULL) {
        itsRhpString_region_ProxyFlowPropertyInterface->setRegion(p_region);
    }
    
}

void RegionNameAPIClient::p_RegionNameAPIClient_region_C::setItsRhpString_region_ProxyFlowPropertyInterface(RhpString_region_ProxyFlowPropertyInterface* const p_RhpString_region_ProxyFlowPropertyInterface) {
    itsRhpString_region_ProxyFlowPropertyInterface = p_RhpString_region_ProxyFlowPropertyInterface;
}

void RegionNameAPIClient::p_RegionNameAPIClient_region_C::cleanUpRelations(void) {
    if(itsRhpString_region_ProxyFlowPropertyInterface != NULL)
        {
            itsRhpString_region_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

RegionNameAPIClient::RegionNameAPIClient(void) : float_longitude_ProxyFlowPropertyInterface(), float_latitude_ProxyFlowPropertyInterface() {
    NOTIFY_CONSTRUCTOR(RegionNameAPIClient, RegionNameAPIClient(), 0, SMSWTD_RegionNameAPIClient_RegionNameAPIClient_SERIALIZE);
    initRelations();
}

RegionNameAPIClient::~RegionNameAPIClient(void) {
    NOTIFY_DESTRUCTOR(~RegionNameAPIClient, true);
}

//#[ ignore
void RegionNameAPIClient::setLatitude(float p_latitude) {
    if (latitude != p_latitude) {
        latitude = p_latitude;
        FLOW_DATA_RECEIVE("latitude", latitude, x2String);
    }
    
}

void RegionNameAPIClient::setLongitude(float p_longitude) {
    if (longitude != p_longitude) {
        longitude = p_longitude;
        FLOW_DATA_RECEIVE("longitude", longitude, x2String);
    }
    
}

void RegionNameAPIClient::setRegion(RhpString p_region) {
    if (region != p_region)  {
        region = p_region;
        FLOW_DATA_SEND(region, p_RegionNameAPIClient_region, setRegion, x2String);
    }
}
//#]

RegionNameAPIClient::p_LocationProvider_lng_C* RegionNameAPIClient::getP_LocationProvider_lng(void) const {
    return (RegionNameAPIClient::p_LocationProvider_lng_C*) &p_LocationProvider_lng;
}

RegionNameAPIClient::p_LocationProvider_lng_C* RegionNameAPIClient::get_p_LocationProvider_lng(void) const {
    return (RegionNameAPIClient::p_LocationProvider_lng_C*) &p_LocationProvider_lng;
}

RegionNameAPIClient::p_LocationProvider_lat_C* RegionNameAPIClient::getP_LocationProvider_lat(void) const {
    return (RegionNameAPIClient::p_LocationProvider_lat_C*) &p_LocationProvider_lat;
}

RegionNameAPIClient::p_LocationProvider_lat_C* RegionNameAPIClient::get_p_LocationProvider_lat(void) const {
    return (RegionNameAPIClient::p_LocationProvider_lat_C*) &p_LocationProvider_lat;
}

RegionNameAPIClient::p_RegionNameAPIClient_region_C* RegionNameAPIClient::getP_RegionNameAPIClient_region(void) const {
    return (RegionNameAPIClient::p_RegionNameAPIClient_region_C*) &p_RegionNameAPIClient_region;
}

RegionNameAPIClient::p_RegionNameAPIClient_region_C* RegionNameAPIClient::get_p_RegionNameAPIClient_region(void) const {
    return (RegionNameAPIClient::p_RegionNameAPIClient_region_C*) &p_RegionNameAPIClient_region;
}

const float RegionNameAPIClient::getLatitude(void) const {
    return latitude;
}

const float RegionNameAPIClient::getLongitude(void) const {
    return longitude;
}

const RhpString RegionNameAPIClient::getRegion(void) const {
    return region;
}

const LocationProvider* RegionNameAPIClient::getItsLocationProvider(void) const {
    return &itsLocationProvider;
}

void RegionNameAPIClient::initRelations(void) {
    if (get_p_LocationProvider_lng() != NULL) {
        get_p_LocationProvider_lng()->connectRegionNameAPIClient(this);
    }
    if (get_p_LocationProvider_lat() != NULL) {
        get_p_LocationProvider_lat()->connectRegionNameAPIClient(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedRegionNameAPIClient::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("latitude", x2String(myReal->latitude));
    aomsAttributes->addAttribute("longitude", x2String(myReal->longitude));
    aomsAttributes->addAttribute("region", x2String(myReal->region));
}

void OMAnimatedRegionNameAPIClient::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsLocationProvider", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLocationProvider);
}
//#]

IMPLEMENT_META_P(RegionNameAPIClient, SMSWTD, SMSWTD, false, OMAnimatedRegionNameAPIClient)

IMPLEMENT_META_OP(OMAnimatedRegionNameAPIClient, SMSWTD_RegionNameAPIClient_setRegion_RhpString, "setRegion", FALSE, "setRegion(RhpString)", 1)

IMPLEMENT_OP_CALL(SMSWTD_RegionNameAPIClient_setRegion_RhpString, RegionNameAPIClient, setRegion(p_region), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RegionNameAPIClient.cpp
*********************************************************************/
