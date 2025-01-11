/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ResearcherPortal
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\ResearcherPortal.h
*********************************************************************/

#ifndef ResearcherPortal_H
#define ResearcherPortal_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## class ResearcherPortal
#include "UserPortal.h"
//## package SMSWTD

//## class ResearcherPortal
class ResearcherPortal : public UserPortal {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedResearcherPortal;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ResearcherPortal(void);
    
    //## auto_generated
    ~ResearcherPortal(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedResearcherPortal : public OMAnimatedUserPortal {
    DECLARE_META(ResearcherPortal, OMAnimatedResearcherPortal)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ResearcherPortal.h
*********************************************************************/
