/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: IntraCommunicationInterface
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\IntraCommunicationInterface.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "IntraCommunicationInterface.h"
//## link itsMaintainerPortal
#include "MaintainerPortal.h"
//#[ ignore
#define SMSWTD_IntraCommunicationInterface_IntraCommunicationInterface_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class IntraCommunicationInterface
IntraCommunicationInterface::IntraCommunicationInterface(void) : CommunicationInterface(), itsMaintainerPortal(NULL) {
    NOTIFY_CONSTRUCTOR(IntraCommunicationInterface, IntraCommunicationInterface(), 0, SMSWTD_IntraCommunicationInterface_IntraCommunicationInterface_SERIALIZE);
}

IntraCommunicationInterface::~IntraCommunicationInterface(void) {
    NOTIFY_DESTRUCTOR(~IntraCommunicationInterface, false);
    cleanUpRelations();
}

const MaintainerPortal* IntraCommunicationInterface::getItsMaintainerPortal(void) const {
    return itsMaintainerPortal;
}

void IntraCommunicationInterface::setItsMaintainerPortal(MaintainerPortal* const p_MaintainerPortal) {
    itsMaintainerPortal = p_MaintainerPortal;
    if(p_MaintainerPortal != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsMaintainerPortal", p_MaintainerPortal, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsMaintainerPortal");
        }
}

void IntraCommunicationInterface::cleanUpRelations(void) {
    if(itsMaintainerPortal != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsMaintainerPortal");
            itsMaintainerPortal = NULL;
        }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedIntraCommunicationInterface::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedCommunicationInterface::serializeAttributes(aomsAttributes);
}

void OMAnimatedIntraCommunicationInterface::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsMaintainerPortal", false, true);
    if(myReal->itsMaintainerPortal)
        {
            aomsRelations->ADD_ITEM(myReal->itsMaintainerPortal);
        }
    OMAnimatedCommunicationInterface::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(IntraCommunicationInterface, SMSWTD, false, CommunicationInterface, OMAnimatedCommunicationInterface, OMAnimatedIntraCommunicationInterface)

OMINIT_SUPERCLASS(CommunicationInterface, OMAnimatedCommunicationInterface)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\IntraCommunicationInterface.cpp
*********************************************************************/
