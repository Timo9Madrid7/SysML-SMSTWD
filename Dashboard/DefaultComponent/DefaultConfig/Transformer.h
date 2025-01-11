/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Transformer
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Transformer.h
*********************************************************************/

#ifndef Transformer_H
#define Transformer_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD_CONTEXT.h"
//## link itsAlgorithms
class Algorithms;

//## link itsDataStorage
class DataStorage;

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## class Transformer
class Transformer {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTransformer;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Transformer(void);
    
    //## auto_generated
    ~Transformer(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Algorithms* getItsAlgorithms(void) const;
    
    //## auto_generated
    void setItsAlgorithms(Algorithms* const p_Algorithms);
    
    //## auto_generated
    const DataStorage* getItsDataStorage(void) const;
    
    //## auto_generated
    void setItsDataStorage(DataStorage* const p_DataStorage);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Algorithms* itsAlgorithms;		//## link itsAlgorithms
    
    DataStorage* itsDataStorage;		//## link itsDataStorage
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAlgorithms(Algorithms* const p_Algorithms);
    
    //## auto_generated
    void _setItsAlgorithms(Algorithms* const p_Algorithms);
    
    //## auto_generated
    void _clearItsAlgorithms(void);
    
    //## auto_generated
    void __setItsDataStorage(DataStorage* const p_DataStorage);
    
    //## auto_generated
    void _setItsDataStorage(DataStorage* const p_DataStorage);
    
    //## auto_generated
    void _clearItsDataStorage(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTransformer : virtual public AOMInstance {
    DECLARE_META(Transformer, OMAnimatedTransformer)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Transformer.h
*********************************************************************/
