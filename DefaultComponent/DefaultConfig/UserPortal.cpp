/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UserPortal
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\UserPortal.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UserPortal.h"
//#[ ignore
#define SMSWTD_UserPortal_UserPortal_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class UserPortal
UserPortal::UserPortal(void) {
    NOTIFY_CONSTRUCTOR(UserPortal, UserPortal(), 0, SMSWTD_UserPortal_UserPortal_SERIALIZE);
}

UserPortal::~UserPortal(void) {
    NOTIFY_DESTRUCTOR(~UserPortal, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(UserPortal, SMSWTD, SMSWTD, false, OMAnimatedUserPortal)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UserPortal.cpp
*********************************************************************/
