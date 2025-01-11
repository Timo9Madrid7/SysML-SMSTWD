/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: BackendAPIClient
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\BackendAPIClient.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "BackendAPIClient.h"
//#[ ignore
#define SMSWTD_BackendAPIClient_BackendAPIClient_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class BackendAPIClient
BackendAPIClient::BackendAPIClient(void) {
    NOTIFY_CONSTRUCTOR(BackendAPIClient, BackendAPIClient(), 0, SMSWTD_BackendAPIClient_BackendAPIClient_SERIALIZE);
}

BackendAPIClient::~BackendAPIClient(void) {
    NOTIFY_DESTRUCTOR(~BackendAPIClient, true);
}

const LocationProvider* BackendAPIClient::getItsLocationProvider(void) const {
    return &itsLocationProvider;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedBackendAPIClient::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsLocationProvider", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLocationProvider);
}
//#]

IMPLEMENT_META_P(BackendAPIClient, SMSWTD, SMSWTD, false, OMAnimatedBackendAPIClient)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\BackendAPIClient.cpp
*********************************************************************/
