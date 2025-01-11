/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sensors
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Sensors.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Sensors.h"
//## link itsAircraftSensors
#include "AircraftSensors.h"
//## link itsSatelliteSystems
#include "SatelliteSystems.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## link itsUnderwaterSensors
#include "UnderwaterSensors.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SMSWTD_CONTEXT_Sensors_Sensors_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## class Sensors
Sensors::Sensors(void) : itsAircraftSensors(NULL), itsSMSWTD(NULL), itsSatelliteSystems(NULL), itsSatelliteSystems_1(NULL), itsUnderwaterSensors(NULL) {
    NOTIFY_CONSTRUCTOR(Sensors, Sensors(), 0, SMSWTD_ANALYSIS_SMSWTD_CONTEXT_Sensors_Sensors_SERIALIZE);
}

Sensors::~Sensors(void) {
    NOTIFY_DESTRUCTOR(~Sensors, true);
    cleanUpRelations();
}

const AircraftSensors* Sensors::getItsAircraftSensors(void) const {
    return itsAircraftSensors;
}

void Sensors::setItsAircraftSensors(AircraftSensors* const p_AircraftSensors) {
    if(p_AircraftSensors != NULL)
        {
            p_AircraftSensors->_setItsSensors(this);
        }
    _setItsAircraftSensors(p_AircraftSensors);
}

const SMSWTD* Sensors::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Sensors::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsSensors(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

const SatelliteSystems* Sensors::getItsSatelliteSystems(void) const {
    return itsSatelliteSystems;
}

void Sensors::setItsSatelliteSystems(SatelliteSystems* const p_SatelliteSystems) {
    if(p_SatelliteSystems != NULL)
        {
            p_SatelliteSystems->_setItsSensors(this);
        }
    _setItsSatelliteSystems(p_SatelliteSystems);
}

const SatelliteSystems* Sensors::getItsSatelliteSystems_1(void) const {
    return itsSatelliteSystems_1;
}

void Sensors::setItsSatelliteSystems_1(SatelliteSystems* const p_SatelliteSystems) {
    if(p_SatelliteSystems != NULL)
        {
            p_SatelliteSystems->_setItsSensors_1(this);
        }
    _setItsSatelliteSystems_1(p_SatelliteSystems);
}

const UnderwaterSensors* Sensors::getItsUnderwaterSensors(void) const {
    return itsUnderwaterSensors;
}

void Sensors::setItsUnderwaterSensors(UnderwaterSensors* const p_UnderwaterSensors) {
    if(p_UnderwaterSensors != NULL)
        {
            p_UnderwaterSensors->_setItsSensors(this);
        }
    _setItsUnderwaterSensors(p_UnderwaterSensors);
}

void Sensors::cleanUpRelations(void) {
    if(itsAircraftSensors != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAircraftSensors");
            const Sensors* p_Sensors = itsAircraftSensors->getItsSensors();
            if(p_Sensors != NULL)
                {
                    itsAircraftSensors->__setItsSensors(NULL);
                }
            itsAircraftSensors = NULL;
        }
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const Sensors* p_Sensors = itsSMSWTD->getItsSensors();
            if(p_Sensors != NULL)
                {
                    itsSMSWTD->__setItsSensors(NULL);
                }
            itsSMSWTD = NULL;
        }
    if(itsSatelliteSystems != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSatelliteSystems");
            const Sensors* p_Sensors = itsSatelliteSystems->getItsSensors();
            if(p_Sensors != NULL)
                {
                    itsSatelliteSystems->__setItsSensors(NULL);
                }
            itsSatelliteSystems = NULL;
        }
    if(itsSatelliteSystems_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSatelliteSystems_1");
            const Sensors* p_Sensors = itsSatelliteSystems_1->getItsSensors_1();
            if(p_Sensors != NULL)
                {
                    itsSatelliteSystems_1->__setItsSensors_1(NULL);
                }
            itsSatelliteSystems_1 = NULL;
        }
    if(itsUnderwaterSensors != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUnderwaterSensors");
            const Sensors* p_Sensors = itsUnderwaterSensors->getItsSensors();
            if(p_Sensors != NULL)
                {
                    itsUnderwaterSensors->__setItsSensors(NULL);
                }
            itsUnderwaterSensors = NULL;
        }
}

