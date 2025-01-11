/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ThreatsUI
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\ThreatsUI.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ThreatsUI.h"
//#[ ignore
#define SMSWTD_ThreatsUI_ThreatsUI_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class ThreatsUI
//#[ ignore
ThreatsUI::p_Context_alarmSeverity_C::p_Context_alarmSeverity_C(void) : unsignedint_alarmSeverity_ProxyFlowPropertyInterface(), _p_(0), itsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface(NULL) {
}

ThreatsUI::p_Context_alarmSeverity_C::~p_Context_alarmSeverity_C(void) {
    cleanUpRelations();
}

void ThreatsUI::p_Context_alarmSeverity_C::connectThreatsUI(ThreatsUI* part) {
    setItsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface(part);
    
}

unsignedint_alarmSeverity_ProxyFlowPropertyInterface* ThreatsUI::p_Context_alarmSeverity_C::getItsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface(void) {
    return this;
}

void ThreatsUI::p_Context_alarmSeverity_C::setAlarmSeverity(unsigned int p_alarmSeverity) {
    
    if (itsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface != NULL) {
        itsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface->setAlarmSeverity(p_alarmSeverity);
    }
    
}

void ThreatsUI::p_Context_alarmSeverity_C::setItsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface(unsignedint_alarmSeverity_ProxyFlowPropertyInterface* const p_unsignedint_alarmSeverity_ProxyFlowPropertyInterface) {
    itsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface = p_unsignedint_alarmSeverity_ProxyFlowPropertyInterface;
}

void ThreatsUI::p_Context_alarmSeverity_C::cleanUpRelations(void) {
    if(itsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface != NULL)
        {
            itsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface = NULL;
        }
}

ThreatsUI::p_Context_state_C::p_Context_state_C(void) : bool_state_ProxyFlowPropertyInterface(), _p_(0), itsBool_state_ProxyFlowPropertyInterface(NULL) {
}

ThreatsUI::p_Context_state_C::~p_Context_state_C(void) {
    cleanUpRelations();
}

void ThreatsUI::p_Context_state_C::connectThreatsUI(ThreatsUI* part) {
    setItsBool_state_ProxyFlowPropertyInterface(part);
    
}

bool_state_ProxyFlowPropertyInterface* ThreatsUI::p_Context_state_C::getItsBool_state_ProxyFlowPropertyInterface(void) {
    return this;
}

void ThreatsUI::p_Context_state_C::setState(bool p_state) {
    
    if (itsBool_state_ProxyFlowPropertyInterface != NULL) {
        itsBool_state_ProxyFlowPropertyInterface->setState(p_state);
    }
    
}

void ThreatsUI::p_Context_state_C::setItsBool_state_ProxyFlowPropertyInterface(bool_state_ProxyFlowPropertyInterface* const p_bool_state_ProxyFlowPropertyInterface) {
    itsBool_state_ProxyFlowPropertyInterface = p_bool_state_ProxyFlowPropertyInterface;
}

void ThreatsUI::p_Context_state_C::cleanUpRelations(void) {
    if(itsBool_state_ProxyFlowPropertyInterface != NULL)
        {
            itsBool_state_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

ThreatsUI::ThreatsUI(IOxfActive* const theActiveContext) : OMReactive(), unsignedint_alarmSeverity_ProxyFlowPropertyInterface(), bool_state_ProxyFlowPropertyInterface() {
    NOTIFY_REACTIVE_CONSTRUCTOR(ThreatsUI, ThreatsUI(), 0, SMSWTD_ThreatsUI_ThreatsUI_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsContext.setShouldDelete(false);
        }
    }
    initRelations();
}

ThreatsUI::~ThreatsUI(void) {
    NOTIFY_DESTRUCTOR(~ThreatsUI, true);
}

//#[ ignore
void ThreatsUI::setAlarmSeverity(unsigned int p_alarmSeverity) {
    if (alarmSeverity != p_alarmSeverity) {
        alarmSeverity = p_alarmSeverity;
        FLOW_DATA_RECEIVE("alarmSeverity", alarmSeverity, x2String);
    }
    
}

void ThreatsUI::setState(bool p_state) {
    if (state != p_state) {
        state = p_state;
        FLOW_DATA_RECEIVE("state", state, x2String);
    }
    
}
//#]

ThreatsUI::p_Context_alarmSeverity_C* ThreatsUI::getP_Context_alarmSeverity(void) const {
    return (ThreatsUI::p_Context_alarmSeverity_C*) &p_Context_alarmSeverity;
}

ThreatsUI::p_Context_alarmSeverity_C* ThreatsUI::get_p_Context_alarmSeverity(void) const {
    return (ThreatsUI::p_Context_alarmSeverity_C*) &p_Context_alarmSeverity;
}

ThreatsUI::p_Context_state_C* ThreatsUI::getP_Context_state(void) const {
    return (ThreatsUI::p_Context_state_C*) &p_Context_state;
}

ThreatsUI::p_Context_state_C* ThreatsUI::get_p_Context_state(void) const {
    return (ThreatsUI::p_Context_state_C*) &p_Context_state;
}

const unsigned int ThreatsUI::getAlarmSeverity(void) const {
    return alarmSeverity;
}

const bool ThreatsUI::getState(void) const {
    return state;
}

const Context* ThreatsUI::getItsContext(void) const {
    return &itsContext;
}

const WeatherAPIClient* ThreatsUI::getItsWeatherAPIClient(void) const {
    return &itsWeatherAPIClient;
}

bool ThreatsUI::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsContext.startBehavior();
        }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void ThreatsUI::initRelations(void) {
    if (get_p_Context_alarmSeverity() != NULL) {
        get_p_Context_alarmSeverity()->connectThreatsUI(this);
    }
    if (get_p_Context_state() != NULL) {
        get_p_Context_state()->connectThreatsUI(this);
    }
}

void ThreatsUI::setActiveContext(IOxfActive* const theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsContext.setActiveContext(theActiveContext, false);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedThreatsUI::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("alarmSeverity", x2String(myReal->alarmSeverity));
    aomsAttributes->addAttribute("state", x2String(myReal->state));
}

void OMAnimatedThreatsUI::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsWeatherAPIClient", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsWeatherAPIClient);
    aomsRelations->addRelation("itsContext", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsContext);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(ThreatsUI, SMSWTD, SMSWTD, false, OMAnimatedThreatsUI)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ThreatsUI.cpp
*********************************************************************/
