/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AircraftSensors
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\AircraftSensors.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "AircraftSensors.h"
//## link itsSensors
#include "Sensors.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SMSWTD_CONTEXT_AircraftSensors_AircraftSensors_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## class AircraftSensors
AircraftSensors::AircraftSensors(void) : itsSensors(NULL) {
    NOTIFY_CONSTRUCTOR(AircraftSensors, AircraftSensors(), 0, SMSWTD_ANALYSIS_SMSWTD_CONTEXT_AircraftSensors_AircraftSensors_SERIALIZE);
}

AircraftSensors::~AircraftSensors(void) {
    NOTIFY_DESTRUCTOR(~AircraftSensors, true);
    cleanUpRelations();
}

const Sensors* AircraftSensors::getItsSensors(void) const {
    return itsSensors;
}

void AircraftSensors::setItsSensors(Sensors* const p_Sensors) {
    if(p_Sensors != NULL)
        {
            p_Sensors->_setItsAircraftSensors(this);
        }
    _setItsSensors(p_Sensors);
}

void AircraftSensors::cleanUpRelations(void) {
    if(itsSensors != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensors");
            const AircraftSensors* p_AircraftSensors = itsSensors->getItsAircraftSensors();
            if(p_AircraftSensors != NULL)
                {
                    itsSensors->__setItsAircraftSensors(NULL);
                }
            itsSensors = NULL;
        }
}

void AircraftSensors::__setItsSensors(Sensors* const p_Sensors) {
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

void AircraftSensors::_setItsSensors(Sensors* const p_Sensors) {
    if(itsSensors != NULL)
        {
            itsSensors->__setItsAircraftSensors(NULL);
        }
    __setItsSensors(p_Sensors);
}

void AircraftSensors::_clearItsSensors(void) {
    NOTIFY_RELATION_CLEARED("itsSensors");
    itsSensors = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAircraftSensors::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSensors", false, true);
    if(myReal->itsSensors)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensors);
        }
}
//#]

IMPLEMENT_META_P(AircraftSensors, SMSWTD_ANALYSIS_SMSWTD_CONTEXT, SMSWTD::ANALYSIS::SMSWTD_CONTEXT, false, OMAnimatedAircraftSensors)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AircraftSensors.cpp
*********************************************************************/
