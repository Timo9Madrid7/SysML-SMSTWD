/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ThreatsUI
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\ThreatsUI.h
*********************************************************************/

#ifndef ThreatsUI_H
#define ThreatsUI_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## package SMSWTD

//## class ThreatsUI
class ThreatsUI {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedThreatsUI;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ThreatsUI(void);
    
    //## auto_generated
    ~ThreatsUI(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedThreatsUI : virtual public AOMInstance {
    DECLARE_META(ThreatsUI, OMAnimatedThreatsUI)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ThreatsUI.h
*********************************************************************/
