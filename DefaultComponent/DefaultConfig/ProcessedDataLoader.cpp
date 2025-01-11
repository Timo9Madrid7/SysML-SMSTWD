/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ProcessedDataLoader
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\ProcessedDataLoader.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ProcessedDataLoader.h"
//#[ ignore
#define SMSWTD_ProcessedDataLoader_ProcessedDataLoader_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class ProcessedDataLoader
//#[ ignore
ProcessedDataLoader::p_ProcessedDataLoader_satellite_image_C::p_ProcessedDataLoader_satellite_image_C(void) : RhpString_satelliteImage_ProxyFlowPropertyInterface(), _p_(0), itsRhpString_satelliteImage_ProxyFlowPropertyInterface(NULL) {
}

ProcessedDataLoader::p_ProcessedDataLoader_satellite_image_C::~p_ProcessedDataLoader_satellite_image_C(void) {
    cleanUpRelations();
}

void ProcessedDataLoader::p_ProcessedDataLoader_satellite_image_C::connectProcessedDataLoader(ProcessedDataLoader* part) {
    setItsRhpString_satelliteImage_ProxyFlowPropertyInterface(part);
    
}

RhpString_satelliteImage_ProxyFlowPropertyInterface* ProcessedDataLoader::p_ProcessedDataLoader_satellite_image_C::getItsRhpString_satelliteImage_ProxyFlowPropertyInterface(void) {
    return this;
}

void ProcessedDataLoader::p_ProcessedDataLoader_satellite_image_C::setSatelliteImage(RhpString p_satelliteImage) {
    
    if (itsRhpString_satelliteImage_ProxyFlowPropertyInterface != NULL) {
        itsRhpString_satelliteImage_ProxyFlowPropertyInterface->setSatelliteImage(p_satelliteImage);
    }
    
}

void ProcessedDataLoader::p_ProcessedDataLoader_satellite_image_C::setItsRhpString_satelliteImage_ProxyFlowPropertyInterface(RhpString_satelliteImage_ProxyFlowPropertyInterface* const p_RhpString_satelliteImage_ProxyFlowPropertyInterface) {
    itsRhpString_satelliteImage_ProxyFlowPropertyInterface = p_RhpString_satelliteImage_ProxyFlowPropertyInterface;
}

void ProcessedDataLoader::p_ProcessedDataLoader_satellite_image_C::cleanUpRelations(void) {
    if(itsRhpString_satelliteImage_ProxyFlowPropertyInterface != NULL)
        {
            itsRhpString_satelliteImage_ProxyFlowPropertyInterface = NULL;
        }
}

ProcessedDataLoader::p_ResearcherPortal_satellite_image_C::p_ResearcherPortal_satellite_image_C(void) : RhpString_satelliteImage_ProxyFlowPropertyInterface(), _p_(0), itsRhpString_satelliteImage_ProxyFlowPropertyInterface(NULL) {
}

ProcessedDataLoader::p_ResearcherPortal_satellite_image_C::~p_ResearcherPortal_satellite_image_C(void) {
    cleanUpRelations();
}

RhpString_satelliteImage_ProxyFlowPropertyInterface* ProcessedDataLoader::p_ResearcherPortal_satellite_image_C::getItsRhpString_satelliteImage_ProxyFlowPropertyInterface(void) {
    return this;
}

RhpString_satelliteImage_ProxyFlowPropertyInterface* ProcessedDataLoader::p_ResearcherPortal_satellite_image_C::getOutBound(void) {
    return this;
}

void ProcessedDataLoader::p_ResearcherPortal_satellite_image_C::setSatelliteImage(RhpString p_satelliteImage) {
    
    if (itsRhpString_satelliteImage_ProxyFlowPropertyInterface != NULL) {
        itsRhpString_satelliteImage_ProxyFlowPropertyInterface->setSatelliteImage(p_satelliteImage);
    }
    
}

void ProcessedDataLoader::p_ResearcherPortal_satellite_image_C::setItsRhpString_satelliteImage_ProxyFlowPropertyInterface(RhpString_satelliteImage_ProxyFlowPropertyInterface* const p_RhpString_satelliteImage_ProxyFlowPropertyInterface) {
    itsRhpString_satelliteImage_ProxyFlowPropertyInterface = p_RhpString_satelliteImage_ProxyFlowPropertyInterface;
}

void ProcessedDataLoader::p_ResearcherPortal_satellite_image_C::cleanUpRelations(void) {
    if(itsRhpString_satelliteImage_ProxyFlowPropertyInterface != NULL)
        {
            itsRhpString_satelliteImage_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

ProcessedDataLoader::ProcessedDataLoader(void) : DataLoader(), RhpString_satelliteImage_ProxyFlowPropertyInterface() {
    NOTIFY_CONSTRUCTOR(ProcessedDataLoader, ProcessedDataLoader(), 0, SMSWTD_ProcessedDataLoader_ProcessedDataLoader_SERIALIZE);
    initRelations();
}

ProcessedDataLoader::~ProcessedDataLoader(void) {
    NOTIFY_DESTRUCTOR(~ProcessedDataLoader, false);
}

//#[ ignore
void ProcessedDataLoader::setSatelliteImage(RhpString p_satelliteImage) {
    if (satelliteImage != p_satelliteImage) {
        satelliteImage = p_satelliteImage;
        FLOW_DATA_RECEIVE("satelliteImage", satelliteImage, x2String);
        FLOW_DATA_SEND(satelliteImage, p_ResearcherPortal_satellite_image, setSatelliteImage, x2String);
    }
    
}
//#]

ProcessedDataLoader::p_ProcessedDataLoader_satellite_image_C* ProcessedDataLoader::getP_ProcessedDataLoader_satellite_image(void) const {
    return (ProcessedDataLoader::p_ProcessedDataLoader_satellite_image_C*) &p_ProcessedDataLoader_satellite_image;
}

ProcessedDataLoader::p_ProcessedDataLoader_satellite_image_C* ProcessedDataLoader::get_p_ProcessedDataLoader_satellite_image(void) const {
    return (ProcessedDataLoader::p_ProcessedDataLoader_satellite_image_C*) &p_ProcessedDataLoader_satellite_image;
}

ProcessedDataLoader::p_ResearcherPortal_satellite_image_C* ProcessedDataLoader::getP_ResearcherPortal_satellite_image(void) const {
    return (ProcessedDataLoader::p_ResearcherPortal_satellite_image_C*) &p_ResearcherPortal_satellite_image;
}

ProcessedDataLoader::p_ResearcherPortal_satellite_image_C* ProcessedDataLoader::get_p_ResearcherPortal_satellite_image(void) const {
    return (ProcessedDataLoader::p_ResearcherPortal_satellite_image_C*) &p_ResearcherPortal_satellite_image;
}

const RhpString ProcessedDataLoader::getSatelliteImage(void) const {
    return satelliteImage;
}

void ProcessedDataLoader::initRelations(void) {
    if (get_p_ProcessedDataLoader_satellite_image() != NULL) {
        get_p_ProcessedDataLoader_satellite_image()->connectProcessedDataLoader(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedProcessedDataLoader::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("satelliteImage", x2String(myReal->satelliteImage));
    OMAnimatedDataLoader::serializeAttributes(aomsAttributes);
}

void OMAnimatedProcessedDataLoader::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedDataLoader::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(ProcessedDataLoader, SMSWTD, false, DataLoader, OMAnimatedDataLoader, OMAnimatedProcessedDataLoader)

OMINIT_SUPERCLASS(DataLoader, OMAnimatedDataLoader)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ProcessedDataLoader.cpp
*********************************************************************/
