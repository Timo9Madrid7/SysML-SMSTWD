/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Scientists
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Scientists.h
*********************************************************************/

#ifndef Scientists_H
#define Scientists_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD_CONTEXT.h"
//## link itsDataStorage
class DataStorage;

//## link itsResearchGateway
class ResearchGateway;

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## actor Scientists
class Scientists {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedScientists;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Scientists(void);
    
    //## auto_generated
    ~Scientists(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const DataStorage* getItsDataStorage(void) const;
    
    //## auto_generated
    void setItsDataStorage(DataStorage* const p_DataStorage);
    
    //## auto_generated
    const ResearchGateway* getItsResearchGateway(void) const;
    
    //## auto_generated
    void setItsResearchGateway(ResearchGateway* const p_ResearchGateway);
    
    //## auto_generated
    const ResearchGateway* getItsResearchGateway_1(void) const;
    
    //## auto_generated
    void setItsResearchGateway_1(ResearchGateway* const p_ResearchGateway);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    DataStorage* itsDataStorage;		//## link itsDataStorage
    
    ResearchGateway* itsResearchGateway;		//## link itsResearchGateway
    
    ResearchGateway* itsResearchGateway_1;		//## link itsResearchGateway_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDataStorage(DataStorage* const p_DataStorage);
    
    //## auto_generated
    void _setItsDataStorage(DataStorage* const p_DataStorage);
    
    //## auto_generated
    void _clearItsDataStorage(void);
    
    //## auto_generated
    void __setItsResearchGateway(ResearchGateway* const p_ResearchGateway);
    
    //## auto_generated
    void _setItsResearchGateway(ResearchGateway* const p_ResearchGateway);
    
    //## auto_generated
    void _clearItsResearchGateway(void);
    
    //## auto_generated
    void __setItsResearchGateway_1(ResearchGateway* const p_ResearchGateway);
    
    //## auto_generated
    void _setItsResearchGateway_1(ResearchGateway* const p_ResearchGateway);
    
    //## auto_generated
    void _clearItsResearchGateway_1(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedScientists : virtual public AOMInstance {
    DECLARE_META(Scientists, OMAnimatedScientists)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Scientists.h
*********************************************************************/
