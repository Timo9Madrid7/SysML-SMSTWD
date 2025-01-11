/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ResearchGateway
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\ResearchGateway.h
*********************************************************************/

#ifndef ResearchGateway_H
#define ResearchGateway_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD_CONTEXT.h"
//## link itsDataStorage
class DataStorage;

//## link itsScientists
class Scientists;

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## class ResearchGateway
class ResearchGateway {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedResearchGateway;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ResearchGateway(void);
    
    //## auto_generated
    ~ResearchGateway(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const DataStorage* getItsDataStorage(void) const;
    
    //## auto_generated
    void setItsDataStorage(DataStorage* const p_DataStorage);
    
    //## auto_generated
    const DataStorage* getItsDataStorage_1(void) const;
    
    //## auto_generated
    void setItsDataStorage_1(DataStorage* const p_DataStorage);
    
    //## auto_generated
    const DataStorage* getItsDataStorage_2(void) const;
    
    //## auto_generated
    void setItsDataStorage_2(DataStorage* const p_DataStorage);
    
    //## auto_generated
    const ResearchGateway* getItsResearchGateway(void) const;
    
    //## auto_generated
    void setItsResearchGateway(ResearchGateway* const p_ResearchGateway);
    
    //## auto_generated
    const ResearchGateway* getItsResearchGateway_1(void) const;
    
    //## auto_generated
    void setItsResearchGateway_1(ResearchGateway* const p_ResearchGateway);
    
    //## auto_generated
    const Scientists* getItsScientists(void) const;
    
    //## auto_generated
    void setItsScientists(Scientists* const p_Scientists);
    
    //## auto_generated
    const Scientists* getItsScientists_1(void) const;
    
    //## auto_generated
    void setItsScientists_1(Scientists* const p_Scientists);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    DataStorage* itsDataStorage;		//## link itsDataStorage
    
    DataStorage* itsDataStorage_1;		//## link itsDataStorage_1
    
    DataStorage* itsDataStorage_2;		//## link itsDataStorage_2
    
    ResearchGateway* itsResearchGateway;		//## link itsResearchGateway
    
    ResearchGateway* itsResearchGateway_1;		//## link itsResearchGateway_1
    
    Scientists* itsScientists;		//## link itsScientists
    
    Scientists* itsScientists_1;		//## link itsScientists_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDataStorage(DataStorage* const p_DataStorage);
    
    //## auto_generated
    void _setItsDataStorage(DataStorage* const p_DataStorage);
    
    //## auto_generated
    void _clearItsDataStorage(void);
    
    //## auto_generated
    void __setItsDataStorage_1(DataStorage* const p_DataStorage);
    
    //## auto_generated
    void _setItsDataStorage_1(DataStorage* const p_DataStorage);
    
    //## auto_generated
    void _clearItsDataStorage_1(void);
    
    //## auto_generated
    void __setItsDataStorage_2(DataStorage* const p_DataStorage);
    
    //## auto_generated
    void _setItsDataStorage_2(DataStorage* const p_DataStorage);
    
    //## auto_generated
    void _clearItsDataStorage_2(void);
    
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
    
    //## auto_generated
    void __setItsScientists(Scientists* const p_Scientists);
    
    //## auto_generated
    void _setItsScientists(Scientists* const p_Scientists);
    
    //## auto_generated
    void _clearItsScientists(void);
    
    //## auto_generated
    void __setItsScientists_1(Scientists* const p_Scientists);
    
    //## auto_generated
    void _setItsScientists_1(Scientists* const p_Scientists);
    
    //## auto_generated
    void _clearItsScientists_1(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedResearchGateway : virtual public AOMInstance {
    DECLARE_META(ResearchGateway, OMAnimatedResearchGateway)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ResearchGateway.h
*********************************************************************/
