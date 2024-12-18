/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Algorithms
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Algorithms.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Algorithms.h"
//## link itsProcessors
#include "Processors.h"
//## link itsTransformer
#include "Transformer.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SMSWTD_CONTEXT_Algorithms_Algorithms_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## class Algorithms
Algorithms::Algorithms(void) : itsProcessors(NULL), itsTransformer(NULL) {
    NOTIFY_CONSTRUCTOR(Algorithms, Algorithms(), 0, SMSWTD_ANALYSIS_SMSWTD_CONTEXT_Algorithms_Algorithms_SERIALIZE);
}

Algorithms::~Algorithms(void) {
    NOTIFY_DESTRUCTOR(~Algorithms, true);
    cleanUpRelations();
}

const Processors* Algorithms::getItsProcessors(void) const {
    return itsProcessors;
}

void Algorithms::setItsProcessors(Processors* const p_Processors) {
    if(p_Processors != NULL)
        {
            p_Processors->_setItsAlgorithms(this);
        }
    _setItsProcessors(p_Processors);
}

const Transformer* Algorithms::getItsTransformer(void) const {
    return itsTransformer;
}

void Algorithms::setItsTransformer(Transformer* const p_Transformer) {
    if(p_Transformer != NULL)
        {
            p_Transformer->_setItsAlgorithms(this);
        }
    _setItsTransformer(p_Transformer);
}

void Algorithms::cleanUpRelations(void) {
    if(itsProcessors != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsProcessors");
            const Algorithms* p_Algorithms = itsProcessors->getItsAlgorithms();
            if(p_Algorithms != NULL)
                {
                    itsProcessors->__setItsAlgorithms(NULL);
                }
            itsProcessors = NULL;
        }
    if(itsTransformer != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTransformer");
            const Algorithms* p_Algorithms = itsTransformer->getItsAlgorithms();
            if(p_Algorithms != NULL)
                {
                    itsTransformer->__setItsAlgorithms(NULL);
                }
            itsTransformer = NULL;
        }
}

void Algorithms::__setItsProcessors(Processors* const p_Processors) {
    itsProcessors = p_Processors;
    if(p_Processors != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsProcessors", p_Processors, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsProcessors");
        }
}

void Algorithms::_setItsProcessors(Processors* const p_Processors) {
    if(itsProcessors != NULL)
        {
            itsProcessors->__setItsAlgorithms(NULL);
        }
    __setItsProcessors(p_Processors);
}

void Algorithms::_clearItsProcessors(void) {
    NOTIFY_RELATION_CLEARED("itsProcessors");
    itsProcessors = NULL;
}

void Algorithms::__setItsTransformer(Transformer* const p_Transformer) {
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

void Algorithms::_setItsTransformer(Transformer* const p_Transformer) {
    if(itsTransformer != NULL)
        {
            itsTransformer->__setItsAlgorithms(NULL);
        }
    __setItsTransformer(p_Transformer);
}

void Algorithms::_clearItsTransformer(void) {
    NOTIFY_RELATION_CLEARED("itsTransformer");
    itsTransformer = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAlgorithms::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTransformer", false, true);
    if(myReal->itsTransformer)
        {
            aomsRelations->ADD_ITEM(myReal->itsTransformer);
        }
    aomsRelations->addRelation("itsProcessors", false, true);
    if(myReal->itsProcessors)
        {
            aomsRelations->ADD_ITEM(myReal->itsProcessors);
        }
}
//#]

IMPLEMENT_META_P(Algorithms, SMSWTD_ANALYSIS_SMSWTD_CONTEXT, SMSWTD::ANALYSIS::SMSWTD_CONTEXT, false, OMAnimatedAlgorithms)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Algorithms.cpp
*********************************************************************/
