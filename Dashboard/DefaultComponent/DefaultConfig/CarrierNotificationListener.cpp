/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CarrierNotificationListener
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\CarrierNotificationListener.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "CarrierNotificationListener.h"
//#[ ignore
#define SMSWTD_CarrierNotificationListener_CarrierNotificationListener_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class CarrierNotificationListener
CarrierNotificationListener::CarrierNotificationListener(IOxfActive* const theActiveContext) : OMReactive(), NotificationListener() {
    NOTIFY_REACTIVE_CONSTRUCTOR(CarrierNotificationListener, CarrierNotificationListener(), 0, SMSWTD_CarrierNotificationListener_CarrierNotificationListener_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

CarrierNotificationListener::~CarrierNotificationListener(void) {
    NOTIFY_DESTRUCTOR(~CarrierNotificationListener, false);
}

bool CarrierNotificationListener::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void CarrierNotificationListener::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void CarrierNotificationListener::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
    }
}

IOxfReactive::TakeEventStatus CarrierNotificationListener::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCarrierNotificationListener::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedNotificationListener::serializeAttributes(aomsAttributes);
}

void OMAnimatedCarrierNotificationListener::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedNotificationListener::serializeRelations(aomsRelations);
}

void OMAnimatedCarrierNotificationListener::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(CarrierNotificationListener, SMSWTD, false, NotificationListener, OMAnimatedNotificationListener, OMAnimatedCarrierNotificationListener)

OMINIT_SUPERCLASS(NotificationListener, OMAnimatedNotificationListener)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CarrierNotificationListener.cpp
*********************************************************************/
