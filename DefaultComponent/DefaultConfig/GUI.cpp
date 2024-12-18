/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GUI
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\GUI.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "GUI.h"
//#[ ignore
#define SMSWTD_GUI_GUI_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class GUI
GUI::GUI(void) {
    NOTIFY_CONSTRUCTOR(GUI, GUI(), 0, SMSWTD_GUI_GUI_SERIALIZE);
}

GUI::~GUI(void) {
    NOTIFY_DESTRUCTOR(~GUI, true);
}

const Dashboard* GUI::getItsDashboard(void) const {
    return &itsDashboard;
}

const NotificationUI* GUI::getItsNotificationUI(void) const {
    return &itsNotificationUI;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGUI::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNotificationUI", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsNotificationUI);
    aomsRelations->addRelation("itsDashboard", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDashboard);
}
//#]

IMPLEMENT_META_P(GUI, SMSWTD, SMSWTD, false, OMAnimatedGUI)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GUI.cpp
*********************************************************************/
