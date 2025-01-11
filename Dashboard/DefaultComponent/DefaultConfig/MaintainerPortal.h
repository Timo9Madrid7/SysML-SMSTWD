/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MaintainerPortal
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\MaintainerPortal.h
*********************************************************************/

#ifndef MaintainerPortal_H
#define MaintainerPortal_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## class MaintainerPortal
#include "UserPortal.h"
//## package SMSWTD

//## class MaintainerPortal
class MaintainerPortal : public UserPortal {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedMaintainerPortal;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    MaintainerPortal(void);
    
    //## auto_generated
    ~MaintainerPortal(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMaintainerPortal : public OMAnimatedUserPortal {
    DECLARE_META(MaintainerPortal, OMAnimatedMaintainerPortal)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MaintainerPortal.h
*********************************************************************/
