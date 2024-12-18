/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Maintainers
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Maintainers.h
*********************************************************************/

#ifndef Maintainers_H
#define Maintainers_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SERVICE_UCS.h"
//## package SMSWTD::SERVICE_UCS

//## actor Maintainers
class Maintainers {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedMaintainers;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Maintainers(void);
    
    //## auto_generated
    ~Maintainers(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMaintainers : virtual public AOMInstance {
    DECLARE_META(Maintainers, OMAnimatedMaintainers)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Maintainers.h
*********************************************************************/
