/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SatelliteSystems
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SatelliteSystems.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SatelliteSystems.h"
//## link itsSensors
#include "Sensors.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SMSWTD_CONTEXT_SatelliteSystems_SatelliteSystems_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## class SatelliteSystems
SatelliteSystems::SatelliteSystems(void) : itsSensors(NULL), itsSensors_1(NULL) {
    NOTIFY_CONSTRUCTOR(SatelliteSystems, SatelliteSystems(), 0, SMSWTD_ANALYSIS_SMSWTD_CONTEXT_SatelliteSystems_SatelliteSystems_SERIALIZE);
}

SatelliteSystems::~SatelliteSystems(void) {
    NOTIFY_DESTRUCTOR(~SatelliteSystems, true);
    cleanUpRelations();
}

const Sensors* SatelliteSystems::getItsSensors(void) const {
    return itsSensors;
}

void SatelliteSystems::setItsSensors(Sensors* const p_Sensors) {
    if(p_Sensors != NULL)
        {
            p_Sensors->_setItsSatelliteSystems(this);
        }
    _setItsSensors(p_Sensors);
}

const Sensors* SatelliteSystems::getItsSensors_1(void) const {
    return itsSensors_1;
}

void SatelliteSystems::setItsSensors_1(Sensors* const p_Sensors) {
    if(p_Sensors != NULL)
        {
            p_Sensors->_setItsSatelliteSystems_1(this);
        }
    _setItsSensors_1(p_Sensors);
}

void SatelliteSystems::cleanUpRelations(void) {
    if(itsSensors != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensors");
            const SatelliteSystems* p_SatelliteSystems = itsSensors->getItsSatelliteSystems();
            if(p_SatelliteSystems != NULL)
                {
                    itsSensors->__setItsSatelliteSystems(NULL);
                }
            itsSensors = NULL;
        }
    if(itsSensors_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensors_1");
            const SatelliteSystems* p_SatelliteSystems = itsSensors_1->getItsSatelliteSystems_1();
            if(p_SatelliteSystems != NULL)
                {
                    itsSensors_1->__setItsSatelliteSystems_1(NULL);
                }
            itsSensors_1 = NULL;
        }
}

void SatelliteSystems::__setItsSensors(Sensors* const p_Sensors) {
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

void SatelliteSystems::_setItsSensors(Sensors* const p_Sensors) {
    if(itsSensors != NULL)
        {
            itsSensors->__setItsSatelliteSystems(NULL);
        }
    __setItsSensors(p_Sensors);
}

void SatelliteSystems::_clearItsSensors(void) {
    NOTIFY_RELATION_CLEARED("itsSensors");
    itsSensors = NULL;
}

void SatelliteSystems::__setItsSensors_1(Sensors* const p_Sensors) {
    itsSensors_1 = p_Sensors;
    if(p_Sensors != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensors_1", p_Sensors, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensors_1");
        }
}

void SatelliteSystems::_setItsSensors_1(Sensors* const p_Sensors) {
    if(itsSensors_1 != NULL)
        {
            itsSensors_1->__setItsSatelliteSystems_1(NULL);
        }
    __setItsSensors_1(p_Sensors);
}

void SatelliteSystems::_clearItsSensors_1(void) {
    NOTIFY_RELATION_CLEARED("itsSensors_1");
    itsSensors_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSatelliteSystems::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSensors", false, true);
    if(myReal->itsSensors)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensors);
        }
    aomsRelations->addRelation("itsSensors_1", false, true);
    if(myReal->itsSensors_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensors_1);
        }
}
//#]

IMPLEMENT_META_P(SatelliteSystems, SMSWTD_ANALYSIS_SMSWTD_CONTEXT, SMSWTD::ANALYSIS::SMSWTD_CONTEXT, false, OMAnimatedSatelliteSystems)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SatelliteSystems.cpp
*********************************************************************/
