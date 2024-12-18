/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sensors
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Sensors.h
*********************************************************************/

#ifndef Sensors_H
#define Sensors_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD_CONTEXT.h"
//## link itsAircraftSensors
class AircraftSensors;

//## link itsSMSWTD
class SMSWTD;

//## link itsSatelliteSystems
class SatelliteSystems;

//## link itsUnderwaterSensors
class UnderwaterSensors;

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## class Sensors
class Sensors {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSensors;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Sensors(void);
    
    //## auto_generated
    ~Sensors(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const AircraftSensors* getItsAircraftSensors(void) const;
    
    //## auto_generated
    void setItsAircraftSensors(AircraftSensors* const p_AircraftSensors);
    
    //## auto_generated
    const SMSWTD* getItsSMSWTD(void) const;
    
    //## auto_generated
    void setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    const SatelliteSystems* getItsSatelliteSystems(void) const;
    
    //## auto_generated
    void setItsSatelliteSystems(SatelliteSystems* const p_SatelliteSystems);
    
    //## auto_generated
    const SatelliteSystems* getItsSatelliteSystems_1(void) const;
    
    //## auto_generated
    void setItsSatelliteSystems_1(SatelliteSystems* const p_SatelliteSystems);
    
    //## auto_generated
    const UnderwaterSensors* getItsUnderwaterSensors(void) const;
    
    //## auto_generated
    void setItsUnderwaterSensors(UnderwaterSensors* const p_UnderwaterSensors);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    AircraftSensors* itsAircraftSensors;		//## link itsAircraftSensors
    
    SMSWTD* itsSMSWTD;		//## link itsSMSWTD
    
    SatelliteSystems* itsSatelliteSystems;		//## link itsSatelliteSystems
    
    SatelliteSystems* itsSatelliteSystems_1;		//## link itsSatelliteSystems_1
    
    UnderwaterSensors* itsUnderwaterSensors;		//## link itsUnderwaterSensors
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAircraftSensors(AircraftSensors* const p_AircraftSensors);
    
    //## auto_generated
    void _setItsAircraftSensors(AircraftSensors* const p_AircraftSensors);
    
    //## auto_generated
    void _clearItsAircraftSensors(void);
    
    //## auto_generated
    void __setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _clearItsSMSWTD(void);
    
    //## auto_generated
    void __setItsSatelliteSystems(SatelliteSystems* const p_SatelliteSystems);
    
    //## auto_generated
    void _setItsSatelliteSystems(SatelliteSystems* const p_SatelliteSystems);
    
    //## auto_generated
    void _clearItsSatelliteSystems(void);
    
    //## auto_generated
    void __setItsSatelliteSystems_1(SatelliteSystems* const p_SatelliteSystems);
    
    //## auto_generated
    void _setItsSatelliteSystems_1(SatelliteSystems* const p_SatelliteSystems);
    
    //## auto_generated
    void _clearItsSatelliteSystems_1(void);
    
    //## auto_generated
    void __setItsUnderwaterSensors(UnderwaterSensors* const p_UnderwaterSensors);
    
    //## auto_generated
    void _setItsUnderwaterSensors(UnderwaterSensors* const p_UnderwaterSensors);
    
    //## auto_generated
    void _clearItsUnderwaterSensors(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSensors : virtual public AOMInstance {
    DECLARE_META(Sensors, OMAnimatedSensors)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Sensors.h
*********************************************************************/
