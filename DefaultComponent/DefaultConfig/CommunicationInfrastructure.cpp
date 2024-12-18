/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommunicationInfrastructure
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\CommunicationInfrastructure.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CommunicationInfrastructure.h"
//## link itsGovermentAgencies
#include "GovermentAgencies.h"
//## link itsPublic
#include "Public.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SMSWTD_CONTEXT_CommunicationInfrastructure_CommunicationInfrastructure_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## class CommunicationInfrastructure
CommunicationInfrastructure::CommunicationInfrastructure(void) : itsGovermentAgencies(NULL), itsPublic(NULL), itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(CommunicationInfrastructure, CommunicationInfrastructure(), 0, SMSWTD_ANALYSIS_SMSWTD_CONTEXT_CommunicationInfrastructure_CommunicationInfrastructure_SERIALIZE);
}

CommunicationInfrastructure::~CommunicationInfrastructure(void) {
    NOTIFY_DESTRUCTOR(~CommunicationInfrastructure, true);
    cleanUpRelations();
}

const GovermentAgencies* CommunicationInfrastructure::getItsGovermentAgencies(void) const {
    return itsGovermentAgencies;
}

void CommunicationInfrastructure::setItsGovermentAgencies(GovermentAgencies* const p_GovermentAgencies) {
    if(p_GovermentAgencies != NULL)
        {
            p_GovermentAgencies->_setItsCommunicationInfrastructure(this);
        }
    _setItsGovermentAgencies(p_GovermentAgencies);
}

const Public* CommunicationInfrastructure::getItsPublic(void) const {
    return itsPublic;
}

void CommunicationInfrastructure::setItsPublic(Public* const p_Public) {
    if(p_Public != NULL)
        {
            p_Public->_setItsCommunicationInfrastructure(this);
        }
    _setItsPublic(p_Public);
}

const SMSWTD* CommunicationInfrastructure::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void CommunicationInfrastructure::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsCommunicationInfrastructure(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void CommunicationInfrastructure::cleanUpRelations(void) {
    if(itsGovermentAgencies != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGovermentAgencies");
            const CommunicationInfrastructure* p_CommunicationInfrastructure = itsGovermentAgencies->getItsCommunicationInfrastructure();
            if(p_CommunicationInfrastructure != NULL)
                {
                    itsGovermentAgencies->__setItsCommunicationInfrastructure(NULL);
                }
            itsGovermentAgencies = NULL;
        }
    if(itsPublic != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsPublic");
            const CommunicationInfrastructure* p_CommunicationInfrastructure = itsPublic->getItsCommunicationInfrastructure();
            if(p_CommunicationInfrastructure != NULL)
                {
                    itsPublic->__setItsCommunicationInfrastructure(NULL);
                }
            itsPublic = NULL;
        }
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const CommunicationInfrastructure* p_CommunicationInfrastructure = itsSMSWTD->getItsCommunicationInfrastructure();
            if(p_CommunicationInfrastructure != NULL)
                {
                    itsSMSWTD->__setItsCommunicationInfrastructure(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void CommunicationInfrastructure::__setItsGovermentAgencies(GovermentAgencies* const p_GovermentAgencies) {
    itsGovermentAgencies = p_GovermentAgencies;
    if(p_GovermentAgencies != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsGovermentAgencies", p_GovermentAgencies, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsGovermentAgencies");
        }
}

void CommunicationInfrastructure::_setItsGovermentAgencies(GovermentAgencies* const p_GovermentAgencies) {
    if(itsGovermentAgencies != NULL)
        {
            itsGovermentAgencies->__setItsCommunicationInfrastructure(NULL);
        }
    __setItsGovermentAgencies(p_GovermentAgencies);
}

void CommunicationInfrastructure::_clearItsGovermentAgencies(void) {
    NOTIFY_RELATION_CLEARED("itsGovermentAgencies");
    itsGovermentAgencies = NULL;
}

void CommunicationInfrastructure::__setItsPublic(Public* const p_Public) {
    itsPublic = p_Public;
    if(p_Public != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsPublic", p_Public, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsPublic");
        }
}

void CommunicationInfrastructure::_setItsPublic(Public* const p_Public) {
    if(itsPublic != NULL)
        {
            itsPublic->__setItsCommunicationInfrastructure(NULL);
        }
    __setItsPublic(p_Public);
}

void CommunicationInfrastructure::_clearItsPublic(void) {
    NOTIFY_RELATION_CLEARED("itsPublic");
    itsPublic = NULL;
}

void CommunicationInfrastructure::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
    if(p_SMSWTD != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTD", p_SMSWTD, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
        }
}

void CommunicationInfrastructure::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsCommunicationInfrastructure(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void CommunicationInfrastructure::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCommunicationInfrastructure::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
    aomsRelations->addRelation("itsGovermentAgencies", false, true);
    if(myReal->itsGovermentAgencies)
        {
            aomsRelations->ADD_ITEM(myReal->itsGovermentAgencies);
        }
    aomsRelations->addRelation("itsPublic", false, true);
    if(myReal->itsPublic)
        {
            aomsRelations->ADD_ITEM(myReal->itsPublic);
        }
}
//#]

IMPLEMENT_META_P(CommunicationInfrastructure, SMSWTD_ANALYSIS_SMSWTD_CONTEXT, SMSWTD::ANALYSIS::SMSWTD_CONTEXT, false, OMAnimatedCommunicationInfrastructure)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommunicationInfrastructure.cpp
*********************************************************************/
