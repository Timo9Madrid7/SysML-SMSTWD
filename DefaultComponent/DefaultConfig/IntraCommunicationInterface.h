/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: IntraCommunicationInterface
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\IntraCommunicationInterface.h
*********************************************************************/

#ifndef IntraCommunicationInterface_H
#define IntraCommunicationInterface_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## class IntraCommunicationInterface
#include "CommunicationInterface.h"
//## link itsMaintainerPortal
class MaintainerPortal;

//## package SMSWTD

//## class IntraCommunicationInterface
class IntraCommunicationInterface : public CommunicationInterface {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedIntraCommunicationInterface;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    IntraCommunicationInterface(void);
    
    //## auto_generated
    ~IntraCommunicationInterface(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const MaintainerPortal* getItsMaintainerPortal(void) const;
    
    //## auto_generated
    void setItsMaintainerPortal(MaintainerPortal* const p_MaintainerPortal);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    MaintainerPortal* itsMaintainerPortal;		//## link itsMaintainerPortal
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedIntraCommunicationInterface : public OMAnimatedCommunicationInterface {
    DECLARE_META(IntraCommunicationInterface, OMAnimatedIntraCommunicationInterface)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\IntraCommunicationInterface.h
*********************************************************************/
