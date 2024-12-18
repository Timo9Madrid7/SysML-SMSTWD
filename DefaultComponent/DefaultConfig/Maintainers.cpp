/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Maintainers
//!	Generated Date	: Tue, 17, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Maintainers.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Maintainers.h"
//#[ ignore
#define SMSWTD_SERVICE_UCS_Maintainers_Maintainers_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::SERVICE_UCS

//## actor Maintainers
Maintainers::Maintainers(void) {
    NOTIFY_CONSTRUCTOR(Maintainers, Maintainers(), 0, SMSWTD_SERVICE_UCS_Maintainers_Maintainers_SERIALIZE);
}

Maintainers::~Maintainers(void) {
    NOTIFY_DESTRUCTOR(~Maintainers, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMaintainers::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Maintainers, SMSWTD_SERVICE_UCS, SMSWTD::SERVICE_UCS, false, OMAnimatedMaintainers)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Maintainers.cpp
*********************************************************************/
