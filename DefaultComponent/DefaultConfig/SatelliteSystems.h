/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SatelliteSystems
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\SatelliteSystems.h
*********************************************************************/

#ifndef SatelliteSystems_H
#define SatelliteSystems_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD_CONTEXT.h"
//## link itsSensors
class Sensors;

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## class SatelliteSystems
class SatelliteSystems {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSatelliteSystems;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SatelliteSystems(void);
    
    //## auto_generated
    ~SatelliteSystems(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Sensors* getItsSensors(void) const;
    
    //## auto_generated
    void setItsSensors(Sensors* const p_Sensors);
    
    //## auto_generated
    const Sensors* getItsSensors_1(void) const;
    
    //## auto_generated
    void setItsSensors_1(Sensors* const p_Sensors);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Sensors* itsSensors;		//## link itsSensors
    
    Sensors* itsSensors_1;		//## link itsSensors_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSensors(Sensors* const p_Sensors);
    
    //## auto_generated
    void _setItsSensors(Sensors* const p_Sensors);
    
    //## auto_generated
    void _clearItsSensors(void);
    
    //## auto_generated
    void __setItsSensors_1(Sensors* const p_Sensors);
    
    //## auto_generated
    void _setItsSensors_1(Sensors* const p_Sensors);
    
    //## auto_generated
    void _clearItsSensors_1(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSatelliteSystems : virtual public AOMInstance {
    DECLARE_META(SatelliteSystems, OMAnimatedSatelliteSystems)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SatelliteSystems.h
*********************************************************************/
