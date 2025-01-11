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
//## class UserDatabase
#include "RhpString_username_ProxyFlowPropertyInterface.h"
//## class p_UserDatabase_password_hash_C
#include "RhpString_passwordHash_ProxyFlowPropertyInterface.h"
//#[ ignore
#define OMAnim_SMSWTD_UserDatabase_setPasswordHash_RhpString_ARGS_DECLARATION RhpString p_passwordHash;

#define OMAnim_SMSWTD_UserDatabase_setUsername_RhpString_ARGS_DECLARATION RhpString p_username;
//#]

//## package SMSWTD

//## class UserDatabase
class UserDatabase : public Database, public RhpString_username_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package SMSWTD
    class p_UserDatabase_username_C : public RhpString_username_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_UserDatabase_username_C(void);
        
        //## auto_generated
        virtual ~p_UserDatabase_username_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectUserDatabase(UserDatabase* part);
        
        //## auto_generated
        RhpString_username_ProxyFlowPropertyInterface* getItsRhpString_username_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        virtual void setUsername(RhpString p_username);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsRhpString_username_ProxyFlowPropertyInterface(RhpString_username_ProxyFlowPropertyInterface* const p_RhpString_username_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        RhpString_username_ProxyFlowPropertyInterface* itsRhpString_username_ProxyFlowPropertyInterface;		//## link itsRhpString_username_ProxyFlowPropertyInterface
    };
    
    //## package SMSWTD
    class p_UserDatabase_password_hash_C : public RhpString_passwordHash_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_UserDatabase_password_hash_C(void);
        
        //## auto_generated
        virtual ~p_UserDatabase_password_hash_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        RhpString_passwordHash_ProxyFlowPropertyInterface* getItsRhpString_passwordHash_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        RhpString_passwordHash_ProxyFlowPropertyInterface* getOutBound(void);
        
        //## auto_generated
        virtual void setPasswordHash(RhpString p_passwordHash);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsRhpString_passwordHash_ProxyFlowPropertyInterface(RhpString_passwordHash_ProxyFlowPropertyInterface* const p_RhpString_passwordHash_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        RhpString_passwordHash_ProxyFlowPropertyInterface* itsRhpString_passwordHash_ProxyFlowPropertyInterface;		//## link itsRhpString_passwordHash_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedUserDatabase;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UserDatabase(void);
    
    //## auto_generated
    ~UserDatabase(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setPasswordHash(RhpString p_passwordHash);
    
    void setUsername(RhpString p_username);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_UserDatabase_username_C* getP_UserDatabase_username(void) const;
    
    //## auto_generated
    p_UserDatabase_username_C* get_p_UserDatabase_username(void) const;
    
    //## auto_generated
    p_UserDatabase_password_hash_C* getP_UserDatabase_password_hash(void) const;
    
    //## auto_generated
    p_UserDatabase_password_hash_C* get_p_UserDatabase_password_hash(void) const;
    
    //## auto_generated
    const RhpString getPasswordHash(void) const;
    
    //## auto_generated
    const RhpString getUsername(void) const;

protected :

    //## auto_generated
    void initRelations(void);
    
    ////    Attributes    ////

private :

    RhpString passwordHash;		//## attribute passwordHash
    
    RhpString username;		//## attribute username
    
    ////    Relations and components    ////
    
//#[ ignore
    p_UserDatabase_username_C p_UserDatabase_username;
    
    p_UserDatabase_password_hash_C p_UserDatabase_password_hash;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(SMSWTD_UserDatabase_setPasswordHash_RhpString)

DECLARE_OPERATION_CLASS(SMSWTD_UserDatabase_setUsername_RhpString)

//#[ ignore
class OMAnimatedUserDatabase : public OMAnimatedDatabase {
    DECLARE_META(UserDatabase, OMAnimatedUserDatabase)
    
    DECLARE_META_OP(SMSWTD_UserDatabase_setPasswordHash_RhpString)
    
    DECLARE_META_OP(SMSWTD_UserDatabase_setUsername_RhpString)
    
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
