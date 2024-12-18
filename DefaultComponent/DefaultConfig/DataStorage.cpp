/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataStorage
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DataStorage.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DataStorage.h"
//## link itsResearchGateway
#include "ResearchGateway.h"
//## link itsScientists
#include "Scientists.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## link itsTransformer
#include "Transformer.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SMSWTD_CONTEXT_DataStorage_DataStorage_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## class DataStorage
DataStorage::DataStorage(void) : itsDataStorage(NULL), itsDataStorage_1(NULL), itsResearchGateway(NULL), itsResearchGateway_1(NULL), itsResearchGateway_2(NULL), itsSMSWTD(NULL), itsSMSWTD_1(NULL), itsScientists(NULL), itsTransformer(NULL) {
    NOTIFY_CONSTRUCTOR(DataStorage, DataStorage(), 0, SMSWTD_ANALYSIS_SMSWTD_CONTEXT_DataStorage_DataStorage_SERIALIZE);
}

DataStorage::~DataStorage(void) {
    NOTIFY_DESTRUCTOR(~DataStorage, true);
    cleanUpRelations();
}

const DataStorage* DataStorage::getItsDataStorage(void) const {
    return itsDataStorage;
}

void DataStorage::setItsDataStorage(DataStorage* const p_DataStorage) {
    if(p_DataStorage != NULL)
        {
            p_DataStorage->_setItsDataStorage_1(this);
        }
    _setItsDataStorage(p_DataStorage);
}

const DataStorage* DataStorage::getItsDataStorage_1(void) const {
    return itsDataStorage_1;
}

void DataStorage::setItsDataStorage_1(DataStorage* const p_DataStorage) {
    if(p_DataStorage != NULL)
        {
            p_DataStorage->_setItsDataStorage(this);
        }
    _setItsDataStorage_1(p_DataStorage);
}

const ResearchGateway* DataStorage::getItsResearchGateway(void) const {
    return itsResearchGateway;
}

void DataStorage::setItsResearchGateway(ResearchGateway* const p_ResearchGateway) {
    if(p_ResearchGateway != NULL)
        {
            p_ResearchGateway->_setItsDataStorage(this);
        }
    _setItsResearchGateway(p_ResearchGateway);
}

const ResearchGateway* DataStorage::getItsResearchGateway_1(void) const {
    return itsResearchGateway_1;
}

void DataStorage::setItsResearchGateway_1(ResearchGateway* const p_ResearchGateway) {
    if(p_ResearchGateway != NULL)
        {
            p_ResearchGateway->_setItsDataStorage_1(this);
        }
    _setItsResearchGateway_1(p_ResearchGateway);
}

const ResearchGateway* DataStorage::getItsResearchGateway_2(void) const {
    return itsResearchGateway_2;
}

void DataStorage::setItsResearchGateway_2(ResearchGateway* const p_ResearchGateway) {
    if(p_ResearchGateway != NULL)
        {
            p_ResearchGateway->_setItsDataStorage_2(this);
        }
    _setItsResearchGateway_2(p_ResearchGateway);
}

const SMSWTD* DataStorage::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void DataStorage::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsDataStorage(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

const SMSWTD* DataStorage::getItsSMSWTD_1(void) const {
    return itsSMSWTD_1;
}

void DataStorage::setItsSMSWTD_1(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsDataStorage_1(this);
        }
    _setItsSMSWTD_1(p_SMSWTD);
}

const Scientists* DataStorage::getItsScientists(void) const {
    return itsScientists;
}

void DataStorage::setItsScientists(Scientists* const p_Scientists) {
    if(p_Scientists != NULL)
        {
            p_Scientists->_setItsDataStorage(this);
        }
    _setItsScientists(p_Scientists);
}

const Transformer* DataStorage::getItsTransformer(void) const {
    return itsTransformer;
}

void DataStorage::setItsTransformer(Transformer* const p_Transformer) {
    if(p_Transformer != NULL)
        {
            p_Transformer->_setItsDataStorage(this);
        }
    _setItsTransformer(p_Transformer);
}

