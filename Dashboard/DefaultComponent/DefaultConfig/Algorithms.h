/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Algorithms
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Algorithms.h
*********************************************************************/

#ifndef Algorithms_H
#define Algorithms_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD_CONTEXT.h"
//## link itsProcessors
class Processors;

//## link itsTransformer
class Transformer;

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## class Algorithms
class Algorithms {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAlgorithms;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Algorithms(void);
    
    //## auto_generated
    ~Algorithms(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Processors* getItsProcessors(void) const;
    
    //## auto_generated
    void setItsProcessors(Processors* const p_Processors);
    
    //## auto_generated
    const Transformer* getItsTransformer(void) const;
    
    //## auto_generated
    void setItsTransformer(Transformer* const p_Transformer);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Processors* itsProcessors;		//## link itsProcessors
    
    Transformer* itsTransformer;		//## link itsTransformer
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsProcessors(Processors* const p_Processors);
    
    //## auto_generated
    void _setItsProcessors(Processors* const p_Processors);
    
    //## auto_generated
    void _clearItsProcessors(void);
    
    //## auto_generated
    void __setItsTransformer(Transformer* const p_Transformer);
    
    //## auto_generated
    void _setItsTransformer(Transformer* const p_Transformer);
    
    //## auto_generated
    void _clearItsTransformer(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAlgorithms : virtual public AOMInstance {
    DECLARE_META(Algorithms, OMAnimatedAlgorithms)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Algorithms.h
*********************************************************************/
