/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Dashboard
//!	Generated Date	: Sat, 11, Jan 2025  
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
Dashboard::Dashboard(IOxfActive* const theActiveContext) : OMReactive() {
    NOTIFY_REACTIVE_CONSTRUCTOR(Dashboard, Dashboard(), 0, SMSWTD_Dashboard_Dashboard_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsThreatsUI.setShouldDelete(false);
        }
    }
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

const WeatherForcastUI* Dashboard::getItsWeatherForcastUI(void) const {
    return &itsWeatherForcastUI;
}

bool Dashboard::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsThreatsUI.startBehavior();
        }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void Dashboard::setActiveContext(IOxfActive* const theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsThreatsUI.setActiveContext(theActiveContext, false);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDashboard::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsLocationChangeUI", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLocationChangeUI);
    aomsRelations->addRelation("itsThreatsUI", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsThreatsUI);
    aomsRelations->addRelation("itsWeatherForcastUI", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsWeatherForcastUI);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Dashboard, SMSWTD, SMSWTD, false, OMAnimatedDashboard)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Dashboard.cpp
*********************************************************************/