void Sensors::__setItsAircraftSensors(AircraftSensors* const p_AircraftSensors) {
    itsAircraftSensors = p_AircraftSensors;
    if(p_AircraftSensors != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAircraftSensors", p_AircraftSensors, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAircraftSensors");
        }
}

void Sensors::_setItsAircraftSensors(AircraftSensors* const p_AircraftSensors) {
    if(itsAircraftSensors != NULL)
        {
            itsAircraftSensors->__setItsSensors(NULL);
        }
    __setItsAircraftSensors(p_AircraftSensors);
}

void Sensors::_clearItsAircraftSensors(void) {
    NOTIFY_RELATION_CLEARED("itsAircraftSensors");
    itsAircraftSensors = NULL;
}

void Sensors::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
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

void Sensors::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsSensors(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Sensors::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

void Sensors::__setItsSatelliteSystems(SatelliteSystems* const p_SatelliteSystems) {
    itsSatelliteSystems = p_SatelliteSystems;
    if(p_SatelliteSystems != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSatelliteSystems", p_SatelliteSystems, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSatelliteSystems");
        }
}

void Sensors::_setItsSatelliteSystems(SatelliteSystems* const p_SatelliteSystems) {
    if(itsSatelliteSystems != NULL)
        {
            itsSatelliteSystems->__setItsSensors(NULL);
        }
    __setItsSatelliteSystems(p_SatelliteSystems);
}

void Sensors::_clearItsSatelliteSystems(void) {
    NOTIFY_RELATION_CLEARED("itsSatelliteSystems");
    itsSatelliteSystems = NULL;
}

void Sensors::__setItsSatelliteSystems_1(SatelliteSystems* const p_SatelliteSystems) {
    itsSatelliteSystems_1 = p_SatelliteSystems;
    if(p_SatelliteSystems != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSatelliteSystems_1", p_SatelliteSystems, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSatelliteSystems_1");
        }
}

void Sensors::_setItsSatelliteSystems_1(SatelliteSystems* const p_SatelliteSystems) {
    if(itsSatelliteSystems_1 != NULL)
        {
            itsSatelliteSystems_1->__setItsSensors_1(NULL);
        }
    __setItsSatelliteSystems_1(p_SatelliteSystems);
}

void Sensors::_clearItsSatelliteSystems_1(void) {
    NOTIFY_RELATION_CLEARED("itsSatelliteSystems_1");
    itsSatelliteSystems_1 = NULL;
}

void Sensors::__setItsUnderwaterSensors(UnderwaterSensors* const p_UnderwaterSensors) {
    itsUnderwaterSensors = p_UnderwaterSensors;
    if(p_UnderwaterSensors != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUnderwaterSensors", p_UnderwaterSensors, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUnderwaterSensors");
        }
}

void Sensors::_setItsUnderwaterSensors(UnderwaterSensors* const p_UnderwaterSensors) {
    if(itsUnderwaterSensors != NULL)
        {
            itsUnderwaterSensors->__setItsSensors(NULL);
        }
    __setItsUnderwaterSensors(p_UnderwaterSensors);
}

void Sensors::_clearItsUnderwaterSensors(void) {
    NOTIFY_RELATION_CLEARED("itsUnderwaterSensors");
    itsUnderwaterSensors = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSensors::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSatelliteSystems", false, true);
    if(myReal->itsSatelliteSystems)
        {
            aomsRelations->ADD_ITEM(myReal->itsSatelliteSystems);
        }
    aomsRelations->addRelation("itsSatelliteSystems_1", false, true);
    if(myReal->itsSatelliteSystems_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsSatelliteSystems_1);
        }
    aomsRelations->addRelation("itsAircraftSensors", false, true);
    if(myReal->itsAircraftSensors)
        {
            aomsRelations->ADD_ITEM(myReal->itsAircraftSensors);
        }
    aomsRelations->addRelation("itsUnderwaterSensors", false, true);
    if(myReal->itsUnderwaterSensors)
        {
            aomsRelations->ADD_ITEM(myReal->itsUnderwaterSensors);
        }
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(Sensors, SMSWTD_ANALYSIS_SMSWTD_CONTEXT, SMSWTD::ANALYSIS::SMSWTD_CONTEXT, false, OMAnimatedSensors)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Sensors.cpp
*********************************************************************/
