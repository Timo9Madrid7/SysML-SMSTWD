/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UserDatabase
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\UserDatabase.h
*********************************************************************/

#ifndef UserDatabase_H
#define UserDatabase_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## class UserDatabase
#include "Database.h"
//## package SMSWTD

//## class UserDatabase
class UserDatabase : public Database {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUserDatabase;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UserDatabase(void);
    
    //## auto_generated
    ~UserDatabase(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUserDatabase : public OMAnimatedDatabase {
    DECLARE_META(UserDatabase, OMAnimatedUserDatabase)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UserDatabase.h
*********************************************************************/
