/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MaintainerPortal
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\MaintainerPortal.h
*********************************************************************/

#ifndef MaintainerPortal_H
#define MaintainerPortal_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## class MaintainerPortal
#include "UserPortal.h"
//## link itsLoginAuthenticator
class LoginAuthenticator;

//## package SMSWTD

//## class MaintainerPortal
class MaintainerPortal : public UserPortal {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedMaintainerPortal;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    MaintainerPortal(void);
    
    //## auto_generated
    ~MaintainerPortal(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const LoginAuthenticator* getItsLoginAuthenticator(void) const;
    
    //## auto_generated
    void setItsLoginAuthenticator(LoginAuthenticator* const p_LoginAuthenticator);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

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
//#[ ignore
class OMAnimatedMaintainerPortal : public OMAnimatedUserPortal {
    DECLARE_META(MaintainerPortal, OMAnimatedMaintainerPortal)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MaintainerPortal.h
*********************************************************************/
