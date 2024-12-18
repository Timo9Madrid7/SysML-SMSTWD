/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Context
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Context.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Context.h"
//#[ ignore
#define SMSWTD_Context_Context_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class Context
Context::Context(void) {
    NOTIFY_CONSTRUCTOR(Context, Context(), 0, SMSWTD_Context_Context_SERIALIZE);
}

Context::~Context(void) {
    NOTIFY_DESTRUCTOR(~Context, true);
}

const GUI* Context::getItsGUI(void) const {
    return &itsGUI;
}

const NotificationListener* Context::getItsNotificationListener(void) const {
    return &itsNotificationListener;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedContext::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNotificationListener", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsNotificationListener);
    aomsRelations->addRelation("itsGUI", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsGUI);
}
//#]

IMPLEMENT_META_P(Context, SMSWTD, SMSWTD, false, OMAnimatedContext)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Context.cpp
*********************************************************************/
