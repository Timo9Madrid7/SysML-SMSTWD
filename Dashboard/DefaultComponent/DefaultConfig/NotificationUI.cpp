/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: NotificationUI
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\NotificationUI.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "NotificationUI.h"
//#[ ignore
#define SMSWTD_NotificationUI_NotificationUI_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class NotificationUI
NotificationUI::NotificationUI(void) {
    NOTIFY_CONSTRUCTOR(NotificationUI, NotificationUI(), 0, SMSWTD_NotificationUI_NotificationUI_SERIALIZE);
}

NotificationUI::~NotificationUI(void) {
    NOTIFY_DESTRUCTOR(~NotificationUI, true);
}

const NotificationAPIClient* NotificationUI::getItsNotificationAPIClient(void) const {
    return &itsNotificationAPIClient;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedNotificationUI::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNotificationAPIClient", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsNotificationAPIClient);
}
//#]

IMPLEMENT_META_P(NotificationUI, SMSWTD, SMSWTD, false, OMAnimatedNotificationUI)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\NotificationUI.cpp
*********************************************************************/
