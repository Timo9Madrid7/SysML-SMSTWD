/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ResearcherPortal
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\ResearcherPortal.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ResearcherPortal.h"
//## link itsLoginAuthenticator
#include "LoginAuthenticator.h"
//#[ ignore
#define SMSWTD_ResearcherPortal_ResearcherPortal_SERIALIZE OM_NO_OP

#define OMAnim_SMSWTD_ResearcherPortal_setPassword_RhpString_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_password)

#define OMAnim_SMSWTD_ResearcherPortal_setPassword_RhpString_SERIALIZE_RET_VAL

#define OMAnim_SMSWTD_ResearcherPortal_setUsername_RhpString_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_username)

#define OMAnim_SMSWTD_ResearcherPortal_setUsername_RhpString_SERIALIZE_RET_VAL
//#]

//## package SMSWTD

//## class ResearcherPortal
//#[ ignore
ResearcherPortal::p_ResearcherPortal_username_C::p_ResearcherPortal_username_C(void) : RhpString_username_ProxyFlowPropertyInterface(), _p_(0), itsRhpString_username_ProxyFlowPropertyInterface(NULL) {
}

ResearcherPortal::p_ResearcherPortal_username_C::~p_ResearcherPortal_username_C(void) {
    cleanUpRelations();
}

RhpString_username_ProxyFlowPropertyInterface* ResearcherPortal::p_ResearcherPortal_username_C::getItsRhpString_username_ProxyFlowPropertyInterface(void) {
    return this;
}

RhpString_username_ProxyFlowPropertyInterface* ResearcherPortal::p_ResearcherPortal_username_C::getOutBound(void) {
    return this;
}

void ResearcherPortal::p_ResearcherPortal_username_C::setUsername(RhpString p_username) {
    
    if (itsRhpString_username_ProxyFlowPropertyInterface != NULL) {
        itsRhpString_username_ProxyFlowPropertyInterface->setUsername(p_username);
    }
    
}

void ResearcherPortal::p_ResearcherPortal_username_C::setItsRhpString_username_ProxyFlowPropertyInterface(RhpString_username_ProxyFlowPropertyInterface* const p_RhpString_username_ProxyFlowPropertyInterface) {
    itsRhpString_username_ProxyFlowPropertyInterface = p_RhpString_username_ProxyFlowPropertyInterface;
}

void ResearcherPortal::p_ResearcherPortal_username_C::cleanUpRelations(void) {
    if(itsRhpString_username_ProxyFlowPropertyInterface != NULL)
        {
            itsRhpString_username_ProxyFlowPropertyInterface = NULL;
        }
}

ResearcherPortal::p_ResearcherPortal_password_C::p_ResearcherPortal_password_C(void) : RhpString_password_ProxyFlowPropertyInterface(), _p_(0), itsRhpString_password_ProxyFlowPropertyInterface(NULL) {
}

ResearcherPortal::p_ResearcherPortal_password_C::~p_ResearcherPortal_password_C(void) {
    cleanUpRelations();
}

RhpString_password_ProxyFlowPropertyInterface* ResearcherPortal::p_ResearcherPortal_password_C::getItsRhpString_password_ProxyFlowPropertyInterface(void) {
    return this;
}

RhpString_password_ProxyFlowPropertyInterface* ResearcherPortal::p_ResearcherPortal_password_C::getOutBound(void) {
    return this;
}

void ResearcherPortal::p_ResearcherPortal_password_C::setPassword(RhpString p_password) {
    
    if (itsRhpString_password_ProxyFlowPropertyInterface != NULL) {
        itsRhpString_password_ProxyFlowPropertyInterface->setPassword(p_password);
    }
    
}

void ResearcherPortal::p_ResearcherPortal_password_C::setItsRhpString_password_ProxyFlowPropertyInterface(RhpString_password_ProxyFlowPropertyInterface* const p_RhpString_password_ProxyFlowPropertyInterface) {
    itsRhpString_password_ProxyFlowPropertyInterface = p_RhpString_password_ProxyFlowPropertyInterface;
}

void ResearcherPortal::p_ResearcherPortal_password_C::cleanUpRelations(void) {
    if(itsRhpString_password_ProxyFlowPropertyInterface != NULL)
        {
            itsRhpString_password_ProxyFlowPropertyInterface = NULL;
        }
}

