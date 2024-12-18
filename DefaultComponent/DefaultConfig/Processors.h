/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Processors
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Processors.h
*********************************************************************/

#ifndef Processors_H
#define Processors_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD_CONTEXT.h"
//## link itsAlgorithms
class Algorithms;

//## link itsSMSWTD
class SMSWTD;

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## class Processors
class Processors {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedProcessors;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Processors(void);
    
    //## auto_generated
    ~Processors(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Algorithms* getItsAlgorithms(void) const;
    
    //## auto_generated
    void setItsAlgorithms(Algorithms* const p_Algorithms);
    
    //## auto_generated
    const SMSWTD* getItsSMSWTD(void) const;
    
    //## auto_generated
    void setItsSMSWTD(SMSWTD* const p_SMSWTD);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Algorithms* itsAlgorithms;		//## link itsAlgorithms
    
    SMSWTD* itsSMSWTD;		//## link itsSMSWTD
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAlgorithms(Algorithms* const p_Algorithms);
    
    //## auto_generated
    void _setItsAlgorithms(Algorithms* const p_Algorithms);
    
    //## auto_generated
    void _clearItsAlgorithms(void);
    
    //## auto_generated
    void __setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _clearItsSMSWTD(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedProcessors : virtual public AOMInstance {
    DECLARE_META(Processors, OMAnimatedProcessors)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Processors.h
*********************************************************************/
