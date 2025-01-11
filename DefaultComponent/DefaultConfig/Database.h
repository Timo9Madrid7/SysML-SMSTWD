/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Database
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Database.h
*********************************************************************/

#ifndef Database_H
#define Database_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## package SMSWTD

//## class Database
class Database {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDatabase;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Database(void);
    
    //## auto_generated
    ~Database(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDatabase : virtual public AOMInstance {
    DECLARE_META(Database, OMAnimatedDatabase)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Database.h
*********************************************************************/