ResearcherPortal::p_ResearcherPortal_satellite_image_C::p_ResearcherPortal_satellite_image_C(void) : RhpString_satelliteImage_ProxyFlowPropertyInterface(), _p_(0), itsRhpString_satelliteImage_ProxyFlowPropertyInterface(NULL) {
}

ResearcherPortal::p_ResearcherPortal_satellite_image_C::~p_ResearcherPortal_satellite_image_C(void) {
    cleanUpRelations();
}

void ResearcherPortal::p_ResearcherPortal_satellite_image_C::connectResearcherPortal(ResearcherPortal* part) {
    setItsRhpString_satelliteImage_ProxyFlowPropertyInterface(part);
    
}

RhpString_satelliteImage_ProxyFlowPropertyInterface* ResearcherPortal::p_ResearcherPortal_satellite_image_C::getItsRhpString_satelliteImage_ProxyFlowPropertyInterface(void) {
    return this;
}

void ResearcherPortal::p_ResearcherPortal_satellite_image_C::setSatelliteImage(RhpString p_satelliteImage) {
    
    if (itsRhpString_satelliteImage_ProxyFlowPropertyInterface != NULL) {
        itsRhpString_satelliteImage_ProxyFlowPropertyInterface->setSatelliteImage(p_satelliteImage);
    }
    
}

void ResearcherPortal::p_ResearcherPortal_satellite_image_C::setItsRhpString_satelliteImage_ProxyFlowPropertyInterface(RhpString_satelliteImage_ProxyFlowPropertyInterface* const p_RhpString_satelliteImage_ProxyFlowPropertyInterface) {
    itsRhpString_satelliteImage_ProxyFlowPropertyInterface = p_RhpString_satelliteImage_ProxyFlowPropertyInterface;
}

