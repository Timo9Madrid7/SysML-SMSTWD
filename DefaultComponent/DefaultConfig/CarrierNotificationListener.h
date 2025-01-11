/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CarrierNotificationListener
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\CarrierNotificationListener.h
*********************************************************************/

#ifndef CarrierNotificationListener_H
#define CarrierNotificationListener_H

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
//## class CarrierNotificationListener
#include "NotificationListener.h"
//## package SMSWTD

//## class CarrierNotificationListener
class CarrierNotificationListener : public OMReactive, public NotificationListener {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCarrierNotificationListener;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit CarrierNotificationListener(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~CarrierNotificationListener(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum CarrierNotificationListener_Enum {
        OMNonState = 0
    };
//#]

private :

//#[ ignore
    CarrierNotificationListener_Enum rootState_subState;
    
    CarrierNotificationListener_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCarrierNotificationListener : public OMAnimatedNotificationListener {
    DECLARE_REACTIVE_META(CarrierNotificationListener, OMAnimatedCarrierNotificationListener)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean CarrierNotificationListener::rootState_IN(void) const {
    return true;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CarrierNotificationListener.h
*********************************************************************/
