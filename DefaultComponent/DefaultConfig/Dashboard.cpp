/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Dashboard
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Dashboard.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Dashboard.h"
//#[ ignore
#define SMSWTD_Dashboard_Dashboard_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class Dashboard
Dashboard::Dashboard(void) {
    NOTIFY_CONSTRUCTOR(Dashboard, Dashboard(), 0, SMSWTD_Dashboard_Dashboard_SERIALIZE);
}

Dashboard::~Dashboard(void) {
    NOTIFY_DESTRUCTOR(~Dashboard, true);
}

const LocationChangeUI* Dashboard::getItsLocationChangeUI(void) const {
    return &itsLocationChangeUI;
}

const ThreatsUI* Dashboard::getItsThreatsUI(void) const {
    return &itsThreatsUI;
}

const WeatherAPIClient* Dashboard::getItsWeatherAPIClient(void) const {
    return &itsWeatherAPIClient;
}

const WeatherForcastUI* Dashboard::getItsWeatherForcastUI(void) const {
    return &itsWeatherForcastUI;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDashboard::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsWeatherAPIClient", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsWeatherAPIClient);
    aomsRelations->addRelation("itsWeatherForcastUI", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsWeatherForcastUI);
    aomsRelations->addRelation("itsLocationChangeUI", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLocationChangeUI);
    aomsRelations->addRelation("itsThreatsUI", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsThreatsUI);
}
//#]

IMPLEMENT_META_P(Dashboard, SMSWTD, SMSWTD, false, OMAnimatedDashboard)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Dashboard.cpp
*********************************************************************/
