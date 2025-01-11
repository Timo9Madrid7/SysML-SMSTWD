/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UserPortal
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\UserPortal.h
*********************************************************************/

#ifndef UserPortal_H
#define UserPortal_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## package SMSWTD

//## class UserPortal
class UserPortal {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUserPortal;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UserPortal(void);
    
    //## auto_generated
    ~UserPortal(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUserPortal : virtual public AOMInstance {
    DECLARE_META(UserPortal, OMAnimatedUserPortal)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UserPortal.h
*********************************************************************/
