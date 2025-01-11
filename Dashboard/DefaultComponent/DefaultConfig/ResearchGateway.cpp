/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ResearchGateway
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\ResearchGateway.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ResearchGateway.h"
//## link itsDataStorage
#include "DataStorage.h"
//## link itsScientists
#include "Scientists.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SMSWTD_CONTEXT_ResearchGateway_ResearchGateway_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## class ResearchGateway
ResearchGateway::ResearchGateway(void) : itsDataStorage(NULL), itsDataStorage_1(NULL), itsDataStorage_2(NULL), itsResearchGateway(NULL), itsResearchGateway_1(NULL), itsScientists(NULL), itsScientists_1(NULL) {
    NOTIFY_CONSTRUCTOR(ResearchGateway, ResearchGateway(), 0, SMSWTD_ANALYSIS_SMSWTD_CONTEXT_ResearchGateway_ResearchGateway_SERIALIZE);
}

ResearchGateway::~ResearchGateway(void) {
    NOTIFY_DESTRUCTOR(~ResearchGateway, true);
    cleanUpRelations();
}

const DataStorage* ResearchGateway::getItsDataStorage(void) const {
    return itsDataStorage;
}

void ResearchGateway::setItsDataStorage(DataStorage* const p_DataStorage) {
    if(p_DataStorage != NULL)
        {
            p_DataStorage->_setItsResearchGateway(this);
        }
    _setItsDataStorage(p_DataStorage);
}

const DataStorage* ResearchGateway::getItsDataStorage_1(void) const {
    return itsDataStorage_1;
}

void ResearchGateway::setItsDataStorage_1(DataStorage* const p_DataStorage) {
    if(p_DataStorage != NULL)
        {
            p_DataStorage->_setItsResearchGateway_1(this);
        }
    _setItsDataStorage_1(p_DataStorage);
}

const DataStorage* ResearchGateway::getItsDataStorage_2(void) const {
    return itsDataStorage_2;
}

void ResearchGateway::setItsDataStorage_2(DataStorage* const p_DataStorage) {
    if(p_DataStorage != NULL)
        {
            p_DataStorage->_setItsResearchGateway_2(this);
        }
    _setItsDataStorage_2(p_DataStorage);
}

const ResearchGateway* ResearchGateway::getItsResearchGateway(void) const {
    return itsResearchGateway;
}

void ResearchGateway::setItsResearchGateway(ResearchGateway* const p_ResearchGateway) {
    if(p_ResearchGateway != NULL)
        {
            p_ResearchGateway->_setItsResearchGateway_1(this);
        }
    _setItsResearchGateway(p_ResearchGateway);
}

const ResearchGateway* ResearchGateway::getItsResearchGateway_1(void) const {
    return itsResearchGateway_1;
}

void ResearchGateway::setItsResearchGateway_1(ResearchGateway* const p_ResearchGateway) {
    if(p_ResearchGateway != NULL)
        {
            p_ResearchGateway->_setItsResearchGateway(this);
        }
    _setItsResearchGateway_1(p_ResearchGateway);
}

const Scientists* ResearchGateway::getItsScientists(void) const {
    return itsScientists;
}

void ResearchGateway::setItsScientists(Scientists* const p_Scientists) {
    if(p_Scientists != NULL)
        {
            p_Scientists->_setItsResearchGateway(this);
        }
    _setItsScientists(p_Scientists);
}

const Scientists* ResearchGateway::getItsScientists_1(void) const {
    return itsScientists_1;
}

void ResearchGateway::setItsScientists_1(Scientists* const p_Scientists) {
    if(p_Scientists != NULL)
        {
            p_Scientists->_setItsResearchGateway_1(this);
        }
    _setItsScientists_1(p_Scientists);
}

void ResearchGateway::cleanUpRelations(void) {
    if(itsDataStorage != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataStorage");
            const ResearchGateway* p_ResearchGateway = itsDataStorage->getItsResearchGateway();
            if(p_ResearchGateway != NULL)
                {
                    itsDataStorage->__setItsResearchGateway(NULL);
                }
            itsDataStorage = NULL;
        }
    if(itsDataStorage_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataStorage_1");
            const ResearchGateway* p_ResearchGateway = itsDataStorage_1->getItsResearchGateway_1();
            if(p_ResearchGateway != NULL)
                {
                    itsDataStorage_1->__setItsResearchGateway_1(NULL);
                }
            itsDataStorage_1 = NULL;
        }
    if(itsDataStorage_2 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataStorage_2");
            const ResearchGateway* p_ResearchGateway = itsDataStorage_2->getItsResearchGateway_2();
            if(p_ResearchGateway != NULL)
                {
                    itsDataStorage_2->__setItsResearchGateway_2(NULL);
                }
            itsDataStorage_2 = NULL;
        }
    if(itsResearchGateway != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsResearchGateway");
            const ResearchGateway* p_ResearchGateway = itsResearchGateway->getItsResearchGateway_1();
            if(p_ResearchGateway != NULL)
                {
                    itsResearchGateway->__setItsResearchGateway_1(NULL);
                }
            itsResearchGateway = NULL;
        }
    if(itsResearchGateway_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsResearchGateway_1");
            const ResearchGateway* p_ResearchGateway = itsResearchGateway_1->getItsResearchGateway();
            if(p_ResearchGateway != NULL)
                {
                    itsResearchGateway_1->__setItsResearchGateway(NULL);
                }
            itsResearchGateway_1 = NULL;
        }
    if(itsScientists != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsScientists");
            const ResearchGateway* p_ResearchGateway = itsScientists->getItsResearchGateway();
            if(p_ResearchGateway != NULL)
                {
                    itsScientists->__setItsResearchGateway(NULL);
                }
            itsScientists = NULL;
        }
    if(itsScientists_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsScientists_1");
            const ResearchGateway* p_ResearchGateway = itsScientists_1->getItsResearchGateway_1();
            if(p_ResearchGateway != NULL)
                {
                    itsScientists_1->__setItsResearchGateway_1(NULL);
                }
            itsScientists_1 = NULL;
        }
}

