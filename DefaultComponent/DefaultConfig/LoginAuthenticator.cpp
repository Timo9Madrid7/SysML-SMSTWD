/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: LoginAuthenticator
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\LoginAuthenticator.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "LoginAuthenticator.h"
//## link itsMaintainerPortal
#include "MaintainerPortal.h"
//## link itsResearcherPortal
#include "ResearcherPortal.h"
//#[ ignore
#define SMSWTD_LoginAuthenticator_LoginAuthenticator_SERIALIZE OM_NO_OP

#define OMAnim_SMSWTD_LoginAuthenticator_setPassword_RhpString_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_password)

#define OMAnim_SMSWTD_LoginAuthenticator_setPassword_RhpString_SERIALIZE_RET_VAL

#define OMAnim_SMSWTD_LoginAuthenticator_setPasswordHash_RhpString_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_passwordHash)

#define OMAnim_SMSWTD_LoginAuthenticator_setPasswordHash_RhpString_SERIALIZE_RET_VAL

#define OMAnim_SMSWTD_LoginAuthenticator_setUsername_RhpString_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_username)

#define OMAnim_SMSWTD_LoginAuthenticator_setUsername_RhpString_SERIALIZE_RET_VAL
//#]

//## package SMSWTD

//## class LoginAuthenticator
//#[ ignore
LoginAuthenticator::p_ResearcherPortal_password_C::p_ResearcherPortal_password_C(void) : RhpString_password_ProxyFlowPropertyInterface(), _p_(0), itsRhpString_password_ProxyFlowPropertyInterface(NULL) {
}

LoginAuthenticator::p_ResearcherPortal_password_C::~p_ResearcherPortal_password_C(void) {
    cleanUpRelations();
}

void LoginAuthenticator::p_ResearcherPortal_password_C::connectLoginAuthenticator(LoginAuthenticator* part) {
    setItsRhpString_password_ProxyFlowPropertyInterface(part);
    
}

RhpString_password_ProxyFlowPropertyInterface* LoginAuthenticator::p_ResearcherPortal_password_C::getItsRhpString_password_ProxyFlowPropertyInterface(void) {
    return this;
}

void LoginAuthenticator::p_ResearcherPortal_password_C::setPassword(RhpString p_password) {
    
    if (itsRhpString_password_ProxyFlowPropertyInterface != NULL) {
        itsRhpString_password_ProxyFlowPropertyInterface->setPassword(p_password);
    }
    
}

void LoginAuthenticator::p_ResearcherPortal_password_C::setItsRhpString_password_ProxyFlowPropertyInterface(RhpString_password_ProxyFlowPropertyInterface* const p_RhpString_password_ProxyFlowPropertyInterface) {
    itsRhpString_password_ProxyFlowPropertyInterface = p_RhpString_password_ProxyFlowPropertyInterface;
}

void LoginAuthenticator::p_ResearcherPortal_password_C::cleanUpRelations(void) {
    if(itsRhpString_password_ProxyFlowPropertyInterface != NULL)
        {
            itsRhpString_password_ProxyFlowPropertyInterface = NULL;
        }
}

LoginAuthenticator::p_ResearcherPortal_username_C::p_ResearcherPortal_username_C(void) : RhpString_username_ProxyFlowPropertyInterface(), _p_(0), itsRhpString_username_ProxyFlowPropertyInterface(NULL) {
}

LoginAuthenticator::p_ResearcherPortal_username_C::~p_ResearcherPortal_username_C(void) {
    cleanUpRelations();
}

void LoginAuthenticator::p_ResearcherPortal_username_C::connectLoginAuthenticator(LoginAuthenticator* part) {
    setItsRhpString_username_ProxyFlowPropertyInterface(part);
    
}

RhpString_username_ProxyFlowPropertyInterface* LoginAuthenticator::p_ResearcherPortal_username_C::getItsRhpString_username_ProxyFlowPropertyInterface(void) {
    return this;
}

void LoginAuthenticator::p_ResearcherPortal_username_C::setUsername(RhpString p_username) {
    
    if (itsRhpString_username_ProxyFlowPropertyInterface != NULL) {
        itsRhpString_username_ProxyFlowPropertyInterface->setUsername(p_username);
    }
    
}

void LoginAuthenticator::p_ResearcherPortal_username_C::setItsRhpString_username_ProxyFlowPropertyInterface(RhpString_username_ProxyFlowPropertyInterface* const p_RhpString_username_ProxyFlowPropertyInterface) {
    itsRhpString_username_ProxyFlowPropertyInterface = p_RhpString_username_ProxyFlowPropertyInterface;
}

