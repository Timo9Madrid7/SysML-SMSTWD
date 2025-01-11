/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MaintainerPortal
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\MaintainerPortal.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "MaintainerPortal.h"
//## link itsLoginAuthenticator
#include "LoginAuthenticator.h"
//#[ ignore
#define SMSWTD_MaintainerPortal_MaintainerPortal_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class MaintainerPortal
MaintainerPortal::MaintainerPortal(void) : UserPortal(), itsLoginAuthenticator(NULL) {
    NOTIFY_CONSTRUCTOR(MaintainerPortal, MaintainerPortal(), 0, SMSWTD_MaintainerPortal_MaintainerPortal_SERIALIZE);
}

MaintainerPortal::~MaintainerPortal(void) {
    NOTIFY_DESTRUCTOR(~MaintainerPortal, false);
    cleanUpRelations();
}

const LoginAuthenticator* MaintainerPortal::getItsLoginAuthenticator(void) const {
    return itsLoginAuthenticator;
}

void MaintainerPortal::setItsLoginAuthenticator(LoginAuthenticator* const p_LoginAuthenticator) {
    if(p_LoginAuthenticator != NULL)
        {
            p_LoginAuthenticator->_setItsMaintainerPortal(this);
        }
    _setItsLoginAuthenticator(p_LoginAuthenticator);
}

void MaintainerPortal::cleanUpRelations(void) {
    if(itsLoginAuthenticator != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLoginAuthenticator");
            const MaintainerPortal* p_MaintainerPortal = itsLoginAuthenticator->getItsMaintainerPortal();
            if(p_MaintainerPortal != NULL)
                {
                    itsLoginAuthenticator->__setItsMaintainerPortal(NULL);
                }
            itsLoginAuthenticator = NULL;
        }
}

void MaintainerPortal::__setItsLoginAuthenticator(LoginAuthenticator* const p_LoginAuthenticator) {
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

void MaintainerPortal::_setItsLoginAuthenticator(LoginAuthenticator* const p_LoginAuthenticator) {
    if(itsLoginAuthenticator != NULL)
        {
            itsLoginAuthenticator->__setItsMaintainerPortal(NULL);
        }
    __setItsLoginAuthenticator(p_LoginAuthenticator);
}

void MaintainerPortal::_clearItsLoginAuthenticator(void) {
    NOTIFY_RELATION_CLEARED("itsLoginAuthenticator");
    itsLoginAuthenticator = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMaintainerPortal::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedUserPortal::serializeAttributes(aomsAttributes);
}

void OMAnimatedMaintainerPortal::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsLoginAuthenticator", false, true);
    if(myReal->itsLoginAuthenticator)
        {
            aomsRelations->ADD_ITEM(myReal->itsLoginAuthenticator);
        }
    OMAnimatedUserPortal::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(MaintainerPortal, SMSWTD, false, UserPortal, OMAnimatedUserPortal, OMAnimatedMaintainerPortal)

OMINIT_SUPERCLASS(UserPortal, OMAnimatedUserPortal)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MaintainerPortal.cpp
*********************************************************************/
