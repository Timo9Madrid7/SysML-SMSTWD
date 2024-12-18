/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: NotificationUI
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\NotificationUI.h
*********************************************************************/

#ifndef NotificationUI_H
#define NotificationUI_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## classInstance itsNotificationAPIClient
#include "NotificationAPIClient.h"
//## package SMSWTD

//## class NotificationUI
class NotificationUI {
#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedNotificationUI;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    NotificationUI(void);
    
    //## auto_generated
    ~NotificationUI(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const NotificationAPIClient* getItsNotificationAPIClient(void) const;
    
    ////    Relations and components    ////

private :

    NotificationAPIClient itsNotificationAPIClient;		//## classInstance itsNotificationAPIClient
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedNotificationUI : virtual public AOMInstance {
    DECLARE_META(NotificationUI, OMAnimatedNotificationUI)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\NotificationUI.h
*********************************************************************/
