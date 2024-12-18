/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UnderwaterSensors
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\UnderwaterSensors.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UnderwaterSensors.h"
//## link itsSensors
#include "Sensors.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SMSWTD_CONTEXT_UnderwaterSensors_UnderwaterSensors_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## class UnderwaterSensors
UnderwaterSensors::UnderwaterSensors(void) : itsSensors(NULL) {
    NOTIFY_CONSTRUCTOR(UnderwaterSensors, UnderwaterSensors(), 0, SMSWTD_ANALYSIS_SMSWTD_CONTEXT_UnderwaterSensors_UnderwaterSensors_SERIALIZE);
}

UnderwaterSensors::~UnderwaterSensors(void) {
    NOTIFY_DESTRUCTOR(~UnderwaterSensors, true);
    cleanUpRelations();
}

const Sensors* UnderwaterSensors::getItsSensors(void) const {
    return itsSensors;
}

void UnderwaterSensors::setItsSensors(Sensors* const p_Sensors) {
    if(p_Sensors != NULL)
        {
            p_Sensors->_setItsUnderwaterSensors(this);
        }
    _setItsSensors(p_Sensors);
}

void UnderwaterSensors::cleanUpRelations(void) {
    if(itsSensors != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensors");
            const UnderwaterSensors* p_UnderwaterSensors = itsSensors->getItsUnderwaterSensors();
            if(p_UnderwaterSensors != NULL)
                {
                    itsSensors->__setItsUnderwaterSensors(NULL);
                }
            itsSensors = NULL;
        }
}

void UnderwaterSensors::__setItsSensors(Sensors* const p_Sensors) {
    itsSensors = p_Sensors;
    if(p_Sensors != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensors", p_Sensors, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensors");
        }
}

void UnderwaterSensors::_setItsSensors(Sensors* const p_Sensors) {
    if(itsSensors != NULL)
        {
            itsSensors->__setItsUnderwaterSensors(NULL);
        }
    __setItsSensors(p_Sensors);
}

void UnderwaterSensors::_clearItsSensors(void) {
    NOTIFY_RELATION_CLEARED("itsSensors");
    itsSensors = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUnderwaterSensors::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSensors", false, true);
    if(myReal->itsSensors)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensors);
        }
}
//#]

IMPLEMENT_META_P(UnderwaterSensors, SMSWTD_ANALYSIS_SMSWTD_CONTEXT, SMSWTD::ANALYSIS::SMSWTD_CONTEXT, false, OMAnimatedUnderwaterSensors)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UnderwaterSensors.cpp
*********************************************************************/
