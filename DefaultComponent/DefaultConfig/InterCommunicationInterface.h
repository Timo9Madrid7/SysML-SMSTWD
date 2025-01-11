/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: InterCommunicationInterface
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\InterCommunicationInterface.h
*********************************************************************/

#ifndef InterCommunicationInterface_H
#define InterCommunicationInterface_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## class InterCommunicationInterface
#include "CommunicationInterface.h"
//## package SMSWTD

//## class InterCommunicationInterface
class InterCommunicationInterface : public CommunicationInterface {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedInterCommunicationInterface;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    InterCommunicationInterface(void);
    
    //## auto_generated
    ~InterCommunicationInterface(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedInterCommunicationInterface : public OMAnimatedCommunicationInterface {
    DECLARE_META(InterCommunicationInterface, OMAnimatedInterCommunicationInterface)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\InterCommunicationInterface.h
*********************************************************************/