void DataStorage::cleanUpRelations(void) {
    if(itsDataStorage != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataStorage");
            const DataStorage* p_DataStorage = itsDataStorage->getItsDataStorage_1();
            if(p_DataStorage != NULL)
                {
                    itsDataStorage->__setItsDataStorage_1(NULL);
                }
            itsDataStorage = NULL;
        }
    if(itsDataStorage_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataStorage_1");
            const DataStorage* p_DataStorage = itsDataStorage_1->getItsDataStorage();
            if(p_DataStorage != NULL)
                {
                    itsDataStorage_1->__setItsDataStorage(NULL);
                }
            itsDataStorage_1 = NULL;
        }
    if(itsResearchGateway != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsResearchGateway");
            const DataStorage* p_DataStorage = itsResearchGateway->getItsDataStorage();
            if(p_DataStorage != NULL)
                {
                    itsResearchGateway->__setItsDataStorage(NULL);
                }
            itsResearchGateway = NULL;
        }
    if(itsResearchGateway_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsResearchGateway_1");
            const DataStorage* p_DataStorage = itsResearchGateway_1->getItsDataStorage_1();
            if(p_DataStorage != NULL)
                {
                    itsResearchGateway_1->__setItsDataStorage_1(NULL);
                }
            itsResearchGateway_1 = NULL;
        }
    if(itsResearchGateway_2 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsResearchGateway_2");
            const DataStorage* p_DataStorage = itsResearchGateway_2->getItsDataStorage_2();
            if(p_DataStorage != NULL)
                {
                    itsResearchGateway_2->__setItsDataStorage_2(NULL);
                }
            itsResearchGateway_2 = NULL;
        }
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const DataStorage* p_DataStorage = itsSMSWTD->getItsDataStorage();
            if(p_DataStorage != NULL)
                {
                    itsSMSWTD->__setItsDataStorage(NULL);
                }
            itsSMSWTD = NULL;
        }
    if(itsSMSWTD_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD_1");
            const DataStorage* p_DataStorage = itsSMSWTD_1->getItsDataStorage_1();
            if(p_DataStorage != NULL)
                {
                    itsSMSWTD_1->__setItsDataStorage_1(NULL);
                }
            itsSMSWTD_1 = NULL;
        }
    if(itsScientists != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsScientists");
            const DataStorage* p_DataStorage = itsScientists->getItsDataStorage();
            if(p_DataStorage != NULL)
                {
                    itsScientists->__setItsDataStorage(NULL);
                }
            itsScientists = NULL;
        }
    if(itsTransformer != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTransformer");
            const DataStorage* p_DataStorage = itsTransformer->getItsDataStorage();
            if(p_DataStorage != NULL)
                {
                    itsTransformer->__setItsDataStorage(NULL);
                }
            itsTransformer = NULL;
        }
}

