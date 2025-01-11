/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Database
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Database.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Database.h"
//#[ ignore
#define SMSWTD_Database_Database_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class Database
Database::Database(void) {
    NOTIFY_CONSTRUCTOR(Database, Database(), 0, SMSWTD_Database_Database_SERIALIZE);
}

Database::~Database(void) {
    NOTIFY_DESTRUCTOR(~Database, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Database, SMSWTD, SMSWTD, false, OMAnimatedDatabase)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Database.cpp
*********************************************************************/
