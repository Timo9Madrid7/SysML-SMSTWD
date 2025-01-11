/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PushNotificationListener
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\PushNotificationListener.h
*********************************************************************/

#ifndef PushNotificationListener_H
#define PushNotificationListener_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## class PushNotificationListener
#include "NotificationListener.h"
//## package SMSWTD

//## class PushNotificationListener
class PushNotificationListener : public OMReactive, public NotificationListener {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPushNotificationListener;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit PushNotificationListener(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~PushNotificationListener(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cancelTimeouts(void);
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // warning:
    //## statechart_method
    inline RhpBoolean warning_IN(void) const;
    
    // Notification:
    //## statechart_method
    inline RhpBoolean Notification_IN(void) const;
    
    //## statechart_method
    void Notification_entDef(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Notification_handleEvent(void);
    
    // snoozed:
    //## statechart_method
    inline RhpBoolean snoozed_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus snoozed_handleEvent(void);
    
    // notificationVisible:
    //## statechart_method
    inline RhpBoolean notificationVisible_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus notificationVisible_handleEvent(void);
    
    // accepttimeevent_7:
    //## statechart_method
    inline RhpBoolean accepttimeevent_7_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus accepttimeevent_7_handleEvent(void);
    
    // normal:
    //## statechart_method
    inline RhpBoolean normal_IN(void) const;
    
    // Dismiss:
    //## statechart_method
    inline RhpBoolean Dismiss_IN(void) const;
    
    // crisis:
    //## statechart_method
    inline RhpBoolean crisis_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum PushNotificationListener_Enum {
        OMNonState = 0,
        warning = 1,
        Notification = 2,
        snoozed = 3,
        notificationVisible = 4,
        accepttimeevent_7 = 5,
        normal = 6,
        Dismiss = 7,
        crisis = 8
    };
//#]

private :

//#[ ignore
    PushNotificationListener_Enum rootState_subState;
    
    PushNotificationListener_Enum rootState_active;
    
    PushNotificationListener_Enum Notification_subState;
    
    IOxfTimeout* Notification_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPushNotificationListener : public OMAnimatedNotificationListener {
    DECLARE_REACTIVE_META(PushNotificationListener, OMAnimatedPushNotificationListener)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void warning_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Notification_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void snoozed_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void notificationVisible_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void normal_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Dismiss_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void crisis_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean PushNotificationListener::rootState_IN(void) const {
    return true;
}

inline RhpBoolean PushNotificationListener::warning_IN(void) const {
    return rootState_subState == warning;
}

inline RhpBoolean PushNotificationListener::Notification_IN(void) const {
    return rootState_subState == Notification;
}

inline RhpBoolean PushNotificationListener::snoozed_IN(void) const {
    return Notification_subState == snoozed;
}

inline RhpBoolean PushNotificationListener::notificationVisible_IN(void) const {
    return Notification_subState == notificationVisible;
}

inline RhpBoolean PushNotificationListener::accepttimeevent_7_IN(void) const {
    return Notification_subState == accepttimeevent_7;
}

inline RhpBoolean PushNotificationListener::normal_IN(void) const {
    return rootState_subState == normal;
}

inline RhpBoolean PushNotificationListener::Dismiss_IN(void) const {
    return rootState_subState == Dismiss;
}

inline RhpBoolean PushNotificationListener::crisis_IN(void) const {
    return rootState_subState == crisis;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PushNotificationListener.h
*********************************************************************/