void LoginAuthenticator::p_ResearcherPortal_username_C::cleanUpRelations(void) {
    if(itsRhpString_username_ProxyFlowPropertyInterface != NULL)
        {
            itsRhpString_username_ProxyFlowPropertyInterface = NULL;
        }
}

LoginAuthenticator::p_UserDatabase_username_C::p_UserDatabase_username_C(void) : RhpString_username_ProxyFlowPropertyInterface(), _p_(0), itsRhpString_username_ProxyFlowPropertyInterface(NULL) {
}

LoginAuthenticator::p_UserDatabase_username_C::~p_UserDatabase_username_C(void) {
    cleanUpRelations();
}

RhpString_username_ProxyFlowPropertyInterface* LoginAuthenticator::p_UserDatabase_username_C::getItsRhpString_username_ProxyFlowPropertyInterface(void) {
    return this;
}

RhpString_username_ProxyFlowPropertyInterface* LoginAuthenticator::p_UserDatabase_username_C::getOutBound(void) {
    return this;
}

void LoginAuthenticator::p_UserDatabase_username_C::setUsername(RhpString p_username) {
    
    if (itsRhpString_username_ProxyFlowPropertyInterface != NULL) {
        itsRhpString_username_ProxyFlowPropertyInterface->setUsername(p_username);
    }
    
}

void LoginAuthenticator::p_UserDatabase_username_C::setItsRhpString_username_ProxyFlowPropertyInterface(RhpString_username_ProxyFlowPropertyInterface* const p_RhpString_username_ProxyFlowPropertyInterface) {
    itsRhpString_username_ProxyFlowPropertyInterface = p_RhpString_username_ProxyFlowPropertyInterface;
}

void LoginAuthenticator::p_UserDatabase_username_C::cleanUpRelations(void) {
    if(itsRhpString_username_ProxyFlowPropertyInterface != NULL)
        {
            itsRhpString_username_ProxyFlowPropertyInterface = NULL;
        }
}

LoginAuthenticator::p_UserDatabase_password_hash_C::p_UserDatabase_password_hash_C(void) : RhpString_passwordHash_ProxyFlowPropertyInterface(), _p_(0), itsRhpString_passwordHash_ProxyFlowPropertyInterface(NULL) {
}

LoginAuthenticator::p_UserDatabase_password_hash_C::~p_UserDatabase_password_hash_C(void) {
    cleanUpRelations();
}

void LoginAuthenticator::p_UserDatabase_password_hash_C::connectLoginAuthenticator(LoginAuthenticator* part) {
    setItsRhpString_passwordHash_ProxyFlowPropertyInterface(part);
    
}

RhpString_passwordHash_ProxyFlowPropertyInterface* LoginAuthenticator::p_UserDatabase_password_hash_C::getItsRhpString_passwordHash_ProxyFlowPropertyInterface(void) {
    return this;
}

void LoginAuthenticator::p_UserDatabase_password_hash_C::setPasswordHash(RhpString p_passwordHash) {
    
    if (itsRhpString_passwordHash_ProxyFlowPropertyInterface != NULL) {
        itsRhpString_passwordHash_ProxyFlowPropertyInterface->setPasswordHash(p_passwordHash);
    }
    
}

void LoginAuthenticator::p_UserDatabase_password_hash_C::setItsRhpString_passwordHash_ProxyFlowPropertyInterface(RhpString_passwordHash_ProxyFlowPropertyInterface* const p_RhpString_passwordHash_ProxyFlowPropertyInterface) {
    itsRhpString_passwordHash_ProxyFlowPropertyInterface = p_RhpString_passwordHash_ProxyFlowPropertyInterface;
}

