/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WeatherForcastUI
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\WeatherForcastUI.h
*********************************************************************/

#ifndef WeatherForcastUI_H
#define WeatherForcastUI_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## package SMSWTD

//## class WeatherForcastUI
class WeatherForcastUI {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedWeatherForcastUI;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    WeatherForcastUI(void);
    
    //## auto_generated
    ~WeatherForcastUI(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWeatherForcastUI : virtual public AOMInstance {
    DECLARE_META(WeatherForcastUI, OMAnimatedWeatherForcastUI)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WeatherForcastUI.h
*********************************************************************/
