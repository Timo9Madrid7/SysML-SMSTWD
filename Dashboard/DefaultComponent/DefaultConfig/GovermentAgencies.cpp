/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GovermentAgencies
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\GovermentAgencies.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "GovermentAgencies.h"
//## link itsCommunicationInfrastructure
#include "CommunicationInfrastructure.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SMSWTD_CONTEXT_GovermentAgencies_GovermentAgencies_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## actor GovermentAgencies
GovermentAgencies::GovermentAgencies(void) : itsCommunicationInfrastructure(NULL) {
    NOTIFY_CONSTRUCTOR(GovermentAgencies, GovermentAgencies(), 0, SMSWTD_ANALYSIS_SMSWTD_CONTEXT_GovermentAgencies_GovermentAgencies_SERIALIZE);
}

GovermentAgencies::~GovermentAgencies(void) {
    NOTIFY_DESTRUCTOR(~GovermentAgencies, true);
    cleanUpRelations();
}

const CommunicationInfrastructure* GovermentAgencies::getItsCommunicationInfrastructure(void) const {
    return itsCommunicationInfrastructure;
}

void GovermentAgencies::setItsCommunicationInfrastructure(CommunicationInfrastructure* const p_CommunicationInfrastructure) {
    if(p_CommunicationInfrastructure != NULL)
        {
            p_CommunicationInfrastructure->_setItsGovermentAgencies(this);
        }
    _setItsCommunicationInfrastructure(p_CommunicationInfrastructure);
}

void GovermentAgencies::cleanUpRelations(void) {
    if(itsCommunicationInfrastructure != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunicationInfrastructure");
            const GovermentAgencies* p_GovermentAgencies = itsCommunicationInfrastructure->getItsGovermentAgencies();
            if(p_GovermentAgencies != NULL)
                {
                    itsCommunicationInfrastructure->__setItsGovermentAgencies(NULL);
                }
            itsCommunicationInfrastructure = NULL;
        }
}

void GovermentAgencies::__setItsCommunicationInfrastructure(CommunicationInfrastructure* const p_CommunicationInfrastructure) {
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

void GovermentAgencies::_setItsCommunicationInfrastructure(CommunicationInfrastructure* const p_CommunicationInfrastructure) {
    if(itsCommunicationInfrastructure != NULL)
        {
            itsCommunicationInfrastructure->__setItsGovermentAgencies(NULL);
        }
    __setItsCommunicationInfrastructure(p_CommunicationInfrastructure);
}

void GovermentAgencies::_clearItsCommunicationInfrastructure(void) {
    NOTIFY_RELATION_CLEARED("itsCommunicationInfrastructure");
    itsCommunicationInfrastructure = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGovermentAgencies::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsCommunicationInfrastructure", false, true);
    if(myReal->itsCommunicationInfrastructure)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunicationInfrastructure);
        }
}
//#]

IMPLEMENT_META_P(GovermentAgencies, SMSWTD_ANALYSIS_SMSWTD_CONTEXT, SMSWTD::ANALYSIS::SMSWTD_CONTEXT, false, OMAnimatedGovermentAgencies)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GovermentAgencies.cpp
*********************************************************************/