void LoginAuthenticator::p_UserDatabase_password_hash_C::cleanUpRelations(void) {
    if(itsRhpString_passwordHash_ProxyFlowPropertyInterface != NULL)
        {
            itsRhpString_passwordHash_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

LoginAuthenticator::LoginAuthenticator(void) : RhpString_password_ProxyFlowPropertyInterface(), RhpString_username_ProxyFlowPropertyInterface(), RhpString_passwordHash_ProxyFlowPropertyInterface(), itsMaintainerPortal(NULL), itsResearcherPortal(NULL) {
    NOTIFY_CONSTRUCTOR(LoginAuthenticator, LoginAuthenticator(), 0, SMSWTD_LoginAuthenticator_LoginAuthenticator_SERIALIZE);
    initRelations();
}

LoginAuthenticator::~LoginAuthenticator(void) {
    NOTIFY_DESTRUCTOR(~LoginAuthenticator, true);
    cleanUpRelations();
}

//#[ ignore
void LoginAuthenticator::setPassword(RhpString p_password) {
    if (password != p_password) {
        password = p_password;
        FLOW_DATA_RECEIVE("password", password, x2String);
    }
    
}

void LoginAuthenticator::setPasswordHash(RhpString p_passwordHash) {
    if (passwordHash != p_passwordHash) {
        passwordHash = p_passwordHash;
        FLOW_DATA_RECEIVE("passwordHash", passwordHash, x2String);
    }
    
}

void LoginAuthenticator::setUsername(RhpString p_username) {
    if (username != p_username) {
        username = p_username;
        FLOW_DATA_RECEIVE("username", username, x2String);
        FLOW_DATA_SEND(username, p_UserDatabase_username, setUsername, x2String);
    }
    
}
//#]

LoginAuthenticator::p_ResearcherPortal_password_C* LoginAuthenticator::getP_ResearcherPortal_password(void) const {
    return (LoginAuthenticator::p_ResearcherPortal_password_C*) &p_ResearcherPortal_password;
}

LoginAuthenticator::p_ResearcherPortal_password_C* LoginAuthenticator::get_p_ResearcherPortal_password(void) const {
    return (LoginAuthenticator::p_ResearcherPortal_password_C*) &p_ResearcherPortal_password;
}

LoginAuthenticator::p_ResearcherPortal_username_C* LoginAuthenticator::getP_ResearcherPortal_username(void) const {
    return (LoginAuthenticator::p_ResearcherPortal_username_C*) &p_ResearcherPortal_username;
}

LoginAuthenticator::p_ResearcherPortal_username_C* LoginAuthenticator::get_p_ResearcherPortal_username(void) const {
    return (LoginAuthenticator::p_ResearcherPortal_username_C*) &p_ResearcherPortal_username;
}

LoginAuthenticator::p_UserDatabase_username_C* LoginAuthenticator::getP_UserDatabase_username(void) const {
    return (LoginAuthenticator::p_UserDatabase_username_C*) &p_UserDatabase_username;
}

LoginAuthenticator::p_UserDatabase_username_C* LoginAuthenticator::get_p_UserDatabase_username(void) const {
    return (LoginAuthenticator::p_UserDatabase_username_C*) &p_UserDatabase_username;
}

LoginAuthenticator::p_UserDatabase_password_hash_C* LoginAuthenticator::getP_UserDatabase_password_hash(void) const {
    return (LoginAuthenticator::p_UserDatabase_password_hash_C*) &p_UserDatabase_password_hash;
}

LoginAuthenticator::p_UserDatabase_password_hash_C* LoginAuthenticator::get_p_UserDatabase_password_hash(void) const {
    return (LoginAuthenticator::p_UserDatabase_password_hash_C*) &p_UserDatabase_password_hash;
}

const RhpString LoginAuthenticator::getPassword(void) const {
    return password;
}

const RhpString LoginAuthenticator::getPasswordHash(void) const {
    return passwordHash;
}

const RhpString LoginAuthenticator::getUsername(void) const {
    return username;
}

const MaintainerPortal* LoginAuthenticator::getItsMaintainerPortal(void) const {
    return itsMaintainerPortal;
}

void LoginAuthenticator::setItsMaintainerPortal(MaintainerPortal* const p_MaintainerPortal) {
    if(p_MaintainerPortal != NULL)
        {
            p_MaintainerPortal->_setItsLoginAuthenticator(this);
        }
    _setItsMaintainerPortal(p_MaintainerPortal);
}

const ResearcherPortal* LoginAuthenticator::getItsResearcherPortal(void) const {
    return itsResearcherPortal;
}

void LoginAuthenticator::setItsResearcherPortal(ResearcherPortal* const p_ResearcherPortal) {
    if(p_ResearcherPortal != NULL)
        {
            p_ResearcherPortal->_setItsLoginAuthenticator(this);
        }
    _setItsResearcherPortal(p_ResearcherPortal);
}

void LoginAuthenticator::initRelations(void) {
    if (get_p_ResearcherPortal_password() != NULL) {
        get_p_ResearcherPortal_password()->connectLoginAuthenticator(this);
    }
    if (get_p_ResearcherPortal_username() != NULL) {
        get_p_ResearcherPortal_username()->connectLoginAuthenticator(this);
    }
    if (get_p_UserDatabase_password_hash() != NULL) {
        get_p_UserDatabase_password_hash()->connectLoginAuthenticator(this);
    }
}

void LoginAuthenticator::cleanUpRelations(void) {
    if(itsMaintainerPortal != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsMaintainerPortal");
            const LoginAuthenticator* p_LoginAuthenticator = itsMaintainerPortal->getItsLoginAuthenticator();
            if(p_LoginAuthenticator != NULL)
                {
                    itsMaintainerPortal->__setItsLoginAuthenticator(NULL);
                }
            itsMaintainerPortal = NULL;
        }
    if(itsResearcherPortal != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsResearcherPortal");
            const LoginAuthenticator* p_LoginAuthenticator = itsResearcherPortal->getItsLoginAuthenticator();
            if(p_LoginAuthenticator != NULL)
                {
                    itsResearcherPortal->__setItsLoginAuthenticator(NULL);
                }
            itsResearcherPortal = NULL;
        }
}

void LoginAuthenticator::__setItsMaintainerPortal(MaintainerPortal* const p_MaintainerPortal) {
    itsMaintainerPortal = p_MaintainerPortal;
    if(p_MaintainerPortal != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsMaintainerPortal", p_MaintainerPortal, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsMaintainerPortal");
        }
}

void LoginAuthenticator::_setItsMaintainerPortal(MaintainerPortal* const p_MaintainerPortal) {
    if(itsMaintainerPortal != NULL)
        {
            itsMaintainerPortal->__setItsLoginAuthenticator(NULL);
        }
    __setItsMaintainerPortal(p_MaintainerPortal);
}

void LoginAuthenticator::_clearItsMaintainerPortal(void) {
    NOTIFY_RELATION_CLEARED("itsMaintainerPortal");
    itsMaintainerPortal = NULL;
}

void LoginAuthenticator::__setItsResearcherPortal(ResearcherPortal* const p_ResearcherPortal) {
    itsResearcherPortal = p_ResearcherPortal;
    if(p_ResearcherPortal != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsResearcherPortal", p_ResearcherPortal, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsResearcherPortal");
        }
}

