/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ResearcherPortal
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\ResearcherPortal.h
*********************************************************************/

#ifndef ResearcherPortal_H
#define ResearcherPortal_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## class ResearcherPortal
#include "RhpString_satelliteImage_ProxyFlowPropertyInterface.h"
//## class ResearcherPortal
#include "UserPortal.h"
//## class p_ResearcherPortal_username_C
#include "RhpString_username_ProxyFlowPropertyInterface.h"
//## class p_ResearcherPortal_password_C
#include "RhpString_password_ProxyFlowPropertyInterface.h"
//## link itsLoginAuthenticator
class LoginAuthenticator;

//#[ ignore
#define OMAnim_SMSWTD_ResearcherPortal_setPassword_RhpString_ARGS_DECLARATION RhpString p_password;

#define OMAnim_SMSWTD_ResearcherPortal_setUsername_RhpString_ARGS_DECLARATION RhpString p_username;
//#]

//## package SMSWTD

//## class ResearcherPortal
class ResearcherPortal : public UserPortal, public RhpString_satelliteImage_ProxyFlowPropertyInterface {
public :

//#[ ignore
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
    class p_ResearcherPortal_password_C : public RhpString_password_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_ResearcherPortal_password_C(void);
        
        //## auto_generated
        virtual ~p_ResearcherPortal_password_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        RhpString_password_ProxyFlowPropertyInterface* getItsRhpString_password_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        RhpString_password_ProxyFlowPropertyInterface* getOutBound(void);
        
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
    class p_ResearcherPortal_satellite_image_C : public RhpString_satelliteImage_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_ResearcherPortal_satellite_image_C(void);
        
        //## auto_generated
        virtual ~p_ResearcherPortal_satellite_image_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectResearcherPortal(ResearcherPortal* part);
        
        //## auto_generated
        RhpString_satelliteImage_ProxyFlowPropertyInterface* getItsRhpString_satelliteImage_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        virtual void setSatelliteImage(RhpString p_satelliteImage);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsRhpString_satelliteImage_ProxyFlowPropertyInterface(RhpString_satelliteImage_ProxyFlowPropertyInterface* const p_RhpString_satelliteImage_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        RhpString_satelliteImage_ProxyFlowPropertyInterface* itsRhpString_satelliteImage_ProxyFlowPropertyInterface;		//## link itsRhpString_satelliteImage_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedResearcherPortal;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ResearcherPortal(void);
    
    //## auto_generated
    ~ResearcherPortal(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setPassword(RhpString p_password);
    
    void setSatelliteImage(RhpString p_satelliteImage);
    
    void setUsername(RhpString p_username);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_ResearcherPortal_username_C* getP_ResearcherPortal_username(void) const;
    
    //## auto_generated
    p_ResearcherPortal_username_C* get_p_ResearcherPortal_username(void) const;
    
    //## auto_generated
    p_ResearcherPortal_password_C* getP_ResearcherPortal_password(void) const;
    
    //## auto_generated
    p_ResearcherPortal_password_C* get_p_ResearcherPortal_password(void) const;
    
    //## auto_generated
    p_ResearcherPortal_satellite_image_C* getP_ResearcherPortal_satellite_image(void) const;
    
    //## auto_generated
    p_ResearcherPortal_satellite_image_C* get_p_ResearcherPortal_satellite_image(void) const;
    
    //## auto_generated
    const RhpString getPassword(void) const;
    
    //## auto_generated
    const RhpString getSatelliteImage(void) const;
    
    //## auto_generated
    const RhpString getUsername(void) const;
    
    //## auto_generated
    const LoginAuthenticator* getItsLoginAuthenticator(void) const;
    
    //## auto_generated
    void setItsLoginAuthenticator(LoginAuthenticator* const p_LoginAuthenticator);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    RhpString password;		//## attribute password
    
    RhpString satelliteImage;		//## attribute satelliteImage
    
    RhpString username;		//## attribute username
    
    ////    Relations and components    ////
    
//#[ ignore
    p_ResearcherPortal_username_C p_ResearcherPortal_username;
    
    p_ResearcherPortal_password_C p_ResearcherPortal_password;
    
    p_ResearcherPortal_satellite_image_C p_ResearcherPortal_satellite_image;
//#]

    LoginAuthenticator* itsLoginAuthenticator;		//## link itsLoginAuthenticator
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsLoginAuthenticator(LoginAuthenticator* const p_LoginAuthenticator);
    
    //## auto_generated
    void _setItsLoginAuthenticator(LoginAuthenticator* const p_LoginAuthenticator);
    
    //## auto_generated
    void _clearItsLoginAuthenticator(void);
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(SMSWTD_ResearcherPortal_setPassword_RhpString)

DECLARE_OPERATION_CLASS(SMSWTD_ResearcherPortal_setUsername_RhpString)

//#[ ignore
class OMAnimatedResearcherPortal : public OMAnimatedUserPortal {
    DECLARE_META(ResearcherPortal, OMAnimatedResearcherPortal)
    
    DECLARE_META_OP(SMSWTD_ResearcherPortal_setPassword_RhpString)
    
    DECLARE_META_OP(SMSWTD_ResearcherPortal_setUsername_RhpString)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ResearcherPortal.h
*********************************************************************/
