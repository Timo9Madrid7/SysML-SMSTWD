/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Context
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Context.h
*********************************************************************/

#ifndef Context_H
#define Context_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## classInstance itsGUI
#include "GUI.h"
//## classInstance itsNotificationListener
#include "NotificationListener.h"
//## package SMSWTD

//## class Context
class Context {
#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedContext;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Context(void);
    
    //## auto_generated
    ~Context(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const GUI* getItsGUI(void) const;
    
    //## auto_generated
    const NotificationListener* getItsNotificationListener(void) const;
    
    ////    Relations and components    ////

private :

    GUI itsGUI;		//## classInstance itsGUI
    
    NotificationListener itsNotificationListener;		//## classInstance itsNotificationListener
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedContext : virtual public AOMInstance {
    DECLARE_META(Context, OMAnimatedContext)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Context.h
*********************************************************************/
