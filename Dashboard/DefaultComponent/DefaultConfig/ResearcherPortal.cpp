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
//#[ ignore
#define SMSWTD_ResearcherPortal_ResearcherPortal_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class ResearcherPortal
ResearcherPortal::ResearcherPortal(void) : UserPortal() {
    NOTIFY_CONSTRUCTOR(ResearcherPortal, ResearcherPortal(), 0, SMSWTD_ResearcherPortal_ResearcherPortal_SERIALIZE);
}

ResearcherPortal::~ResearcherPortal(void) {
    NOTIFY_DESTRUCTOR(~ResearcherPortal, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedResearcherPortal::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedUserPortal::serializeAttributes(aomsAttributes);
}

void OMAnimatedResearcherPortal::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedUserPortal::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(ResearcherPortal, SMSWTD, false, UserPortal, OMAnimatedUserPortal, OMAnimatedResearcherPortal)

OMINIT_SUPERCLASS(UserPortal, OMAnimatedUserPortal)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ResearcherPortal.cpp
*********************************************************************/
