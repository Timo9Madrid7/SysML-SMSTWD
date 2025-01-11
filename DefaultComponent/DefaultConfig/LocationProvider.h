/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: LocationProvider
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\LocationProvider.h
*********************************************************************/

#ifndef LocationProvider_H
#define LocationProvider_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## package SMSWTD

//## class LocationProvider
class LocationProvider {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedLocationProvider;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    LocationProvider(void);
    
    //## auto_generated
    ~LocationProvider(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedLocationProvider : virtual public AOMInstance {
    DECLARE_META(LocationProvider, OMAnimatedLocationProvider)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\LocationProvider.h
*********************************************************************/
