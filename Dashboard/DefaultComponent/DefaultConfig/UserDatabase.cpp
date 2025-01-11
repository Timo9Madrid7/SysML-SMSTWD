/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UserDatabase
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\UserDatabase.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UserDatabase.h"
//#[ ignore
#define SMSWTD_UserDatabase_UserDatabase_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class UserDatabase
UserDatabase::UserDatabase(void) : Database() {
    NOTIFY_CONSTRUCTOR(UserDatabase, UserDatabase(), 0, SMSWTD_UserDatabase_UserDatabase_SERIALIZE);
}

UserDatabase::~UserDatabase(void) {
    NOTIFY_DESTRUCTOR(~UserDatabase, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUserDatabase::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedDatabase::serializeAttributes(aomsAttributes);
}

void OMAnimatedUserDatabase::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedDatabase::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(UserDatabase, SMSWTD, false, Database, OMAnimatedDatabase, OMAnimatedUserDatabase)

OMINIT_SUPERCLASS(Database, OMAnimatedDatabase)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UserDatabase.cpp
*********************************************************************/
