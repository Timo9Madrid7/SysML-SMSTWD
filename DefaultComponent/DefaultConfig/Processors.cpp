/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Processors
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Processors.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Processors.h"
//## link itsAlgorithms
#include "Algorithms.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SMSWTD_CONTEXT_Processors_Processors_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## class Processors
Processors::Processors(void) : itsAlgorithms(NULL), itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(Processors, Processors(), 0, SMSWTD_ANALYSIS_SMSWTD_CONTEXT_Processors_Processors_SERIALIZE);
}

Processors::~Processors(void) {
    NOTIFY_DESTRUCTOR(~Processors, true);
    cleanUpRelations();
}

const Algorithms* Processors::getItsAlgorithms(void) const {
    return itsAlgorithms;
}

void Processors::setItsAlgorithms(Algorithms* const p_Algorithms) {
    if(p_Algorithms != NULL)
        {
            p_Algorithms->_setItsProcessors(this);
        }
    _setItsAlgorithms(p_Algorithms);
}

const SMSWTD* Processors::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Processors::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsProcessors(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void Processors::cleanUpRelations(void) {
    if(itsAlgorithms != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAlgorithms");
            const Processors* p_Processors = itsAlgorithms->getItsProcessors();
            if(p_Processors != NULL)
                {
                    itsAlgorithms->__setItsProcessors(NULL);
                }
            itsAlgorithms = NULL;
        }
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const Processors* p_Processors = itsSMSWTD->getItsProcessors();
            if(p_Processors != NULL)
                {
                    itsSMSWTD->__setItsProcessors(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void Processors::__setItsAlgorithms(Algorithms* const p_Algorithms) {
    itsAlgorithms = p_Algorithms;
    if(p_Algorithms != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAlgorithms", p_Algorithms, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAlgorithms");
        }
}

void Processors::_setItsAlgorithms(Algorithms* const p_Algorithms) {
    if(itsAlgorithms != NULL)
        {
            itsAlgorithms->__setItsProcessors(NULL);
        }
    __setItsAlgorithms(p_Algorithms);
}

void Processors::_clearItsAlgorithms(void) {
    NOTIFY_RELATION_CLEARED("itsAlgorithms");
    itsAlgorithms = NULL;
}

void Processors::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
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

void Processors::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsProcessors(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Processors::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedProcessors::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsAlgorithms", false, true);
    if(myReal->itsAlgorithms)
        {
            aomsRelations->ADD_ITEM(myReal->itsAlgorithms);
        }
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(Processors, SMSWTD_ANALYSIS_SMSWTD_CONTEXT, SMSWTD::ANALYSIS::SMSWTD_CONTEXT, false, OMAnimatedProcessors)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Processors.cpp
*********************************************************************/
