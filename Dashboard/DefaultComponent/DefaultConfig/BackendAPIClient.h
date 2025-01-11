/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: BackendAPIClient
//!	Generated Date	: Sat, 11, Jan 2025  
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
//## package SMSWTD

//## class BackendAPIClient
class BackendAPIClient {
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
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedBackendAPIClient : virtual public AOMInstance {
    DECLARE_META(BackendAPIClient, OMAnimatedBackendAPIClient)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\BackendAPIClient.h
*********************************************************************/
