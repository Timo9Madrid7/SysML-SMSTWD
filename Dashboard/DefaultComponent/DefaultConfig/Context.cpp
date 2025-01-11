/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Context
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Context.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Context.h"
//#[ ignore
#define SMSWTD_Context_Context_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class Context
//#[ ignore
Context::p_PushNotificationListener_severity_C::p_PushNotificationListener_severity_C(void) : unsignedint_alarmSeverity_ProxyFlowPropertyInterface(), _p_(0), itsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface(NULL) {
}

Context::p_PushNotificationListener_severity_C::~p_PushNotificationListener_severity_C(void) {
    cleanUpRelations();
}

void Context::p_PushNotificationListener_severity_C::connectContext(Context* part) {
    setItsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface(part);
    
}

unsignedint_alarmSeverity_ProxyFlowPropertyInterface* Context::p_PushNotificationListener_severity_C::getItsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface(void) {
    return this;
}

void Context::p_PushNotificationListener_severity_C::setAlarmSeverity(unsigned int p_alarmSeverity) {
    
    if (itsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface != NULL) {
        itsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface->setAlarmSeverity(p_alarmSeverity);
    }
    
}

void Context::p_PushNotificationListener_severity_C::setItsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface(unsignedint_alarmSeverity_ProxyFlowPropertyInterface* const p_unsignedint_alarmSeverity_ProxyFlowPropertyInterface) {
    itsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface = p_unsignedint_alarmSeverity_ProxyFlowPropertyInterface;
}

void Context::p_PushNotificationListener_severity_C::cleanUpRelations(void) {
    if(itsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface != NULL)
        {
            itsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface = NULL;
        }
}

Context::p_Context_alarmSeverity_C::p_Context_alarmSeverity_C(void) : unsignedint_alarmSeverity_ProxyFlowPropertyInterface(), _p_(0), itsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface(NULL) {
}

Context::p_Context_alarmSeverity_C::~p_Context_alarmSeverity_C(void) {
    cleanUpRelations();
}

unsignedint_alarmSeverity_ProxyFlowPropertyInterface* Context::p_Context_alarmSeverity_C::getItsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface(void) {
    return this;
}

unsignedint_alarmSeverity_ProxyFlowPropertyInterface* Context::p_Context_alarmSeverity_C::getOutBound(void) {
    return this;
}

void Context::p_Context_alarmSeverity_C::setAlarmSeverity(unsigned int p_alarmSeverity) {
    
    if (itsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface != NULL) {
        itsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface->setAlarmSeverity(p_alarmSeverity);
    }
    
}

void Context::p_Context_alarmSeverity_C::setItsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface(unsignedint_alarmSeverity_ProxyFlowPropertyInterface* const p_unsignedint_alarmSeverity_ProxyFlowPropertyInterface) {
    itsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface = p_unsignedint_alarmSeverity_ProxyFlowPropertyInterface;
}

void Context::p_Context_alarmSeverity_C::cleanUpRelations(void) {
    if(itsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface != NULL)
        {
            itsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface = NULL;
        }
}

Context::p_Context_state_C::p_Context_state_C(void) : bool_state_ProxyFlowPropertyInterface(), _p_(0), itsBool_state_ProxyFlowPropertyInterface(NULL) {
}

Context::p_Context_state_C::~p_Context_state_C(void) {
    cleanUpRelations();
}

bool_state_ProxyFlowPropertyInterface* Context::p_Context_state_C::getItsBool_state_ProxyFlowPropertyInterface(void) {
    return this;
}

bool_state_ProxyFlowPropertyInterface* Context::p_Context_state_C::getOutBound(void) {
    return this;
}

void Context::p_Context_state_C::setState(bool p_state) {
    
    if (itsBool_state_ProxyFlowPropertyInterface != NULL) {
        itsBool_state_ProxyFlowPropertyInterface->setState(p_state);
    }
    
}

void Context::p_Context_state_C::setItsBool_state_ProxyFlowPropertyInterface(bool_state_ProxyFlowPropertyInterface* const p_bool_state_ProxyFlowPropertyInterface) {
    itsBool_state_ProxyFlowPropertyInterface = p_bool_state_ProxyFlowPropertyInterface;
}

void Context::p_Context_state_C::cleanUpRelations(void) {
    if(itsBool_state_ProxyFlowPropertyInterface != NULL)
        {
            itsBool_state_ProxyFlowPropertyInterface = NULL;
        }
}

Context::p_PushNotificationListener_state_C::p_PushNotificationListener_state_C(void) : bool_state_ProxyFlowPropertyInterface(), _p_(0), itsBool_state_ProxyFlowPropertyInterface(NULL) {
}

Context::p_PushNotificationListener_state_C::~p_PushNotificationListener_state_C(void) {
    cleanUpRelations();
}

void Context::p_PushNotificationListener_state_C::connectContext(Context* part) {
    setItsBool_state_ProxyFlowPropertyInterface(part);
    
}

