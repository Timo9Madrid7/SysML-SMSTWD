/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GUI
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\GUI.h
*********************************************************************/

#ifndef GUI_H
#define GUI_H

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
//## classInstance itsContext
#include "Context.h"
//## classInstance itsDashboard
#include "Dashboard.h"
//## classInstance itsNotificationUI
#include "NotificationUI.h"
//## package SMSWTD

//## class GUI
class GUI : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGUI;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit GUI(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~GUI(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Context* getItsContext(void) const;
    
    //## auto_generated
    const Dashboard* getItsDashboard(void) const;
    
    //## auto_generated
    const NotificationUI* getItsNotificationUI(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);
    
    ////    Relations and components    ////

private :

    Context itsContext;		//## classInstance itsContext
    
    Dashboard itsDashboard;		//## classInstance itsDashboard
    
    NotificationUI itsNotificationUI;		//## classInstance itsNotificationUI
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* const theActiveContext, bool activeInstance);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGUI : virtual public AOMInstance {
    DECLARE_META(GUI, OMAnimatedGUI)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GUI.h
*********************************************************************/
