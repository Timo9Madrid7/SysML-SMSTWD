/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: NotificationAPIClient
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\NotificationAPIClient.h
*********************************************************************/

#ifndef NotificationAPIClient_H
#define NotificationAPIClient_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## class NotificationAPIClient
#include "BackendAPIClient.h"
//## package SMSWTD

//## class NotificationAPIClient
class NotificationAPIClient : public BackendAPIClient {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedNotificationAPIClient;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    NotificationAPIClient(void);
    
    //## auto_generated
    ~NotificationAPIClient(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedNotificationAPIClient : public OMAnimatedBackendAPIClient {
    DECLARE_META(NotificationAPIClient, OMAnimatedNotificationAPIClient)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\NotificationAPIClient.h
*********************************************************************/
