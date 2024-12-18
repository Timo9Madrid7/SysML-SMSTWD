/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: LocationChangeUI
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\LocationChangeUI.h
*********************************************************************/

#ifndef LocationChangeUI_H
#define LocationChangeUI_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## package SMSWTD

//## class LocationChangeUI
class LocationChangeUI {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedLocationChangeUI;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    LocationChangeUI(void);
    
    //## auto_generated
    ~LocationChangeUI(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedLocationChangeUI : virtual public AOMInstance {
    DECLARE_META(LocationChangeUI, OMAnimatedLocationChangeUI)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\LocationChangeUI.h
*********************************************************************/
