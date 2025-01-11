/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GovermentAgencies
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\GovermentAgencies.h
*********************************************************************/

#ifndef GovermentAgencies_H
#define GovermentAgencies_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD_CONTEXT.h"
//## link itsCommunicationInfrastructure
class CommunicationInfrastructure;

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## actor GovermentAgencies
class GovermentAgencies {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGovermentAgencies;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    GovermentAgencies(void);
    
    //## auto_generated
    ~GovermentAgencies(void);
    
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
class OMAnimatedGovermentAgencies : virtual public AOMInstance {
    DECLARE_META(GovermentAgencies, OMAnimatedGovermentAgencies)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GovermentAgencies.h
*********************************************************************/