void ResearchGateway::__setItsDataStorage(DataStorage* const p_DataStorage) {
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

void ResearchGateway::_setItsDataStorage(DataStorage* const p_DataStorage) {
    if(itsDataStorage != NULL)
        {
            itsDataStorage->__setItsResearchGateway(NULL);
        }
    __setItsDataStorage(p_DataStorage);
}

void ResearchGateway::_clearItsDataStorage(void) {
    NOTIFY_RELATION_CLEARED("itsDataStorage");
    itsDataStorage = NULL;
}

void ResearchGateway::__setItsDataStorage_1(DataStorage* const p_DataStorage) {
    itsDataStorage_1 = p_DataStorage;
    if(p_DataStorage != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDataStorage_1", p_DataStorage, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDataStorage_1");
        }
}

void ResearchGateway::_setItsDataStorage_1(DataStorage* const p_DataStorage) {
    if(itsDataStorage_1 != NULL)
        {
            itsDataStorage_1->__setItsResearchGateway_1(NULL);
        }
    __setItsDataStorage_1(p_DataStorage);
}

void ResearchGateway::_clearItsDataStorage_1(void) {
    NOTIFY_RELATION_CLEARED("itsDataStorage_1");
    itsDataStorage_1 = NULL;
}

void ResearchGateway::__setItsDataStorage_2(DataStorage* const p_DataStorage) {
    itsDataStorage_2 = p_DataStorage;
    if(p_DataStorage != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDataStorage_2", p_DataStorage, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDataStorage_2");
        }
}

void ResearchGateway::_setItsDataStorage_2(DataStorage* const p_DataStorage) {
    if(itsDataStorage_2 != NULL)
        {
            itsDataStorage_2->__setItsResearchGateway_2(NULL);
        }
    __setItsDataStorage_2(p_DataStorage);
}

void ResearchGateway::_clearItsDataStorage_2(void) {
    NOTIFY_RELATION_CLEARED("itsDataStorage_2");
    itsDataStorage_2 = NULL;
}

void ResearchGateway::__setItsResearchGateway(ResearchGateway* const p_ResearchGateway) {
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

void ResearchGateway::_setItsResearchGateway(ResearchGateway* const p_ResearchGateway) {
    if(itsResearchGateway != NULL)
        {
            itsResearchGateway->__setItsResearchGateway_1(NULL);
        }
    __setItsResearchGateway(p_ResearchGateway);
}

void ResearchGateway::_clearItsResearchGateway(void) {
    NOTIFY_RELATION_CLEARED("itsResearchGateway");
    itsResearchGateway = NULL;
}

void ResearchGateway::__setItsResearchGateway_1(ResearchGateway* const p_ResearchGateway) {
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

void ResearchGateway::_setItsResearchGateway_1(ResearchGateway* const p_ResearchGateway) {
    if(itsResearchGateway_1 != NULL)
        {
            itsResearchGateway_1->__setItsResearchGateway(NULL);
        }
    __setItsResearchGateway_1(p_ResearchGateway);
}

void ResearchGateway::_clearItsResearchGateway_1(void) {
    NOTIFY_RELATION_CLEARED("itsResearchGateway_1");
    itsResearchGateway_1 = NULL;
}

void ResearchGateway::__setItsScientists(Scientists* const p_Scientists) {
    itsScientists = p_Scientists;
    if(p_Scientists != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsScientists", p_Scientists, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsScientists");
        }
}

void ResearchGateway::_setItsScientists(Scientists* const p_Scientists) {
    if(itsScientists != NULL)
        {
            itsScientists->__setItsResearchGateway(NULL);
        }
    __setItsScientists(p_Scientists);
}

void ResearchGateway::_clearItsScientists(void) {
    NOTIFY_RELATION_CLEARED("itsScientists");
    itsScientists = NULL;
}

void ResearchGateway::__setItsScientists_1(Scientists* const p_Scientists) {
    itsScientists_1 = p_Scientists;
    if(p_Scientists != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsScientists_1", p_Scientists, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsScientists_1");
        }
}

void ResearchGateway::_setItsScientists_1(Scientists* const p_Scientists) {
    if(itsScientists_1 != NULL)
        {
            itsScientists_1->__setItsResearchGateway_1(NULL);
        }
    __setItsScientists_1(p_Scientists);
}

void ResearchGateway::_clearItsScientists_1(void) {
    NOTIFY_RELATION_CLEARED("itsScientists_1");
    itsScientists_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedResearchGateway::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsScientists", false, true);
    if(myReal->itsScientists)
        {
            aomsRelations->ADD_ITEM(myReal->itsScientists);
        }
    aomsRelations->addRelation("itsDataStorage", false, true);
    if(myReal->itsDataStorage)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataStorage);
        }
    aomsRelations->addRelation("itsScientists_1", false, true);
    if(myReal->itsScientists_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsScientists_1);
        }
    aomsRelations->addRelation("itsDataStorage_1", false, true);
    if(myReal->itsDataStorage_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataStorage_1);
        }
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
    aomsRelations->addRelation("itsDataStorage_2", false, true);
    if(myReal->itsDataStorage_2)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataStorage_2);
        }
}
//#]

IMPLEMENT_META_P(ResearchGateway, SMSWTD_ANALYSIS_SMSWTD_CONTEXT, SMSWTD::ANALYSIS::SMSWTD_CONTEXT, false, OMAnimatedResearchGateway)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ResearchGateway.cpp
*********************************************************************/