void DataStorage::__setItsDataStorage(DataStorage* const p_DataStorage) {
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

void DataStorage::_setItsDataStorage(DataStorage* const p_DataStorage) {
    if(itsDataStorage != NULL)
        {
            itsDataStorage->__setItsDataStorage_1(NULL);
        }
    __setItsDataStorage(p_DataStorage);
}

void DataStorage::_clearItsDataStorage(void) {
    NOTIFY_RELATION_CLEARED("itsDataStorage");
    itsDataStorage = NULL;
}

void DataStorage::__setItsDataStorage_1(DataStorage* const p_DataStorage) {
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

void DataStorage::_setItsDataStorage_1(DataStorage* const p_DataStorage) {
    if(itsDataStorage_1 != NULL)
        {
            itsDataStorage_1->__setItsDataStorage(NULL);
        }
    __setItsDataStorage_1(p_DataStorage);
}

void DataStorage::_clearItsDataStorage_1(void) {
    NOTIFY_RELATION_CLEARED("itsDataStorage_1");
    itsDataStorage_1 = NULL;
}

void DataStorage::__setItsResearchGateway(ResearchGateway* const p_ResearchGateway) {
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

void DataStorage::_setItsResearchGateway(ResearchGateway* const p_ResearchGateway) {
    if(itsResearchGateway != NULL)
        {
            itsResearchGateway->__setItsDataStorage(NULL);
        }
    __setItsResearchGateway(p_ResearchGateway);
}

void DataStorage::_clearItsResearchGateway(void) {
    NOTIFY_RELATION_CLEARED("itsResearchGateway");
    itsResearchGateway = NULL;
}

void DataStorage::__setItsResearchGateway_1(ResearchGateway* const p_ResearchGateway) {
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

void DataStorage::_setItsResearchGateway_1(ResearchGateway* const p_ResearchGateway) {
    if(itsResearchGateway_1 != NULL)
        {
            itsResearchGateway_1->__setItsDataStorage_1(NULL);
        }
    __setItsResearchGateway_1(p_ResearchGateway);
}

void DataStorage::_clearItsResearchGateway_1(void) {
    NOTIFY_RELATION_CLEARED("itsResearchGateway_1");
    itsResearchGateway_1 = NULL;
}

void DataStorage::__setItsResearchGateway_2(ResearchGateway* const p_ResearchGateway) {
    itsResearchGateway_2 = p_ResearchGateway;
    if(p_ResearchGateway != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsResearchGateway_2", p_ResearchGateway, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsResearchGateway_2");
        }
}

void DataStorage::_setItsResearchGateway_2(ResearchGateway* const p_ResearchGateway) {
    if(itsResearchGateway_2 != NULL)
        {
            itsResearchGateway_2->__setItsDataStorage_2(NULL);
        }
    __setItsResearchGateway_2(p_ResearchGateway);
}

void DataStorage::_clearItsResearchGateway_2(void) {
    NOTIFY_RELATION_CLEARED("itsResearchGateway_2");
    itsResearchGateway_2 = NULL;
}

void DataStorage::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
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

void DataStorage::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsDataStorage(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void DataStorage::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

void DataStorage::__setItsSMSWTD_1(SMSWTD* const p_SMSWTD) {
    itsSMSWTD_1 = p_SMSWTD;
    if(p_SMSWTD != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTD_1", p_SMSWTD, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD_1");
        }
}

void DataStorage::_setItsSMSWTD_1(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD_1 != NULL)
        {
            itsSMSWTD_1->__setItsDataStorage_1(NULL);
        }
    __setItsSMSWTD_1(p_SMSWTD);
}

void DataStorage::_clearItsSMSWTD_1(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD_1");
    itsSMSWTD_1 = NULL;
}

void DataStorage::__setItsScientists(Scientists* const p_Scientists) {
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

void DataStorage::_setItsScientists(Scientists* const p_Scientists) {
    if(itsScientists != NULL)
        {
            itsScientists->__setItsDataStorage(NULL);
        }
    __setItsScientists(p_Scientists);
}

void DataStorage::_clearItsScientists(void) {
    NOTIFY_RELATION_CLEARED("itsScientists");
    itsScientists = NULL;
}

void DataStorage::__setItsTransformer(Transformer* const p_Transformer) {
    itsTransformer = p_Transformer;
    if(p_Transformer != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTransformer", p_Transformer, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTransformer");
        }
}

void DataStorage::_setItsTransformer(Transformer* const p_Transformer) {
    if(itsTransformer != NULL)
        {
            itsTransformer->__setItsDataStorage(NULL);
        }
    __setItsTransformer(p_Transformer);
}

void DataStorage::_clearItsTransformer(void) {
    NOTIFY_RELATION_CLEARED("itsTransformer");
    itsTransformer = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDataStorage::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
    aomsRelations->addRelation("itsResearchGateway", false, true);
    if(myReal->itsResearchGateway)
        {
            aomsRelations->ADD_ITEM(myReal->itsResearchGateway);
        }
    aomsRelations->addRelation("itsTransformer", false, true);
    if(myReal->itsTransformer)
        {
            aomsRelations->ADD_ITEM(myReal->itsTransformer);
        }
    aomsRelations->addRelation("itsDataStorage", false, true);
    if(myReal->itsDataStorage)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataStorage);
        }
    aomsRelations->addRelation("itsDataStorage_1", false, true);
    if(myReal->itsDataStorage_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataStorage_1);
        }
    aomsRelations->addRelation("itsResearchGateway_1", false, true);
    if(myReal->itsResearchGateway_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsResearchGateway_1);
        }
    aomsRelations->addRelation("itsResearchGateway_2", false, true);
    if(myReal->itsResearchGateway_2)
        {
            aomsRelations->ADD_ITEM(myReal->itsResearchGateway_2);
        }
    aomsRelations->addRelation("itsSMSWTD_1", false, true);
    if(myReal->itsSMSWTD_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD_1);
        }
    aomsRelations->addRelation("itsScientists", false, true);
    if(myReal->itsScientists)
        {
            aomsRelations->ADD_ITEM(myReal->itsScientists);
        }
}
//#]

IMPLEMENT_META_P(DataStorage, SMSWTD_ANALYSIS_SMSWTD_CONTEXT, SMSWTD::ANALYSIS::SMSWTD_CONTEXT, false, OMAnimatedDataStorage)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataStorage.cpp
*********************************************************************/
