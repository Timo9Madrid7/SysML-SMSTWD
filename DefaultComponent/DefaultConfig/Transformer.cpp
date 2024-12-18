/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Transformer
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Transformer.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Transformer.h"
//## link itsAlgorithms
#include "Algorithms.h"
//## link itsDataStorage
#include "DataStorage.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SMSWTD_CONTEXT_Transformer_Transformer_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## class Transformer
Transformer::Transformer(void) : itsAlgorithms(NULL), itsDataStorage(NULL) {
    NOTIFY_CONSTRUCTOR(Transformer, Transformer(), 0, SMSWTD_ANALYSIS_SMSWTD_CONTEXT_Transformer_Transformer_SERIALIZE);
}

Transformer::~Transformer(void) {
    NOTIFY_DESTRUCTOR(~Transformer, true);
    cleanUpRelations();
}

const Algorithms* Transformer::getItsAlgorithms(void) const {
    return itsAlgorithms;
}

void Transformer::setItsAlgorithms(Algorithms* const p_Algorithms) {
    if(p_Algorithms != NULL)
        {
            p_Algorithms->_setItsTransformer(this);
        }
    _setItsAlgorithms(p_Algorithms);
}

const DataStorage* Transformer::getItsDataStorage(void) const {
    return itsDataStorage;
}

void Transformer::setItsDataStorage(DataStorage* const p_DataStorage) {
    if(p_DataStorage != NULL)
        {
            p_DataStorage->_setItsTransformer(this);
        }
    _setItsDataStorage(p_DataStorage);
}

void Transformer::cleanUpRelations(void) {
    if(itsAlgorithms != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAlgorithms");
            const Transformer* p_Transformer = itsAlgorithms->getItsTransformer();
            if(p_Transformer != NULL)
                {
                    itsAlgorithms->__setItsTransformer(NULL);
                }
            itsAlgorithms = NULL;
        }
    if(itsDataStorage != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataStorage");
            const Transformer* p_Transformer = itsDataStorage->getItsTransformer();
            if(p_Transformer != NULL)
                {
                    itsDataStorage->__setItsTransformer(NULL);
                }
            itsDataStorage = NULL;
        }
}

void Transformer::__setItsAlgorithms(Algorithms* const p_Algorithms) {
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

void Transformer::_setItsAlgorithms(Algorithms* const p_Algorithms) {
    if(itsAlgorithms != NULL)
        {
            itsAlgorithms->__setItsTransformer(NULL);
        }
    __setItsAlgorithms(p_Algorithms);
}

void Transformer::_clearItsAlgorithms(void) {
    NOTIFY_RELATION_CLEARED("itsAlgorithms");
    itsAlgorithms = NULL;
}

void Transformer::__setItsDataStorage(DataStorage* const p_DataStorage) {
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

void Transformer::_setItsDataStorage(DataStorage* const p_DataStorage) {
    if(itsDataStorage != NULL)
        {
            itsDataStorage->__setItsTransformer(NULL);
        }
    __setItsDataStorage(p_DataStorage);
}

void Transformer::_clearItsDataStorage(void) {
    NOTIFY_RELATION_CLEARED("itsDataStorage");
    itsDataStorage = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTransformer::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsAlgorithms", false, true);
    if(myReal->itsAlgorithms)
        {
            aomsRelations->ADD_ITEM(myReal->itsAlgorithms);
        }
    aomsRelations->addRelation("itsDataStorage", false, true);
    if(myReal->itsDataStorage)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataStorage);
        }
}
//#]

IMPLEMENT_META_P(Transformer, SMSWTD_ANALYSIS_SMSWTD_CONTEXT, SMSWTD::ANALYSIS::SMSWTD_CONTEXT, false, OMAnimatedTransformer)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Transformer.cpp
*********************************************************************/
