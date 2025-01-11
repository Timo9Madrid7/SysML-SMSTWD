/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataStorage
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DataStorage.h
*********************************************************************/

#ifndef DataStorage_H
#define DataStorage_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD_CONTEXT.h"
//## link itsResearchGateway
class ResearchGateway;

//## link itsSMSWTD
class SMSWTD;

//## link itsScientists
class Scientists;

//## link itsTransformer
class Transformer;

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## class DataStorage
class DataStorage {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDataStorage;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DataStorage(void);
    
    //## auto_generated
    ~DataStorage(void);
    
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
    const ResearchGateway* getItsResearchGateway(void) const;
    
    //## auto_generated
    void setItsResearchGateway(ResearchGateway* const p_ResearchGateway);
    
    //## auto_generated
    const ResearchGateway* getItsResearchGateway_1(void) const;
    
    //## auto_generated
    void setItsResearchGateway_1(ResearchGateway* const p_ResearchGateway);
    
    //## auto_generated
    const ResearchGateway* getItsResearchGateway_2(void) const;
    
    //## auto_generated
    void setItsResearchGateway_2(ResearchGateway* const p_ResearchGateway);
    
    //## auto_generated
    const SMSWTD* getItsSMSWTD(void) const;
    
    //## auto_generated
    void setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    const SMSWTD* getItsSMSWTD_1(void) const;
    
    //## auto_generated
    void setItsSMSWTD_1(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    const Scientists* getItsScientists(void) const;
    
    //## auto_generated
    void setItsScientists(Scientists* const p_Scientists);
    
    //## auto_generated
    const Transformer* getItsTransformer(void) const;
    
    //## auto_generated
    void setItsTransformer(Transformer* const p_Transformer);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    DataStorage* itsDataStorage;		//## link itsDataStorage
    
    DataStorage* itsDataStorage_1;		//## link itsDataStorage_1
    
    ResearchGateway* itsResearchGateway;		//## link itsResearchGateway
    
    ResearchGateway* itsResearchGateway_1;		//## link itsResearchGateway_1
    
    ResearchGateway* itsResearchGateway_2;		//## link itsResearchGateway_2
    
    SMSWTD* itsSMSWTD;		//## link itsSMSWTD
    
    SMSWTD* itsSMSWTD_1;		//## link itsSMSWTD_1
    
    Scientists* itsScientists;		//## link itsScientists
    
    Transformer* itsTransformer;		//## link itsTransformer
    
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
    void __setItsResearchGateway_2(ResearchGateway* const p_ResearchGateway);
    
    //## auto_generated
    void _setItsResearchGateway_2(ResearchGateway* const p_ResearchGateway);
    
    //## auto_generated
    void _clearItsResearchGateway_2(void);
    
    //## auto_generated
    void __setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _clearItsSMSWTD(void);
    
    //## auto_generated
    void __setItsSMSWTD_1(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _setItsSMSWTD_1(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _clearItsSMSWTD_1(void);
    
    //## auto_generated
    void __setItsScientists(Scientists* const p_Scientists);
    
    //## auto_generated
    void _setItsScientists(Scientists* const p_Scientists);
    
    //## auto_generated
    void _clearItsScientists(void);
    
    //## auto_generated
    void __setItsTransformer(Transformer* const p_Transformer);
    
    //## auto_generated
    void _setItsTransformer(Transformer* const p_Transformer);
    
    //## auto_generated
    void _clearItsTransformer(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDataStorage : virtual public AOMInstance {
    DECLARE_META(DataStorage, OMAnimatedDataStorage)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataStorage.h
*********************************************************************/
