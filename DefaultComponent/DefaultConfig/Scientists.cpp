/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Scientists
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Scientists.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Scientists.h"
//## link itsDataStorage
#include "DataStorage.h"
//## link itsResearchGateway
#include "ResearchGateway.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SMSWTD_CONTEXT_Scientists_Scientists_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## actor Scientists
Scientists::Scientists(void) : itsDataStorage(NULL), itsResearchGateway(NULL), itsResearchGateway_1(NULL) {
    NOTIFY_CONSTRUCTOR(Scientists, Scientists(), 0, SMSWTD_ANALYSIS_SMSWTD_CONTEXT_Scientists_Scientists_SERIALIZE);
}

Scientists::~Scientists(void) {
    NOTIFY_DESTRUCTOR(~Scientists, true);
    cleanUpRelations();
}

const DataStorage* Scientists::getItsDataStorage(void) const {
    return itsDataStorage;
}

void Scientists::setItsDataStorage(DataStorage* const p_DataStorage) {
    if(p_DataStorage != NULL)
        {
            p_DataStorage->_setItsScientists(this);
        }
    _setItsDataStorage(p_DataStorage);
}

const ResearchGateway* Scientists::getItsResearchGateway(void) const {
    return itsResearchGateway;
}

void Scientists::setItsResearchGateway(ResearchGateway* const p_ResearchGateway) {
    if(p_ResearchGateway != NULL)
        {
            p_ResearchGateway->_setItsScientists(this);
        }
    _setItsResearchGateway(p_ResearchGateway);
}

const ResearchGateway* Scientists::getItsResearchGateway_1(void) const {
    return itsResearchGateway_1;
}

void Scientists::setItsResearchGateway_1(ResearchGateway* const p_ResearchGateway) {
    if(p_ResearchGateway != NULL)
        {
            p_ResearchGateway->_setItsScientists_1(this);
        }
    _setItsResearchGateway_1(p_ResearchGateway);
}

void Scientists::cleanUpRelations(void) {
    if(itsDataStorage != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataStorage");
            const Scientists* p_Scientists = itsDataStorage->getItsScientists();
            if(p_Scientists != NULL)
                {
                    itsDataStorage->__setItsScientists(NULL);
                }
            itsDataStorage = NULL;
        }
    if(itsResearchGateway != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsResearchGateway");
            const Scientists* p_Scientists = itsResearchGateway->getItsScientists();
            if(p_Scientists != NULL)
                {
                    itsResearchGateway->__setItsScientists(NULL);
                }
            itsResearchGateway = NULL;
        }
    if(itsResearchGateway_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsResearchGateway_1");
            const Scientists* p_Scientists = itsResearchGateway_1->getItsScientists_1();
            if(p_Scientists != NULL)
                {
                    itsResearchGateway_1->__setItsScientists_1(NULL);
                }
            itsResearchGateway_1 = NULL;
        }
}

void Scientists::__setItsDataStorage(DataStorage* const p_DataStorage) {
    itsDataStorage = p_DataStorage;
    if(p_DataStorage != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDataStorage", p_DataStorage, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDataStorage");
        }
}

void Scientists::_setItsDataStorage(DataStorage* const p_DataStorage) {
    if(itsDataStorage != NULL)
        {
            itsDataStorage->__setItsScientists(NULL);
        }
    __setItsDataStorage(p_DataStorage);
}

void Scientists::_clearItsDataStorage(void) {
    NOTIFY_RELATION_CLEARED("itsDataStorage");
    itsDataStorage = NULL;
}

void Scientists::__setItsResearchGateway(ResearchGateway* const p_ResearchGateway) {
    itsResearchGateway = p_ResearchGateway;
    if(p_ResearchGateway != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsResearchGateway", p_ResearchGateway, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsResearchGateway");
        }
}

void Scientists::_setItsResearchGateway(ResearchGateway* const p_ResearchGateway) {
    if(itsResearchGateway != NULL)
        {
            itsResearchGateway->__setItsScientists(NULL);
        }
    __setItsResearchGateway(p_ResearchGateway);
}

void Scientists::_clearItsResearchGateway(void) {
    NOTIFY_RELATION_CLEARED("itsResearchGateway");
    itsResearchGateway = NULL;
}

void Scientists::__setItsResearchGateway_1(ResearchGateway* const p_ResearchGateway) {
    itsResearchGateway_1 = p_ResearchGateway;
    if(p_ResearchGateway != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsResearchGateway_1", p_ResearchGateway, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsResearchGateway_1");
        }
}

void Scientists::_setItsResearchGateway_1(ResearchGateway* const p_ResearchGateway) {
    if(itsResearchGateway_1 != NULL)
        {
            itsResearchGateway_1->__setItsScientists_1(NULL);
        }
    __setItsResearchGateway_1(p_ResearchGateway);
}

void Scientists::_clearItsResearchGateway_1(void) {
    NOTIFY_RELATION_CLEARED("itsResearchGateway_1");
    itsResearchGateway_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedScientists::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsResearchGateway", false, true);
    if(myReal->itsResearchGateway)
        {
            aomsRelations->ADD_ITEM(myReal->itsResearchGateway);
        }
    aomsRelations->addRelation("itsResearchGateway_1", false, true);
    if(myReal->itsResearchGateway_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsResearchGateway_1);
        }
    aomsRelations->addRelation("itsDataStorage", false, true);
    if(myReal->itsDataStorage)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataStorage);
        }
}
//#]

IMPLEMENT_META_P(Scientists, SMSWTD_ANALYSIS_SMSWTD_CONTEXT, SMSWTD::ANALYSIS::SMSWTD_CONTEXT, false, OMAnimatedScientists)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Scientists.cpp
*********************************************************************/
