/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommunicationInfrastructure
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\CommunicationInfrastructure.h
*********************************************************************/

#ifndef CommunicationInfrastructure_H
#define CommunicationInfrastructure_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD_CONTEXT.h"
//## link itsGovermentAgencies
class GovermentAgencies;

//## link itsPublic
class Public;

//## link itsSMSWTD
class SMSWTD;

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## class CommunicationInfrastructure
class CommunicationInfrastructure {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCommunicationInfrastructure;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CommunicationInfrastructure(void);
    
    //## auto_generated
    ~CommunicationInfrastructure(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const GovermentAgencies* getItsGovermentAgencies(void) const;
    
    //## auto_generated
    void setItsGovermentAgencies(GovermentAgencies* const p_GovermentAgencies);
    
    //## auto_generated
    const Public* getItsPublic(void) const;
    
    //## auto_generated
    void setItsPublic(Public* const p_Public);
    
    //## auto_generated
    const SMSWTD* getItsSMSWTD(void) const;
    
    //## auto_generated
    void setItsSMSWTD(SMSWTD* const p_SMSWTD);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    GovermentAgencies* itsGovermentAgencies;		//## link itsGovermentAgencies
    
    Public* itsPublic;		//## link itsPublic
    
    SMSWTD* itsSMSWTD;		//## link itsSMSWTD
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsGovermentAgencies(GovermentAgencies* const p_GovermentAgencies);
    
    //## auto_generated
    void _setItsGovermentAgencies(GovermentAgencies* const p_GovermentAgencies);
    
    //## auto_generated
    void _clearItsGovermentAgencies(void);
    
    //## auto_generated
    void __setItsPublic(Public* const p_Public);
    
    //## auto_generated
    void _setItsPublic(Public* const p_Public);
    
    //## auto_generated
    void _clearItsPublic(void);
    
    //## auto_generated
    void __setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _clearItsSMSWTD(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCommunicationInfrastructure : virtual public AOMInstance {
    DECLARE_META(CommunicationInfrastructure, OMAnimatedCommunicationInfrastructure)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommunicationInfrastructure.h
*********************************************************************/
