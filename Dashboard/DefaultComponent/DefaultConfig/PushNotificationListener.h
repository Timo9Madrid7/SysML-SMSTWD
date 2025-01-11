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
//## class p_PushNotificationListener_severity_C
#include "unsignedint_alarmSeverity_ProxyFlowPropertyInterface.h"
//## class p_PushNotificationListener_state_C
#include "bool_state_ProxyFlowPropertyInterface.h"
//## package SMSWTD

//## class PushNotificationListener
class PushNotificationListener : public OMReactive, public NotificationListener {
public :

//#[ ignore
    //## package SMSWTD
    class p_PushNotificationListener_severity_C : public unsignedint_alarmSeverity_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_PushNotificationListener_severity_C(void);
        
        //## auto_generated
        virtual ~p_PushNotificationListener_severity_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        unsignedint_alarmSeverity_ProxyFlowPropertyInterface* getItsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        unsignedint_alarmSeverity_ProxyFlowPropertyInterface* getOutBound(void);
        
        //## auto_generated
        virtual void setAlarmSeverity(unsigned int p_alarmSeverity);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface(unsignedint_alarmSeverity_ProxyFlowPropertyInterface* const p_unsignedint_alarmSeverity_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        unsignedint_alarmSeverity_ProxyFlowPropertyInterface* itsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface;		//## link itsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface
    };
    
    //## package SMSWTD
    class p_PushNotificationListener_state_C : public bool_state_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_PushNotificationListener_state_C(void);
        
        //## auto_generated
        virtual ~p_PushNotificationListener_state_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        bool_state_ProxyFlowPropertyInterface* getItsBool_state_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        bool_state_ProxyFlowPropertyInterface* getOutBound(void);
        
        //## auto_generated
        virtual void setState(bool p_state);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsBool_state_ProxyFlowPropertyInterface(bool_state_ProxyFlowPropertyInterface* const p_bool_state_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        bool_state_ProxyFlowPropertyInterface* itsBool_state_ProxyFlowPropertyInterface;		//## link itsBool_state_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedPushNotificationListener;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit PushNotificationListener(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~PushNotificationListener(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setAlarmSeverity(unsigned int p_alarmSeverity);
    
    void setState(bool p_state);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_PushNotificationListener_severity_C* getP_PushNotificationListener_severity(void) const;
    
    //## auto_generated
    p_PushNotificationListener_severity_C* get_p_PushNotificationListener_severity(void) const;
    
    //## auto_generated
    p_PushNotificationListener_state_C* getP_PushNotificationListener_state(void) const;
    
    //## auto_generated
    p_PushNotificationListener_state_C* get_p_PushNotificationListener_state(void) const;
    
    //## auto_generated
    const unsigned int getAlarmSeverity(void) const;
    
    //## auto_generated
    const bool getState(void) const;
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cancelTimeouts(void);
    
    ////    Attributes    ////

private :

    unsigned int alarmSeverity;		//## attribute alarmSeverity
    
    bool state;		//## attribute state
    
    ////    Relations and components    ////
    
//#[ ignore
    p_PushNotificationListener_severity_C p_PushNotificationListener_severity;
    
    p_PushNotificationListener_state_C p_PushNotificationListener_state;
//#]

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
