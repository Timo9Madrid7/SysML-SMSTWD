/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommunicationInterface
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\CommunicationInterface.h
*********************************************************************/

#ifndef CommunicationInterface_H
#define CommunicationInterface_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## package SMSWTD

//## class CommunicationInterface
class CommunicationInterface {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCommunicationInterface;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CommunicationInterface(void);
    
    //## auto_generated
    ~CommunicationInterface(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCommunicationInterface : virtual public AOMInstance {
    DECLARE_META(CommunicationInterface, OMAnimatedCommunicationInterface)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommunicationInterface.h
*********************************************************************/
