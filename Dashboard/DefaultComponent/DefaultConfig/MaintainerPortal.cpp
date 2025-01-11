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
//#[ ignore
#define SMSWTD_MaintainerPortal_MaintainerPortal_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class MaintainerPortal
MaintainerPortal::MaintainerPortal(void) : UserPortal() {
    NOTIFY_CONSTRUCTOR(MaintainerPortal, MaintainerPortal(), 0, SMSWTD_MaintainerPortal_MaintainerPortal_SERIALIZE);
}

MaintainerPortal::~MaintainerPortal(void) {
    NOTIFY_DESTRUCTOR(~MaintainerPortal, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMaintainerPortal::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedUserPortal::serializeAttributes(aomsAttributes);
}

void OMAnimatedMaintainerPortal::serializeRelations(AOMSRelations* aomsRelations) const {
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
