/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: LoginAuthenticator
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\LoginAuthenticator.h
*********************************************************************/

#ifndef LoginAuthenticator_H
#define LoginAuthenticator_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## class LoginAuthenticator
#include "RhpString_password_ProxyFlowPropertyInterface.h"
//## class LoginAuthenticator
#include "RhpString_passwordHash_ProxyFlowPropertyInterface.h"
//## class LoginAuthenticator
#include "RhpString_username_ProxyFlowPropertyInterface.h"
//## link itsMaintainerPortal
class MaintainerPortal;

//## link itsResearcherPortal
class ResearcherPortal;

//#[ ignore
#define OMAnim_SMSWTD_LoginAuthenticator_setPassword_RhpString_ARGS_DECLARATION RhpString p_password;

#define OMAnim_SMSWTD_LoginAuthenticator_setPasswordHash_RhpString_ARGS_DECLARATION RhpString p_passwordHash;

#define OMAnim_SMSWTD_LoginAuthenticator_setUsername_RhpString_ARGS_DECLARATION RhpString p_username;
//#]

//## package SMSWTD

//## class LoginAuthenticator
class LoginAuthenticator : public RhpString_password_ProxyFlowPropertyInterface, public RhpString_username_ProxyFlowPropertyInterface, public RhpString_passwordHash_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package SMSWTD
    class p_ResearcherPortal_password_C : public RhpString_password_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_ResearcherPortal_password_C(void);
        
        //## auto_generated
        virtual ~p_ResearcherPortal_password_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectLoginAuthenticator(LoginAuthenticator* part);
        
        //## auto_generated
        RhpString_password_ProxyFlowPropertyInterface* getItsRhpString_password_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        virtual void setPassword(RhpString p_password);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsRhpString_password_ProxyFlowPropertyInterface(RhpString_password_ProxyFlowPropertyInterface* const p_RhpString_password_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        RhpString_password_ProxyFlowPropertyInterface* itsRhpString_password_ProxyFlowPropertyInterface;		//## link itsRhpString_password_ProxyFlowPropertyInterface
    };
    
    //## package SMSWTD
    class p_ResearcherPortal_username_C : public RhpString_username_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_ResearcherPortal_username_C(void);
        
        //## auto_generated
        virtual ~p_ResearcherPortal_username_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectLoginAuthenticator(LoginAuthenticator* part);
        
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
    class p_UserDatabase_username_C : public RhpString_username_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_UserDatabase_username_C(void);
        
        //## auto_generated
        virtual ~p_UserDatabase_username_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        RhpString_username_ProxyFlowPropertyInterface* getItsRhpString_username_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        RhpString_username_ProxyFlowPropertyInterface* getOutBound(void);
        
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
        void connectLoginAuthenticator(LoginAuthenticator* part);
        
        //## auto_generated
        RhpString_passwordHash_ProxyFlowPropertyInterface* getItsRhpString_passwordHash_ProxyFlowPropertyInterface(void);
        
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
    friend class OMAnimatedLoginAuthenticator;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    LoginAuthenticator(void);
    
    //## auto_generated
    ~LoginAuthenticator(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setPassword(RhpString p_password);
    
    void setPasswordHash(RhpString p_passwordHash);
    
    void setUsername(RhpString p_username);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_ResearcherPortal_password_C* getP_ResearcherPortal_password(void) const;
    
    //## auto_generated
    p_ResearcherPortal_password_C* get_p_ResearcherPortal_password(void) const;
    
    //## auto_generated
    p_ResearcherPortal_username_C* getP_ResearcherPortal_username(void) const;
    
    //## auto_generated
    p_ResearcherPortal_username_C* get_p_ResearcherPortal_username(void) const;
    
    //## auto_generated
    p_UserDatabase_username_C* getP_UserDatabase_username(void) const;
    
    //## auto_generated
    p_UserDatabase_username_C* get_p_UserDatabase_username(void) const;
    
    //## auto_generated
    p_UserDatabase_password_hash_C* getP_UserDatabase_password_hash(void) const;
    
    //## auto_generated
    p_UserDatabase_password_hash_C* get_p_UserDatabase_password_hash(void) const;
    
    //## auto_generated
    const RhpString getPassword(void) const;
    
    //## auto_generated
    const RhpString getPasswordHash(void) const;
    
    //## auto_generated
    const RhpString getUsername(void) const;
    
    //## auto_generated
    const MaintainerPortal* getItsMaintainerPortal(void) const;
    
    //## auto_generated
    void setItsMaintainerPortal(MaintainerPortal* const p_MaintainerPortal);
    
    //## auto_generated
    const ResearcherPortal* getItsResearcherPortal(void) const;
    
    //## auto_generated
    void setItsResearcherPortal(ResearcherPortal* const p_ResearcherPortal);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    RhpString password;		//## attribute password
    
    RhpString passwordHash;		//## attribute passwordHash
    
    RhpString username;		//## attribute username
    
    ////    Relations and components    ////
    
//#[ ignore
    p_ResearcherPortal_password_C p_ResearcherPortal_password;
    
    p_ResearcherPortal_username_C p_ResearcherPortal_username;
    
    p_UserDatabase_username_C p_UserDatabase_username;
    
    p_UserDatabase_password_hash_C p_UserDatabase_password_hash;
//#]

    MaintainerPortal* itsMaintainerPortal;		//## link itsMaintainerPortal
    
    ResearcherPortal* itsResearcherPortal;		//## link itsResearcherPortal
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsMaintainerPortal(MaintainerPortal* const p_MaintainerPortal);
    
    //## auto_generated
    void _setItsMaintainerPortal(MaintainerPortal* const p_MaintainerPortal);
    
    //## auto_generated
    void _clearItsMaintainerPortal(void);
    
    //## auto_generated
    void __setItsResearcherPortal(ResearcherPortal* const p_ResearcherPortal);
    
    //## auto_generated
    void _setItsResearcherPortal(ResearcherPortal* const p_ResearcherPortal);
    
    //## auto_generated
    void _clearItsResearcherPortal(void);
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(SMSWTD_LoginAuthenticator_setPassword_RhpString)

DECLARE_OPERATION_CLASS(SMSWTD_LoginAuthenticator_setPasswordHash_RhpString)

DECLARE_OPERATION_CLASS(SMSWTD_LoginAuthenticator_setUsername_RhpString)

//#[ ignore
class OMAnimatedLoginAuthenticator : virtual public AOMInstance {
    DECLARE_META(LoginAuthenticator, OMAnimatedLoginAuthenticator)
    
    DECLARE_META_OP(SMSWTD_LoginAuthenticator_setPassword_RhpString)
    
    DECLARE_META_OP(SMSWTD_LoginAuthenticator_setPasswordHash_RhpString)
    
    DECLARE_META_OP(SMSWTD_LoginAuthenticator_setUsername_RhpString)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\LoginAuthenticator.h
*********************************************************************/
