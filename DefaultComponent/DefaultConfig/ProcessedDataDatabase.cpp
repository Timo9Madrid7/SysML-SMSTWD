/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ProcessedDataDatabase
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\ProcessedDataDatabase.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ProcessedDataDatabase.h"
//#[ ignore
#define SMSWTD_ProcessedDataDatabase_ProcessedDataDatabase_SERIALIZE OM_NO_OP

#define OMAnim_SMSWTD_ProcessedDataDatabase_setSatelliteImage_RhpString_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_satelliteImage)

#define OMAnim_SMSWTD_ProcessedDataDatabase_setSatelliteImage_RhpString_SERIALIZE_RET_VAL
//#]

//## package SMSWTD

//## class ProcessedDataDatabase
//#[ ignore
ProcessedDataDatabase::p_ProcessedDataLoader_satellite_image_C::p_ProcessedDataLoader_satellite_image_C(void) : RhpString_satelliteImage_ProxyFlowPropertyInterface(), _p_(0), itsRhpString_satelliteImage_ProxyFlowPropertyInterface(NULL) {
}

ProcessedDataDatabase::p_ProcessedDataLoader_satellite_image_C::~p_ProcessedDataLoader_satellite_image_C(void) {
    cleanUpRelations();
}

RhpString_satelliteImage_ProxyFlowPropertyInterface* ProcessedDataDatabase::p_ProcessedDataLoader_satellite_image_C::getItsRhpString_satelliteImage_ProxyFlowPropertyInterface(void) {
    return this;
}

RhpString_satelliteImage_ProxyFlowPropertyInterface* ProcessedDataDatabase::p_ProcessedDataLoader_satellite_image_C::getOutBound(void) {
    return this;
}

void ProcessedDataDatabase::p_ProcessedDataLoader_satellite_image_C::setSatelliteImage(RhpString p_satelliteImage) {
    
    if (itsRhpString_satelliteImage_ProxyFlowPropertyInterface != NULL) {
        itsRhpString_satelliteImage_ProxyFlowPropertyInterface->setSatelliteImage(p_satelliteImage);
    }
    
}

void ProcessedDataDatabase::p_ProcessedDataLoader_satellite_image_C::setItsRhpString_satelliteImage_ProxyFlowPropertyInterface(RhpString_satelliteImage_ProxyFlowPropertyInterface* const p_RhpString_satelliteImage_ProxyFlowPropertyInterface) {
    itsRhpString_satelliteImage_ProxyFlowPropertyInterface = p_RhpString_satelliteImage_ProxyFlowPropertyInterface;
}

void ProcessedDataDatabase::p_ProcessedDataLoader_satellite_image_C::cleanUpRelations(void) {
    if(itsRhpString_satelliteImage_ProxyFlowPropertyInterface != NULL)
        {
            itsRhpString_satelliteImage_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

ProcessedDataDatabase::ProcessedDataDatabase(void) : Database(), satelliteImage("               ,,ggddY\"\"\"Ybbgg,,\n          ,agd888b,_ \"Y8, ___`\"\"Ybga,\n       ,gdP\"\"88888888baa,.\"\"8b    \"888g,\n     ,dP\"     ]888888888P'  \"Y     `888Yb,\n   ,dP\"      ,88888888P\"  db,       \"8P\"\"Yb,\n  ,8\"       ,888888888b, d8888a           \"8,\n ,8'        d88888888888,88P\"' a,          `8,\n,8'         88888888888888PP\"  \"\"           `8,\nd'          I88888888888P\"                   `b\n8           `8\"88P\"\"Y8P'                      8\n8            Y 8[  _ \"                        8\n8              \"Y8d8b  \"Y a                   8\n8                 `\"\"8d,   __                 8\nY,                    `\"8bd888b,             ,P\n`8,                     ,d8888888baaa       ,8'\n `8,                    888888888888'      ,8'\n  `8a                   \"8888888888I      a8'\n   `Yba                  `Y8888888P'    adP'\n     \"Yba                 `888888P'   adY\"\n       `\"Yba,             d8888P\" ,adP\"'  Normand Veilleux\n          `\"Y8baa,      ,d888P,ad8P\"'           from\n               ``\"\"YYba8888P\"\"''          Spaceship Earth") {
    NOTIFY_CONSTRUCTOR(ProcessedDataDatabase, ProcessedDataDatabase(), 0, SMSWTD_ProcessedDataDatabase_ProcessedDataDatabase_SERIALIZE);
}

ProcessedDataDatabase::~ProcessedDataDatabase(void) {
    NOTIFY_DESTRUCTOR(~ProcessedDataDatabase, false);
}

//#[ ignore
void ProcessedDataDatabase::setSatelliteImage(RhpString p_satelliteImage) {
    if (satelliteImage != p_satelliteImage)  {
        satelliteImage = p_satelliteImage;
        FLOW_DATA_SEND(satelliteImage, p_ProcessedDataLoader_satellite_image, setSatelliteImage, x2String);
    }
}
//#]

ProcessedDataDatabase::p_ProcessedDataLoader_satellite_image_C* ProcessedDataDatabase::getP_ProcessedDataLoader_satellite_image(void) const {
    return (ProcessedDataDatabase::p_ProcessedDataLoader_satellite_image_C*) &p_ProcessedDataLoader_satellite_image;
}

ProcessedDataDatabase::p_ProcessedDataLoader_satellite_image_C* ProcessedDataDatabase::get_p_ProcessedDataLoader_satellite_image(void) const {
    return (ProcessedDataDatabase::p_ProcessedDataLoader_satellite_image_C*) &p_ProcessedDataLoader_satellite_image;
}

const RhpString ProcessedDataDatabase::getSatelliteImage(void) const {
    return satelliteImage;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedProcessedDataDatabase::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("satelliteImage", x2String(myReal->satelliteImage));
    OMAnimatedDatabase::serializeAttributes(aomsAttributes);
}

void OMAnimatedProcessedDataDatabase::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedDatabase::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(ProcessedDataDatabase, SMSWTD, false, Database, OMAnimatedDatabase, OMAnimatedProcessedDataDatabase)

OMINIT_SUPERCLASS(Database, OMAnimatedDatabase)

OMREGISTER_CLASS

IMPLEMENT_META_OP(OMAnimatedProcessedDataDatabase, SMSWTD_ProcessedDataDatabase_setSatelliteImage_RhpString, "setSatelliteImage", FALSE, "setSatelliteImage(RhpString)", 1)

IMPLEMENT_OP_CALL(SMSWTD_ProcessedDataDatabase_setSatelliteImage_RhpString, ProcessedDataDatabase, setSatelliteImage(p_satelliteImage), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ProcessedDataDatabase.cpp
*********************************************************************/
