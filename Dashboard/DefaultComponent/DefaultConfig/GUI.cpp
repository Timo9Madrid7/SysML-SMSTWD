/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GUI
//!	Generated Date	: Sat, 11, Jan 2025  
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
GUI::GUI(IOxfActive* const theActiveContext) : OMReactive() {
    NOTIFY_REACTIVE_CONSTRUCTOR(GUI, GUI(), 0, SMSWTD_GUI_GUI_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsDashboard.setShouldDelete(false);
        }
        {
            itsContext.setShouldDelete(false);
        }
    }
}

GUI::~GUI(void) {
    NOTIFY_DESTRUCTOR(~GUI, true);
}

const Context* GUI::getItsContext(void) const {
    return &itsContext;
}

const Dashboard* GUI::getItsDashboard(void) const {
    return &itsDashboard;
}

const NotificationUI* GUI::getItsNotificationUI(void) const {
    return &itsNotificationUI;
}

bool GUI::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsContext.startBehavior();
        }
    if(done == true)
        {
            done = itsDashboard.startBehavior();
        }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void GUI::setActiveContext(IOxfActive* const theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsDashboard.setActiveContext(theActiveContext, false);
        itsContext.setActiveContext(theActiveContext, false);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGUI::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNotificationUI", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsNotificationUI);
    aomsRelations->addRelation("itsDashboard", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDashboard);
    aomsRelations->addRelation("itsContext", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsContext);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(GUI, SMSWTD, SMSWTD, false, OMAnimatedGUI)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GUI.cpp
*********************************************************************/
