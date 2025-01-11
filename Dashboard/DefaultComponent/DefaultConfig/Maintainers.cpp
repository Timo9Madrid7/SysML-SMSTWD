/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Maintainers
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Maintainers.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Maintainers.h"
//#[ ignore
#define SMSWTD_SERVICE_UCS_BACKEND_UCS_Maintainers_Maintainers_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::SERVICE_UCS::BACKEND_UCS

//## actor Maintainers
Maintainers::Maintainers(void) {
    NOTIFY_CONSTRUCTOR(Maintainers, Maintainers(), 0, SMSWTD_SERVICE_UCS_BACKEND_UCS_Maintainers_Maintainers_SERIALIZE);
}

Maintainers::~Maintainers(void) {
    NOTIFY_DESTRUCTOR(~Maintainers, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMaintainers::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Maintainers, SMSWTD_SERVICE_UCS_BACKEND_UCS, SMSWTD::SERVICE_UCS::BACKEND_UCS, false, OMAnimatedMaintainers)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Maintainers.cpp
*********************************************************************/
