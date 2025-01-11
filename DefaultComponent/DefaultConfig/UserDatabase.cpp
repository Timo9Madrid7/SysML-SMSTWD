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

#define OMAnim_SMSWTD_UserDatabase_setPasswordHash_RhpString_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_passwordHash)

#define OMAnim_SMSWTD_UserDatabase_setPasswordHash_RhpString_SERIALIZE_RET_VAL

#define OMAnim_SMSWTD_UserDatabase_setUsername_RhpString_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_username)

#define OMAnim_SMSWTD_UserDatabase_setUsername_RhpString_SERIALIZE_RET_VAL
//#]

//## package SMSWTD

//## class UserDatabase
//#[ ignore
UserDatabase::p_UserDatabase_username_C::p_UserDatabase_username_C(void) : RhpString_username_ProxyFlowPropertyInterface(), _p_(0), itsRhpString_username_ProxyFlowPropertyInterface(NULL) {
}

UserDatabase::p_UserDatabase_username_C::~p_UserDatabase_username_C(void) {
    cleanUpRelations();
}

void UserDatabase::p_UserDatabase_username_C::connectUserDatabase(UserDatabase* part) {
    setItsRhpString_username_ProxyFlowPropertyInterface(part);
    
}

RhpString_username_ProxyFlowPropertyInterface* UserDatabase::p_UserDatabase_username_C::getItsRhpString_username_ProxyFlowPropertyInterface(void) {
    return this;
}

void UserDatabase::p_UserDatabase_username_C::setUsername(RhpString p_username) {
    
    if (itsRhpString_username_ProxyFlowPropertyInterface != NULL) {
        itsRhpString_username_ProxyFlowPropertyInterface->setUsername(p_username);
    }
    
}

void UserDatabase::p_UserDatabase_username_C::setItsRhpString_username_ProxyFlowPropertyInterface(RhpString_username_ProxyFlowPropertyInterface* const p_RhpString_username_ProxyFlowPropertyInterface) {
    itsRhpString_username_ProxyFlowPropertyInterface = p_RhpString_username_ProxyFlowPropertyInterface;
}

void UserDatabase::p_UserDatabase_username_C::cleanUpRelations(void) {
    if(itsRhpString_username_ProxyFlowPropertyInterface != NULL)
        {
            itsRhpString_username_ProxyFlowPropertyInterface = NULL;
        }
}

UserDatabase::p_UserDatabase_password_hash_C::p_UserDatabase_password_hash_C(void) : RhpString_passwordHash_ProxyFlowPropertyInterface(), _p_(0), itsRhpString_passwordHash_ProxyFlowPropertyInterface(NULL) {
}

UserDatabase::p_UserDatabase_password_hash_C::~p_UserDatabase_password_hash_C(void) {
    cleanUpRelations();
}

RhpString_passwordHash_ProxyFlowPropertyInterface* UserDatabase::p_UserDatabase_password_hash_C::getItsRhpString_passwordHash_ProxyFlowPropertyInterface(void) {
    return this;
}

RhpString_passwordHash_ProxyFlowPropertyInterface* UserDatabase::p_UserDatabase_password_hash_C::getOutBound(void) {
    return this;
}

void UserDatabase::p_UserDatabase_password_hash_C::setPasswordHash(RhpString p_passwordHash) {
    
    if (itsRhpString_passwordHash_ProxyFlowPropertyInterface != NULL) {
        itsRhpString_passwordHash_ProxyFlowPropertyInterface->setPasswordHash(p_passwordHash);
    }
    
}

void UserDatabase::p_UserDatabase_password_hash_C::setItsRhpString_passwordHash_ProxyFlowPropertyInterface(RhpString_passwordHash_ProxyFlowPropertyInterface* const p_RhpString_passwordHash_ProxyFlowPropertyInterface) {
    itsRhpString_passwordHash_ProxyFlowPropertyInterface = p_RhpString_passwordHash_ProxyFlowPropertyInterface;
}

void UserDatabase::p_UserDatabase_password_hash_C::cleanUpRelations(void) {
    if(itsRhpString_passwordHash_ProxyFlowPropertyInterface != NULL)
        {
            itsRhpString_passwordHash_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

UserDatabase::UserDatabase(void) : Database(), RhpString_username_ProxyFlowPropertyInterface() {
    NOTIFY_CONSTRUCTOR(UserDatabase, UserDatabase(), 0, SMSWTD_UserDatabase_UserDatabase_SERIALIZE);
    initRelations();
}

UserDatabase::~UserDatabase(void) {
    NOTIFY_DESTRUCTOR(~UserDatabase, false);
}

//#[ ignore
void UserDatabase::setPasswordHash(RhpString p_passwordHash) {
    if (passwordHash != p_passwordHash)  {
        passwordHash = p_passwordHash;
        FLOW_DATA_SEND(passwordHash, p_UserDatabase_password_hash, setPasswordHash, x2String);
    }
}

void UserDatabase::setUsername(RhpString p_username) {
    if (username != p_username) {
        username = p_username;
        FLOW_DATA_RECEIVE("username", username, x2String);
    }
    
}
//#]

UserDatabase::p_UserDatabase_username_C* UserDatabase::getP_UserDatabase_username(void) const {
    return (UserDatabase::p_UserDatabase_username_C*) &p_UserDatabase_username;
}

UserDatabase::p_UserDatabase_username_C* UserDatabase::get_p_UserDatabase_username(void) const {
    return (UserDatabase::p_UserDatabase_username_C*) &p_UserDatabase_username;
}

UserDatabase::p_UserDatabase_password_hash_C* UserDatabase::getP_UserDatabase_password_hash(void) const {
    return (UserDatabase::p_UserDatabase_password_hash_C*) &p_UserDatabase_password_hash;
}

UserDatabase::p_UserDatabase_password_hash_C* UserDatabase::get_p_UserDatabase_password_hash(void) const {
    return (UserDatabase::p_UserDatabase_password_hash_C*) &p_UserDatabase_password_hash;
}

const RhpString UserDatabase::getPasswordHash(void) const {
    return passwordHash;
}

const RhpString UserDatabase::getUsername(void) const {
    return username;
}

void UserDatabase::initRelations(void) {
    if (get_p_UserDatabase_username() != NULL) {
        get_p_UserDatabase_username()->connectUserDatabase(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUserDatabase::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("username", x2String(myReal->username));
    aomsAttributes->addAttribute("passwordHash", x2String(myReal->passwordHash));
    OMAnimatedDatabase::serializeAttributes(aomsAttributes);
}

void OMAnimatedUserDatabase::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedDatabase::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(UserDatabase, SMSWTD, false, Database, OMAnimatedDatabase, OMAnimatedUserDatabase)

OMINIT_SUPERCLASS(Database, OMAnimatedDatabase)

OMREGISTER_CLASS

IMPLEMENT_META_OP(OMAnimatedUserDatabase, SMSWTD_UserDatabase_setPasswordHash_RhpString, "setPasswordHash", FALSE, "setPasswordHash(RhpString)", 1)

IMPLEMENT_OP_CALL(SMSWTD_UserDatabase_setPasswordHash_RhpString, UserDatabase, setPasswordHash(p_passwordHash), NO_OP())

IMPLEMENT_META_OP(OMAnimatedUserDatabase, SMSWTD_UserDatabase_setUsername_RhpString, "setUsername", FALSE, "setUsername(RhpString)", 1)

IMPLEMENT_OP_CALL(SMSWTD_UserDatabase_setUsername_RhpString, UserDatabase, setUsername(p_username), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UserDatabase.cpp
*********************************************************************/