void LoginAuthenticator::_setItsResearcherPortal(ResearcherPortal* const p_ResearcherPortal) {
    if(itsResearcherPortal != NULL)
        {
            itsResearcherPortal->__setItsLoginAuthenticator(NULL);
        }
    __setItsResearcherPortal(p_ResearcherPortal);
}

void LoginAuthenticator::_clearItsResearcherPortal(void) {
    NOTIFY_RELATION_CLEARED("itsResearcherPortal");
    itsResearcherPortal = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLoginAuthenticator::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("username", x2String(myReal->username));
    aomsAttributes->addAttribute("password", x2String(myReal->password));
    aomsAttributes->addAttribute("passwordHash", x2String(myReal->passwordHash));
}

void OMAnimatedLoginAuthenticator::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsMaintainerPortal", false, true);
    if(myReal->itsMaintainerPortal)
        {
            aomsRelations->ADD_ITEM(myReal->itsMaintainerPortal);
        }
    aomsRelations->addRelation("itsResearcherPortal", false, true);
    if(myReal->itsResearcherPortal)
        {
            aomsRelations->ADD_ITEM(myReal->itsResearcherPortal);
        }
}
//#]

IMPLEMENT_META_P(LoginAuthenticator, SMSWTD, SMSWTD, false, OMAnimatedLoginAuthenticator)

IMPLEMENT_META_OP(OMAnimatedLoginAuthenticator, SMSWTD_LoginAuthenticator_setPassword_RhpString, "setPassword", FALSE, "setPassword(RhpString)", 1)

IMPLEMENT_OP_CALL(SMSWTD_LoginAuthenticator_setPassword_RhpString, LoginAuthenticator, setPassword(p_password), NO_OP())

IMPLEMENT_META_OP(OMAnimatedLoginAuthenticator, SMSWTD_LoginAuthenticator_setPasswordHash_RhpString, "setPasswordHash", FALSE, "setPasswordHash(RhpString)", 1)

IMPLEMENT_OP_CALL(SMSWTD_LoginAuthenticator_setPasswordHash_RhpString, LoginAuthenticator, setPasswordHash(p_passwordHash), NO_OP())

IMPLEMENT_META_OP(OMAnimatedLoginAuthenticator, SMSWTD_LoginAuthenticator_setUsername_RhpString, "setUsername", FALSE, "setUsername(RhpString)", 1)

IMPLEMENT_OP_CALL(SMSWTD_LoginAuthenticator_setUsername_RhpString, LoginAuthenticator, setUsername(p_username), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\LoginAuthenticator.cpp
*********************************************************************/
