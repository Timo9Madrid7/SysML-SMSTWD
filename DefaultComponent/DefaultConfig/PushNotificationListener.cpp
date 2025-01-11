/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PushNotificationListener
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\PushNotificationListener.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "PushNotificationListener.h"
//#[ ignore
#define SMSWTD_PushNotificationListener_PushNotificationListener_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class PushNotificationListener
PushNotificationListener::PushNotificationListener(IOxfActive* const theActiveContext) : OMReactive(), NotificationListener() {
    NOTIFY_REACTIVE_CONSTRUCTOR(PushNotificationListener, PushNotificationListener(), 0, SMSWTD_PushNotificationListener_PushNotificationListener_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

PushNotificationListener::~PushNotificationListener(void) {
    NOTIFY_DESTRUCTOR(~PushNotificationListener, false);
    cancelTimeouts();
}

bool PushNotificationListener::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(Notification_timeout == arg)
        {
            Notification_timeout = NULL;
            res = true;
        }
    return res;
}

bool PushNotificationListener::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void PushNotificationListener::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Notification_subState = OMNonState;
    Notification_timeout = NULL;
}

void PushNotificationListener::cancelTimeouts(void) {
    cancel(Notification_timeout);
}

void PushNotificationListener::Notification_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Notification");
    rootState_subState = Notification;
    NOTIFY_TRANSITION_STARTED("7");
    NOTIFY_STATE_ENTERED("ROOT.Notification.notificationVisible");
    Notification_subState = notificationVisible;
    rootState_active = notificationVisible;
    //#[ state Notification.notificationVisible.(Entry) 
    if (getAlarmSeverity() >= 2) {
    	setNotifText("Crisis");
    } else {
    	setNotifText("Warning");
    }
    //#]
    NOTIFY_TRANSITION_TERMINATED("7");
}

IOxfReactive::TakeEventStatus PushNotificationListener::Notification_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(UserDismissedAlarmEv_SMSWTD_id) == 1)
        {
            NOTIFY_TRANSITION_STARTED("10");
            switch (Notification_subState) {
                // State notificationVisible
                case notificationVisible:
                {
                    NOTIFY_STATE_EXITED("ROOT.Notification.notificationVisible");
                }
                break;
                case accepttimeevent_7:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Notification.accepttimeevent_7");
                }
                break;
                // State snoozed
                case snoozed:
                {
                    cancel(Notification_timeout);
                    NOTIFY_STATE_EXITED("ROOT.Notification.snoozed");
                }
                break;
                default:
                    break;
            }
            Notification_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.Notification");
            //#[ transition 10 
            dismissAlarm();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.Dismiss");
            rootState_subState = Dismiss;
            rootState_active = Dismiss;
            NOTIFY_TRANSITION_TERMINATED("10");
            res = eventConsumed;
        }
    else {
        if(IS_EVENT_TYPE_OF(AlarmResolvedEv_SMSWTD_id) == 1)
            {
                NOTIFY_TRANSITION_STARTED("16");
                switch (Notification_subState) {
                    // State notificationVisible
                    case notificationVisible:
                    {
                        NOTIFY_STATE_EXITED("ROOT.Notification.notificationVisible");
                    }
                    break;
                    case accepttimeevent_7:
                    {
                        popNullTransition();
                        NOTIFY_STATE_EXITED("ROOT.Notification.accepttimeevent_7");
                    }
                    break;
                    // State snoozed
                    case snoozed:
                    {
                        cancel(Notification_timeout);
                        NOTIFY_STATE_EXITED("ROOT.Notification.snoozed");
                    }
                    break;
                    default:
                        break;
                }
                Notification_subState = OMNonState;
                NOTIFY_STATE_EXITED("ROOT.Notification");
                //#[ transition 3 
                resolveAlarm();
                //#]
                NOTIFY_STATE_ENTERED("ROOT.normal");
                rootState_subState = normal;
                rootState_active = normal;
                //#[ state normal.(Entry) 
                setNotifText("");
                //#]
                NOTIFY_TRANSITION_TERMINATED("16");
                res = eventConsumed;
            }
        }
        
    
    return res;
}