void ResearcherPortal::p_ResearcherPortal_satellite_image_C::cleanUpRelations(void) {
    if(itsRhpString_satelliteImage_ProxyFlowPropertyInterface != NULL)
        {
            itsRhpString_satelliteImage_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

ResearcherPortal::ResearcherPortal(void) : UserPortal(), RhpString_satelliteImage_ProxyFlowPropertyInterface(), itsLoginAuthenticator(NULL) {
    NOTIFY_CONSTRUCTOR(ResearcherPortal, ResearcherPortal(), 0, SMSWTD_ResearcherPortal_ResearcherPortal_SERIALIZE);
    initRelations();
}

ResearcherPortal::~ResearcherPortal(void) {
    NOTIFY_DESTRUCTOR(~ResearcherPortal, false);
    cleanUpRelations();
}

//#[ ignore
void ResearcherPortal::setPassword(RhpString p_password) {
    if (password != p_password)  {
        password = p_password;
        FLOW_DATA_SEND(password, p_ResearcherPortal_password, setPassword, x2String);
    }
}

void ResearcherPortal::setSatelliteImage(RhpString p_satelliteImage) {
    if (satelliteImage != p_satelliteImage) {
        satelliteImage = p_satelliteImage;
        FLOW_DATA_RECEIVE("satelliteImage", satelliteImage, x2String);
    }
    
}

void ResearcherPortal::setUsername(RhpString p_username) {
    if (username != p_username)  {
        username = p_username;
        FLOW_DATA_SEND(username, p_ResearcherPortal_username, setUsername, x2String);
    }
}
//#]

ResearcherPortal::p_ResearcherPortal_username_C* ResearcherPortal::getP_ResearcherPortal_username(void) const {
    return (ResearcherPortal::p_ResearcherPortal_username_C*) &p_ResearcherPortal_username;
}

ResearcherPortal::p_ResearcherPortal_username_C* ResearcherPortal::get_p_ResearcherPortal_username(void) const {
    return (ResearcherPortal::p_ResearcherPortal_username_C*) &p_ResearcherPortal_username;
}

ResearcherPortal::p_ResearcherPortal_password_C* ResearcherPortal::getP_ResearcherPortal_password(void) const {
    return (ResearcherPortal::p_ResearcherPortal_password_C*) &p_ResearcherPortal_password;
}

ResearcherPortal::p_ResearcherPortal_password_C* ResearcherPortal::get_p_ResearcherPortal_password(void) const {
    return (ResearcherPortal::p_ResearcherPortal_password_C*) &p_ResearcherPortal_password;
}

ResearcherPortal::p_ResearcherPortal_satellite_image_C* ResearcherPortal::getP_ResearcherPortal_satellite_image(void) const {
    return (ResearcherPortal::p_ResearcherPortal_satellite_image_C*) &p_ResearcherPortal_satellite_image;
}

ResearcherPortal::p_ResearcherPortal_satellite_image_C* ResearcherPortal::get_p_ResearcherPortal_satellite_image(void) const {
    return (ResearcherPortal::p_ResearcherPortal_satellite_image_C*) &p_ResearcherPortal_satellite_image;
}

const RhpString ResearcherPortal::getPassword(void) const {
    return password;
}

const RhpString ResearcherPortal::getSatelliteImage(void) const {
    return satelliteImage;
}

const RhpString ResearcherPortal::getUsername(void) const {
    return username;
}

const LoginAuthenticator* ResearcherPortal::getItsLoginAuthenticator(void) const {
    return itsLoginAuthenticator;
}

void ResearcherPortal::setItsLoginAuthenticator(LoginAuthenticator* const p_LoginAuthenticator) {
    if(p_LoginAuthenticator != NULL)
        {
            p_LoginAuthenticator->_setItsResearcherPortal(this);
        }
    _setItsLoginAuthenticator(p_LoginAuthenticator);
}

void ResearcherPortal::initRelations(void) {
    if (get_p_ResearcherPortal_satellite_image() != NULL) {
        get_p_ResearcherPortal_satellite_image()->connectResearcherPortal(this);
    }
}

void ResearcherPortal::cleanUpRelations(void) {
    if(itsLoginAuthenticator != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLoginAuthenticator");
            const ResearcherPortal* p_ResearcherPortal = itsLoginAuthenticator->getItsResearcherPortal();
            if(p_ResearcherPortal != NULL)
                {
                    itsLoginAuthenticator->__setItsResearcherPortal(NULL);
                }
            itsLoginAuthenticator = NULL;
        }
}

void ResearcherPortal::__setItsLoginAuthenticator(LoginAuthenticator* const p_LoginAuthenticator) {
    itsLoginAuthenticator = p_LoginAuthenticator;
    if(p_LoginAuthenticator != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLoginAuthenticator", p_LoginAuthenticator, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLoginAuthenticator");
        }
}

void ResearcherPortal::_setItsLoginAuthenticator(LoginAuthenticator* const p_LoginAuthenticator) {
    if(itsLoginAuthenticator != NULL)
        {
            itsLoginAuthenticator->__setItsResearcherPortal(NULL);
        }
    __setItsLoginAuthenticator(p_LoginAuthenticator);
}

void ResearcherPortal::_clearItsLoginAuthenticator(void) {
    NOTIFY_RELATION_CLEARED("itsLoginAuthenticator");
    itsLoginAuthenticator = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedResearcherPortal::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("username", x2String(myReal->username));
    aomsAttributes->addAttribute("password", x2String(myReal->password));
    aomsAttributes->addAttribute("satelliteImage", x2String(myReal->satelliteImage));
    OMAnimatedUserPortal::serializeAttributes(aomsAttributes);
}

void OMAnimatedResearcherPortal::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsLoginAuthenticator", false, true);
    if(myReal->itsLoginAuthenticator)
        {
            aomsRelations->ADD_ITEM(myReal->itsLoginAuthenticator);
        }
    OMAnimatedUserPortal::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(ResearcherPortal, SMSWTD, false, UserPortal, OMAnimatedUserPortal, OMAnimatedResearcherPortal)

OMINIT_SUPERCLASS(UserPortal, OMAnimatedUserPortal)

OMREGISTER_CLASS

IMPLEMENT_META_OP(OMAnimatedResearcherPortal, SMSWTD_ResearcherPortal_setPassword_RhpString, "setPassword", FALSE, "setPassword(RhpString)", 1)

IMPLEMENT_OP_CALL(SMSWTD_ResearcherPortal_setPassword_RhpString, ResearcherPortal, setPassword(p_password), NO_OP())

IMPLEMENT_META_OP(OMAnimatedResearcherPortal, SMSWTD_ResearcherPortal_setUsername_RhpString, "setUsername", FALSE, "setUsername(RhpString)", 1)

IMPLEMENT_OP_CALL(SMSWTD_ResearcherPortal_setUsername_RhpString, ResearcherPortal, setUsername(p_username), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ResearcherPortal.cpp
*********************************************************************/
