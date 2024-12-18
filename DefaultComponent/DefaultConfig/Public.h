/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Public
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Public.h
*********************************************************************/

#ifndef Public_H
#define Public_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD_CONTEXT.h"
//## link itsCommunicationInfrastructure
class CommunicationInfrastructure;

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## actor Public
class Public {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPublic;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Public(void);
    
    //## auto_generated
    ~Public(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const CommunicationInfrastructure* getItsCommunicationInfrastructure(void) const;
    
    //## auto_generated
    void setItsCommunicationInfrastructure(CommunicationInfrastructure* const p_CommunicationInfrastructure);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    CommunicationInfrastructure* itsCommunicationInfrastructure;		//## link itsCommunicationInfrastructure
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCommunicationInfrastructure(CommunicationInfrastructure* const p_CommunicationInfrastructure);
    
    //## auto_generated
    void _setItsCommunicationInfrastructure(CommunicationInfrastructure* const p_CommunicationInfrastructure);
    
    //## auto_generated
    void _clearItsCommunicationInfrastructure(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPublic : virtual public AOMInstance {
    DECLARE_META(Public, OMAnimatedPublic)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Public.h
*********************************************************************/