IOxfReactive::TakeEventStatus PushNotificationListener::snoozed_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
        {
            if(getCurrentEvent() == Notification_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    cancel(Notification_timeout);
                    NOTIFY_STATE_EXITED("ROOT.Notification.snoozed");
                    NOTIFY_STATE_ENTERED("ROOT.Notification.accepttimeevent_7");
                    pushNullTransition();
                    Notification_subState = accepttimeevent_7;
                    rootState_active = accepttimeevent_7;
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = Notification_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus PushNotificationListener::notificationVisible_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(UserSnoozedEv_SMSWTD_id) == 1)
        {
            //## transition 8 
            if(getSeverity() <= 1)
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    NOTIFY_STATE_EXITED("ROOT.Notification.notificationVisible");
                    NOTIFY_STATE_ENTERED("ROOT.Notification.snoozed");
                    Notification_subState = snoozed;
                    rootState_active = snoozed;
                    //#[ state Notification.snoozed.(Entry) 
                    setNotifText("");
                    //#]
                    Notification_timeout = scheduleTimeout(5000, "ROOT.Notification.snoozed");
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = Notification_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus PushNotificationListener::accepttimeevent_7_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
        {
            NOTIFY_TRANSITION_STARTED("11");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Notification.accepttimeevent_7");
            NOTIFY_STATE_ENTERED("ROOT.Notification.notificationVisible");
            Notification_subState = notificationVisible;
            rootState_active = notificationVisible;
            //#[ state Notification.notificationVisible.(Entry) 
            if (getAlarmSeverity() >= 2) {
            	setNotifText("Crisis");
            } else {
            	setNotifText("Warning");
            }
            //#]
            NOTIFY_TRANSITION_TERMINATED("11");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = Notification_handleEvent();
        }
    return res;
}

void PushNotificationListener::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.normal");
        rootState_subState = normal;
        rootState_active = normal;
        //#[ state normal.(Entry) 
        setNotifText("");
        //#]
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus PushNotificationListener::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State normal
        case normal:
        {
            if(IS_EVENT_TYPE_OF(AlarmReceivedEv_SMSWTD_id) == 1)
                {
                    //## transition 4 
                    if(getSeverity() > 1)
                        {
                            NOTIFY_TRANSITION_STARTED("6");
                            NOTIFY_TRANSITION_STARTED("4");
                            NOTIFY_STATE_EXITED("ROOT.normal");
                            //#[ transition 6 
                            showAlarm();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.crisis");
                            rootState_subState = crisis;
                            rootState_active = crisis;
                            //#[ state crisis.(Entry) 
                            indicateCrisisAlarm();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("4");
                            NOTIFY_TRANSITION_TERMINATED("6");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("6");
                            NOTIFY_TRANSITION_STARTED("5");
                            NOTIFY_STATE_EXITED("ROOT.normal");
                            //#[ transition 6 
                            showAlarm();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.warning");
                            rootState_subState = warning;
                            rootState_active = warning;
                            //#[ state warning.(Entry) 
                            indicateWarningAlarm();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("5");
                            NOTIFY_TRANSITION_TERMINATED("6");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State crisis
        case crisis:
        {
            if(IS_EVENT_TYPE_OF(AlarmResolvedEv_SMSWTD_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.crisis");
                    //#[ transition 3 
                    resolveAlarm();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.normal");
                    rootState_subState = normal;
                    rootState_active = normal;
                    //#[ state normal.(Entry) 
                    setNotifText("");
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            else {
                if(IS_EVENT_TYPE_OF(NotificationReadyEv_SMSWTD_id) == 1)
                    {
                        NOTIFY_TRANSITION_STARTED("14");
                        NOTIFY_STATE_EXITED("ROOT.crisis");
                        Notification_entDef();
                        NOTIFY_TRANSITION_TERMINATED("14");
                        res = eventConsumed;
                    }
                }
                
            
        }
        break;
        // State warning
        case warning:
        {
            if(IS_EVENT_TYPE_OF(AlarmResolvedEv_SMSWTD_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.warning");
                    //#[ transition 3 
                    resolveAlarm();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.normal");
                    rootState_subState = normal;
                    rootState_active = normal;
                    //#[ state normal.(Entry) 
                    setNotifText("");
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            else {
                if(IS_EVENT_TYPE_OF(NotificationReadyEv_SMSWTD_id) == 1)
                    {
                        NOTIFY_TRANSITION_STARTED("13");
                        NOTIFY_STATE_EXITED("ROOT.warning");
                        Notification_entDef();
                        NOTIFY_TRANSITION_TERMINATED("13");
                        res = eventConsumed;
                    }
                }
                
            
        }
        break;
        // State notificationVisible
        case notificationVisible:
        {
            res = notificationVisible_handleEvent();
        }
        break;
        case accepttimeevent_7:
        {
            res = accepttimeevent_7_handleEvent();
        }
        break;
        // State snoozed
        case snoozed:
        {
            res = snoozed_handleEvent();
        }
        break;
        // State Dismiss
        case Dismiss:
        {
            if(IS_EVENT_TYPE_OF(AlarmResolvedEv_SMSWTD_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    NOTIFY_STATE_EXITED("ROOT.Dismiss");
                    //#[ transition 3 
                    resolveAlarm();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.normal");
                    rootState_subState = normal;
                    rootState_active = normal;
                    //#[ state normal.(Entry) 
                    setNotifText("");
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPushNotificationListener::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedNotificationListener::serializeAttributes(aomsAttributes);
}

void OMAnimatedPushNotificationListener::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedNotificationListener::serializeRelations(aomsRelations);
}

void OMAnimatedPushNotificationListener::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case PushNotificationListener::normal:
        {
            normal_serializeStates(aomsState);
        }
        break;
        case PushNotificationListener::crisis:
        {
            crisis_serializeStates(aomsState);
        }
        break;
        case PushNotificationListener::warning:
        {
            warning_serializeStates(aomsState);
        }
        break;
        case PushNotificationListener::Notification:
        {
            Notification_serializeStates(aomsState);
        }
        break;
        case PushNotificationListener::Dismiss:
        {
            Dismiss_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPushNotificationListener::warning_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.warning");
}

void OMAnimatedPushNotificationListener::Notification_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Notification");
    switch (myReal->Notification_subState) {
        case PushNotificationListener::notificationVisible:
        {
            notificationVisible_serializeStates(aomsState);
        }
        break;
        case PushNotificationListener::accepttimeevent_7:
        {
            accepttimeevent_7_serializeStates(aomsState);
        }
        break;
        case PushNotificationListener::snoozed:
        {
            snoozed_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPushNotificationListener::snoozed_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Notification.snoozed");
}

void OMAnimatedPushNotificationListener::notificationVisible_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Notification.notificationVisible");
}

void OMAnimatedPushNotificationListener::accepttimeevent_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Notification.accepttimeevent_7");
}

void OMAnimatedPushNotificationListener::normal_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.normal");
}

void OMAnimatedPushNotificationListener::Dismiss_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Dismiss");
}

void OMAnimatedPushNotificationListener::crisis_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.crisis");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(PushNotificationListener, SMSWTD, false, NotificationListener, OMAnimatedNotificationListener, OMAnimatedPushNotificationListener)

OMINIT_SUPERCLASS(NotificationListener, OMAnimatedNotificationListener)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PushNotificationListener.cpp
*********************************************************************/
