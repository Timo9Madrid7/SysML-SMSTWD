/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AircraftSensors
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\AircraftSensors.h
*********************************************************************/

#ifndef AircraftSensors_H
#define AircraftSensors_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD_CONTEXT.h"
//## link itsSensors
class Sensors;

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## class AircraftSensors
class AircraftSensors {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAircraftSensors;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AircraftSensors(void);
    
    //## auto_generated
    ~AircraftSensors(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Sensors* getItsSensors(void) const;
    
    //## auto_generated
    void setItsSensors(Sensors* const p_Sensors);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Sensors* itsSensors;		//## link itsSensors
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSensors(Sensors* const p_Sensors);
    
    //## auto_generated
    void _setItsSensors(Sensors* const p_Sensors);
    
    //## auto_generated
    void _clearItsSensors(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAircraftSensors : virtual public AOMInstance {
    DECLARE_META(AircraftSensors, OMAnimatedAircraftSensors)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AircraftSensors.h
*********************************************************************/
