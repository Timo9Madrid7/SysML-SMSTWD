/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Dashboard
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Dashboard.h
*********************************************************************/

#ifndef Dashboard_H
#define Dashboard_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## classInstance itsLocationChangeUI
#include "LocationChangeUI.h"
//## classInstance itsThreatsUI
#include "ThreatsUI.h"
//## classInstance itsWeatherForcastUI
#include "WeatherForcastUI.h"
//## package SMSWTD

//## class Dashboard
class Dashboard : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDashboard;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit Dashboard(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~Dashboard(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const LocationChangeUI* getItsLocationChangeUI(void) const;
    
    //## auto_generated
    const ThreatsUI* getItsThreatsUI(void) const;
    
    //## auto_generated
    const WeatherForcastUI* getItsWeatherForcastUI(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);
    
    ////    Relations and components    ////

private :

    LocationChangeUI itsLocationChangeUI;		//## classInstance itsLocationChangeUI
    
    ThreatsUI itsThreatsUI;		//## classInstance itsThreatsUI
    
    WeatherForcastUI itsWeatherForcastUI;		//## classInstance itsWeatherForcastUI
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* const theActiveContext, bool activeInstance);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDashboard : virtual public AOMInstance {
    DECLARE_META(Dashboard, OMAnimatedDashboard)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Dashboard.h
*********************************************************************/
