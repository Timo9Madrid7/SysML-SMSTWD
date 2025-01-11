/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Public
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Public.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Public.h"
//## link itsCommunicationInfrastructure
#include "CommunicationInfrastructure.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SMSWTD_CONTEXT_Public_Public_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## actor Public
Public::Public(void) : itsCommunicationInfrastructure(NULL) {
    NOTIFY_CONSTRUCTOR(Public, Public(), 0, SMSWTD_ANALYSIS_SMSWTD_CONTEXT_Public_Public_SERIALIZE);
}

Public::~Public(void) {
    NOTIFY_DESTRUCTOR(~Public, true);
    cleanUpRelations();
}

const CommunicationInfrastructure* Public::getItsCommunicationInfrastructure(void) const {
    return itsCommunicationInfrastructure;
}

void Public::setItsCommunicationInfrastructure(CommunicationInfrastructure* const p_CommunicationInfrastructure) {
    if(p_CommunicationInfrastructure != NULL)
        {
            p_CommunicationInfrastructure->_setItsPublic(this);
        }
    _setItsCommunicationInfrastructure(p_CommunicationInfrastructure);
}

void Public::cleanUpRelations(void) {
    if(itsCommunicationInfrastructure != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunicationInfrastructure");
            const Public* p_Public = itsCommunicationInfrastructure->getItsPublic();
            if(p_Public != NULL)
                {
                    itsCommunicationInfrastructure->__setItsPublic(NULL);
                }
            itsCommunicationInfrastructure = NULL;
        }
}

void Public::__setItsCommunicationInfrastructure(CommunicationInfrastructure* const p_CommunicationInfrastructure) {
    itsCommunicationInfrastructure = p_CommunicationInfrastructure;
    if(p_CommunicationInfrastructure != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCommunicationInfrastructure", p_CommunicationInfrastructure, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCommunicationInfrastructure");
        }
}

void Public::_setItsCommunicationInfrastructure(CommunicationInfrastructure* const p_CommunicationInfrastructure) {
    if(itsCommunicationInfrastructure != NULL)
        {
            itsCommunicationInfrastructure->__setItsPublic(NULL);
        }
    __setItsCommunicationInfrastructure(p_CommunicationInfrastructure);
}

void Public::_clearItsCommunicationInfrastructure(void) {
    NOTIFY_RELATION_CLEARED("itsCommunicationInfrastructure");
    itsCommunicationInfrastructure = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPublic::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsCommunicationInfrastructure", false, true);
    if(myReal->itsCommunicationInfrastructure)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunicationInfrastructure);
        }
}
//#]

IMPLEMENT_META_P(Public, SMSWTD_ANALYSIS_SMSWTD_CONTEXT, SMSWTD::ANALYSIS::SMSWTD_CONTEXT, false, OMAnimatedPublic)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Public.cpp
*********************************************************************/
