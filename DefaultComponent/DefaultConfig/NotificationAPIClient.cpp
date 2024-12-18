/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: NotificationAPIClient
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\NotificationAPIClient.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "NotificationAPIClient.h"
//#[ ignore
#define SMSWTD_NotificationAPIClient_NotificationAPIClient_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class NotificationAPIClient
NotificationAPIClient::NotificationAPIClient(void) : BackendAPIClient() {
    NOTIFY_CONSTRUCTOR(NotificationAPIClient, NotificationAPIClient(), 0, SMSWTD_NotificationAPIClient_NotificationAPIClient_SERIALIZE);
}

NotificationAPIClient::~NotificationAPIClient(void) {
    NOTIFY_DESTRUCTOR(~NotificationAPIClient, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedNotificationAPIClient::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedBackendAPIClient::serializeAttributes(aomsAttributes);
}

void OMAnimatedNotificationAPIClient::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedBackendAPIClient::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(NotificationAPIClient, SMSWTD, false, BackendAPIClient, OMAnimatedBackendAPIClient, OMAnimatedNotificationAPIClient)

OMINIT_SUPERCLASS(BackendAPIClient, OMAnimatedBackendAPIClient)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\NotificationAPIClient.cpp
*********************************************************************/
