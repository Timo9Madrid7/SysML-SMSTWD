/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: LocationProvider
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\LocationProvider.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "LocationProvider.h"
//#[ ignore
#define SMSWTD_LocationProvider_LocationProvider_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class LocationProvider
LocationProvider::LocationProvider(void) {
    NOTIFY_CONSTRUCTOR(LocationProvider, LocationProvider(), 0, SMSWTD_LocationProvider_LocationProvider_SERIALIZE);
}

LocationProvider::~LocationProvider(void) {
    NOTIFY_DESTRUCTOR(~LocationProvider, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(LocationProvider, SMSWTD, SMSWTD, false, OMAnimatedLocationProvider)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\LocationProvider.cpp
*********************************************************************/
