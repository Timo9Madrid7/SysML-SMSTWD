/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: InterCommunicationInterface
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\InterCommunicationInterface.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "InterCommunicationInterface.h"
//#[ ignore
#define SMSWTD_InterCommunicationInterface_InterCommunicationInterface_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class InterCommunicationInterface
InterCommunicationInterface::InterCommunicationInterface(void) : CommunicationInterface() {
    NOTIFY_CONSTRUCTOR(InterCommunicationInterface, InterCommunicationInterface(), 0, SMSWTD_InterCommunicationInterface_InterCommunicationInterface_SERIALIZE);
}

InterCommunicationInterface::~InterCommunicationInterface(void) {
    NOTIFY_DESTRUCTOR(~InterCommunicationInterface, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedInterCommunicationInterface::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedCommunicationInterface::serializeAttributes(aomsAttributes);
}

void OMAnimatedInterCommunicationInterface::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedCommunicationInterface::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(InterCommunicationInterface, SMSWTD, false, CommunicationInterface, OMAnimatedCommunicationInterface, OMAnimatedInterCommunicationInterface)

OMINIT_SUPERCLASS(CommunicationInterface, OMAnimatedCommunicationInterface)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\InterCommunicationInterface.cpp
*********************************************************************/
