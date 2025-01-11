/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: LocationChangeUI
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\LocationChangeUI.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "LocationChangeUI.h"
//#[ ignore
#define SMSWTD_LocationChangeUI_LocationChangeUI_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class LocationChangeUI
//#[ ignore
LocationChangeUI::p_RegionNameAPIClient_region_C::p_RegionNameAPIClient_region_C(void) : RhpString_region_ProxyFlowPropertyInterface(), _p_(0), itsRhpString_region_ProxyFlowPropertyInterface(NULL) {
}

LocationChangeUI::p_RegionNameAPIClient_region_C::~p_RegionNameAPIClient_region_C(void) {
    cleanUpRelations();
}

void LocationChangeUI::p_RegionNameAPIClient_region_C::connectLocationChangeUI(LocationChangeUI* part) {
    setItsRhpString_region_ProxyFlowPropertyInterface(part);
    
}

RhpString_region_ProxyFlowPropertyInterface* LocationChangeUI::p_RegionNameAPIClient_region_C::getItsRhpString_region_ProxyFlowPropertyInterface(void) {
    return this;
}

void LocationChangeUI::p_RegionNameAPIClient_region_C::setRegion(RhpString p_region) {
    
    if (itsRhpString_region_ProxyFlowPropertyInterface != NULL) {
        itsRhpString_region_ProxyFlowPropertyInterface->setRegion(p_region);
    }
    
}

void LocationChangeUI::p_RegionNameAPIClient_region_C::setItsRhpString_region_ProxyFlowPropertyInterface(RhpString_region_ProxyFlowPropertyInterface* const p_RhpString_region_ProxyFlowPropertyInterface) {
    itsRhpString_region_ProxyFlowPropertyInterface = p_RhpString_region_ProxyFlowPropertyInterface;
}

void LocationChangeUI::p_RegionNameAPIClient_region_C::cleanUpRelations(void) {
    if(itsRhpString_region_ProxyFlowPropertyInterface != NULL)
        {
            itsRhpString_region_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

LocationChangeUI::LocationChangeUI(void) : RhpString_region_ProxyFlowPropertyInterface() {
    NOTIFY_CONSTRUCTOR(LocationChangeUI, LocationChangeUI(), 0, SMSWTD_LocationChangeUI_LocationChangeUI_SERIALIZE);
    initRelations();
}

LocationChangeUI::~LocationChangeUI(void) {
    NOTIFY_DESTRUCTOR(~LocationChangeUI, true);
}

//#[ ignore
void LocationChangeUI::setRegion(RhpString p_region) {
    if (region != p_region) {
        region = p_region;
        FLOW_DATA_RECEIVE("region", region, x2String);
    }
    
}
//#]

LocationChangeUI::p_RegionNameAPIClient_region_C* LocationChangeUI::getP_RegionNameAPIClient_region(void) const {
    return (LocationChangeUI::p_RegionNameAPIClient_region_C*) &p_RegionNameAPIClient_region;
}

LocationChangeUI::p_RegionNameAPIClient_region_C* LocationChangeUI::get_p_RegionNameAPIClient_region(void) const {
    return (LocationChangeUI::p_RegionNameAPIClient_region_C*) &p_RegionNameAPIClient_region;
}

const RhpString LocationChangeUI::getRegion(void) const {
    return region;
}

const RegionNameAPIClient* LocationChangeUI::getItsRegionNameAPIClient(void) const {
    return &itsRegionNameAPIClient;
}

void LocationChangeUI::initRelations(void) {
    if (get_p_RegionNameAPIClient_region() != NULL) {
        get_p_RegionNameAPIClient_region()->connectLocationChangeUI(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLocationChangeUI::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("region", x2String(myReal->region));
}

void OMAnimatedLocationChangeUI::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsRegionNameAPIClient", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsRegionNameAPIClient);
}
//#]

IMPLEMENT_META_P(LocationChangeUI, SMSWTD, SMSWTD, false, OMAnimatedLocationChangeUI)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\LocationChangeUI.cpp
*********************************************************************/
