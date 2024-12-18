/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: BackendAPIClient
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\BackendAPIClient.h
*********************************************************************/

#ifndef BackendAPIClient_H
#define BackendAPIClient_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## classInstance itsLocationProvider
#include "LocationProvider.h"
//## package SMSWTD

//## class BackendAPIClient
class BackendAPIClient {
#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedBackendAPIClient;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    BackendAPIClient(void);
    
    //## auto_generated
    ~BackendAPIClient(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const LocationProvider* getItsLocationProvider(void) const;
    
    ////    Relations and components    ////

private :

    LocationProvider itsLocationProvider;		//## classInstance itsLocationProvider
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedBackendAPIClient : virtual public AOMInstance {
    DECLARE_META(BackendAPIClient, OMAnimatedBackendAPIClient)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\BackendAPIClient.h
*********************************************************************/