bool_state_ProxyFlowPropertyInterface* Context::p_PushNotificationListener_state_C::getItsBool_state_ProxyFlowPropertyInterface(void) {
    return this;
}

void Context::p_PushNotificationListener_state_C::setState(bool p_state) {
    
    if (itsBool_state_ProxyFlowPropertyInterface != NULL) {
        itsBool_state_ProxyFlowPropertyInterface->setState(p_state);
    }
    
}

void Context::p_PushNotificationListener_state_C::setItsBool_state_ProxyFlowPropertyInterface(bool_state_ProxyFlowPropertyInterface* const p_bool_state_ProxyFlowPropertyInterface) {
    itsBool_state_ProxyFlowPropertyInterface = p_bool_state_ProxyFlowPropertyInterface;
}

void Context::p_PushNotificationListener_state_C::cleanUpRelations(void) {
    if(itsBool_state_ProxyFlowPropertyInterface != NULL)
        {
            itsBool_state_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

Context::Context(IOxfActive* const theActiveContext) : OMReactive(), unsignedint_alarmSeverity_ProxyFlowPropertyInterface(), bool_state_ProxyFlowPropertyInterface() {
    NOTIFY_REACTIVE_CONSTRUCTOR(Context, Context(), 0, SMSWTD_Context_Context_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsPushNotificationListener.setShouldDelete(false);
        }
    }
    initRelations();
}

Context::~Context(void) {
    NOTIFY_DESTRUCTOR(~Context, true);
}

//#[ ignore
void Context::setAlarmSeverity(unsigned int p_alarmSeverity) {
    if (alarmSeverity != p_alarmSeverity) {
        alarmSeverity = p_alarmSeverity;
        FLOW_DATA_RECEIVE("alarmSeverity", alarmSeverity, x2String);
        FLOW_DATA_SEND(alarmSeverity, p_Context_alarmSeverity, setAlarmSeverity, x2String);
    }
    
}

void Context::setState(bool p_state) {
    if (state != p_state)  {
        state = p_state;
        FLOW_DATA_RECEIVE("state", state, x2String);
        FLOW_DATA_SEND(state, p_Context_state, setState, x2String);
    }
}
//#]

Context::p_PushNotificationListener_severity_C* Context::getP_PushNotificationListener_severity(void) const {
    return (Context::p_PushNotificationListener_severity_C*) &p_PushNotificationListener_severity;
}

Context::p_PushNotificationListener_severity_C* Context::get_p_PushNotificationListener_severity(void) const {
    return (Context::p_PushNotificationListener_severity_C*) &p_PushNotificationListener_severity;
}

Context::p_Context_alarmSeverity_C* Context::getP_Context_alarmSeverity(void) const {
    return (Context::p_Context_alarmSeverity_C*) &p_Context_alarmSeverity;
}

Context::p_Context_alarmSeverity_C* Context::get_p_Context_alarmSeverity(void) const {
    return (Context::p_Context_alarmSeverity_C*) &p_Context_alarmSeverity;
}

Context::p_Context_state_C* Context::getP_Context_state(void) const {
    return (Context::p_Context_state_C*) &p_Context_state;
}

Context::p_Context_state_C* Context::get_p_Context_state(void) const {
    return (Context::p_Context_state_C*) &p_Context_state;
}

Context::p_PushNotificationListener_state_C* Context::getP_PushNotificationListener_state(void) const {
    return (Context::p_PushNotificationListener_state_C*) &p_PushNotificationListener_state;
}

Context::p_PushNotificationListener_state_C* Context::get_p_PushNotificationListener_state(void) const {
    return (Context::p_PushNotificationListener_state_C*) &p_PushNotificationListener_state;
}

const unsigned int Context::getAlarmSeverity(void) const {
    return alarmSeverity;
}

const bool Context::getState(void) const {
    return state;
}

const PushNotificationListener* Context::getItsPushNotificationListener(void) const {
    return &itsPushNotificationListener;
}

bool Context::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsPushNotificationListener.startBehavior();
        }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void Context::initRelations(void) {
    if (get_p_PushNotificationListener_severity() != NULL) {
        get_p_PushNotificationListener_severity()->connectContext(this);
    }
    if (get_p_PushNotificationListener_state() != NULL) {
        get_p_PushNotificationListener_state()->connectContext(this);
    }
}

void Context::setActiveContext(IOxfActive* const theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsPushNotificationListener.setActiveContext(theActiveContext, false);
    }
}

void Context::destroy(void) {
    itsPushNotificationListener.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedContext::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("alarmSeverity", x2String(myReal->alarmSeverity));
    aomsAttributes->addAttribute("state", x2String(myReal->state));
}

void OMAnimatedContext::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsPushNotificationListener", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsPushNotificationListener);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Context, SMSWTD, SMSWTD, false, OMAnimatedContext)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Context.cpp
*********************************************************************/
