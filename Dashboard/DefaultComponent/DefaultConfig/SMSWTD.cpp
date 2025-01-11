/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SMSWTD.h"
//## link itsCommunicationInfrastructure
#include "CommunicationInfrastructure.h"
//## link itsDataStorage
#include "DataStorage.h"
//## link itsProcessors
#include "Processors.h"
//## link itsSensors
#include "Sensors.h"
//## classInstance itsLocationProvider
#include "LocationProvider.h"
//## classInstance itsRawDataLoader
#include "RawDataLoader.h"
//## classInstance itsRegionNameAPIClient
#include "RegionNameAPIClient.h"
//## classInstance itsWeatherAPIClient
#include "WeatherAPIClient.h"
//## classInstance itsContext
#include "Context.h"
//## classInstance itsDashboard
#include "Dashboard.h"
//## classInstance itsGUI
#include "GUI.h"
//## classInstance itsLocationChangeUI
#include "LocationChangeUI.h"
//## classInstance itsPushNotificationListener
#include "PushNotificationListener.h"
//## classInstance itsThreatsUI
#include "ThreatsUI.h"
//## classInstance itsWeatherForcastUI
#include "WeatherForcastUI.h"
//## auto_generated
#include "BackendAPIClient.h"
//## auto_generated
#include "CarrierNotificationListener.h"
//## auto_generated
#include "CommunicationInterface.h"
//## auto_generated
#include "Database.h"
//## auto_generated
#include "DataLoader.h"
//## auto_generated
#include "InterCommunicationInterface.h"
//## auto_generated
#include "IntraCommunicationInterface.h"
//## auto_generated
#include "LoginAuthenticator.h"
//## auto_generated
#include "MaintainerPortal.h"
//## auto_generated
#include "MonitorSystem.h"
//## auto_generated
#include "NotificationAPIClient.h"
//## auto_generated
#include "NotificationListener.h"
//## auto_generated
#include "NotificationUI.h"
//## auto_generated
#include "ProcessedDataDatabase.h"
//## auto_generated
#include "ProcessedDataLoader.h"
//## auto_generated
#include "ResearcherPortal.h"
//## auto_generated
#include "SecureTransmissionManager.h"
//## auto_generated
#include "SensorDatabase.h"
//## auto_generated
#include "UserDatabase.h"
//## auto_generated
#include "UserPortal.h"
//#[ ignore
#define reqRawDataFromSensors_SERIALIZE OM_NO_OP

#define reqRawDataFromSensors_UNSERIALIZE OM_NO_OP

#define reqRawDataFromSensors_CONSTRUCTOR reqRawDataFromSensors()

#define rawDataTransmissionDone_SERIALIZE OM_NO_OP

#define rawDataTransmissionDone_UNSERIALIZE OM_NO_OP

#define rawDataTransmissionDone_CONSTRUCTOR rawDataTransmissionDone()

#define uploadRawDataToDatabase_SERIALIZE OM_NO_OP

#define uploadRawDataToDatabase_UNSERIALIZE OM_NO_OP

#define uploadRawDataToDatabase_CONSTRUCTOR uploadRawDataToDatabase()

#define receiveAllRawData_SERIALIZE OM_NO_OP

#define receiveAllRawData_UNSERIALIZE OM_NO_OP

#define receiveAllRawData_CONSTRUCTOR receiveAllRawData()

#define checkRawData_SERIALIZE OM_NO_OP

#define checkRawData_UNSERIALIZE OM_NO_OP

#define checkRawData_CONSTRUCTOR checkRawData()

#define alarmRec_SERIALIZE OM_NO_OP

#define alarmRec_UNSERIALIZE OM_NO_OP

#define alarmRec_CONSTRUCTOR alarmRec()

#define alarmReceivedEv_SERIALIZE OM_NO_OP

#define alarmReceivedEv_UNSERIALIZE OM_NO_OP

#define alarmReceivedEv_CONSTRUCTOR alarmReceivedEv()

#define AlarmReceivedEv_SERIALIZE OM_NO_OP

#define AlarmReceivedEv_UNSERIALIZE OM_NO_OP

#define AlarmReceivedEv_CONSTRUCTOR AlarmReceivedEv()

#define alarmResolved_SERIALIZE OM_NO_OP

#define alarmResolved_UNSERIALIZE OM_NO_OP

#define alarmResolved_CONSTRUCTOR alarmResolved()

#define alarmResolvedEv_SERIALIZE OM_NO_OP

#define alarmResolvedEv_UNSERIALIZE OM_NO_OP

#define alarmResolvedEv_CONSTRUCTOR alarmResolvedEv()

#define AlarmResolvedEv_SERIALIZE OM_NO_OP

#define AlarmResolvedEv_UNSERIALIZE OM_NO_OP

#define AlarmResolvedEv_CONSTRUCTOR AlarmResolvedEv()

#define crisisReceived_SERIALIZE OM_NO_OP

#define crisisReceived_UNSERIALIZE OM_NO_OP

#define crisisReceived_CONSTRUCTOR crisisReceived()

#define crisisReceivedEv_SERIALIZE OM_NO_OP

#define crisisReceivedEv_UNSERIALIZE OM_NO_OP

#define crisisReceivedEv_CONSTRUCTOR crisisReceivedEv()

#define crisisResolvedEv_SERIALIZE OM_NO_OP

#define crisisResolvedEv_UNSERIALIZE OM_NO_OP

#define crisisResolvedEv_CONSTRUCTOR crisisResolvedEv()

#define notificationReadyEv_SERIALIZE OM_NO_OP

#define notificationReadyEv_UNSERIALIZE OM_NO_OP

#define notificationReadyEv_CONSTRUCTOR notificationReadyEv()

#define NotificationReadyEv_SERIALIZE OM_NO_OP

#define NotificationReadyEv_UNSERIALIZE OM_NO_OP

#define NotificationReadyEv_CONSTRUCTOR NotificationReadyEv()

#define userDismissedAlarm_SERIALIZE OM_NO_OP

#define userDismissedAlarm_UNSERIALIZE OM_NO_OP

#define userDismissedAlarm_CONSTRUCTOR userDismissedAlarm()

#define userDismissedAlarmE_SERIALIZE OM_NO_OP

#define userDismissedAlarmE_UNSERIALIZE OM_NO_OP

#define userDismissedAlarmE_CONSTRUCTOR userDismissedAlarmE()

#define userDismissedAlarmEv_SERIALIZE OM_NO_OP

#define userDismissedAlarmEv_UNSERIALIZE OM_NO_OP

#define userDismissedAlarmEv_CONSTRUCTOR userDismissedAlarmEv()

#define UserDismissedAlarmEv_SERIALIZE OM_NO_OP

#define UserDismissedAlarmEv_UNSERIALIZE OM_NO_OP

#define UserDismissedAlarmEv_CONSTRUCTOR UserDismissedAlarmEv()

#define userSnoozed_SERIALIZE OM_NO_OP

#define userSnoozed_UNSERIALIZE OM_NO_OP

#define userSnoozed_CONSTRUCTOR userSnoozed()

#define userSnoozedEv_SERIALIZE OM_NO_OP

#define userSnoozedEv_UNSERIALIZE OM_NO_OP

#define userSnoozedEv_CONSTRUCTOR userSnoozedEv()

#define UserSnoozedEv_SERIALIZE OM_NO_OP

#define UserSnoozedEv_UNSERIALIZE OM_NO_OP

#define UserSnoozedEv_CONSTRUCTOR UserSnoozedEv()

#define warningReceived_SERIALIZE OM_NO_OP

#define warningReceived_UNSERIALIZE OM_NO_OP

#define warningReceived_CONSTRUCTOR warningReceived()

#define warningReceivedEv_SERIALIZE OM_NO_OP

#define warningReceivedEv_UNSERIALIZE OM_NO_OP

#define warningReceivedEv_CONSTRUCTOR warningReceivedEv()

#define SMSWTD_ANALYSIS_SMSWTD_CONTEXT_SMSWTD_SMSWTD_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## class SMSWTD
#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(SMSWTD, SMSWTD)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsRawDataLoader, RawDataLoader, "itsRawDataLoader", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsWeatherAPIClient, WeatherAPIClient, "itsWeatherAPIClient", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsLocationProvider, LocationProvider, "itsLocationProvider", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsRegionNameAPIClient, RegionNameAPIClient, "itsRegionNameAPIClient", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsLocationChangeUI, LocationChangeUI, "itsLocationChangeUI", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsWeatherForcastUI, WeatherForcastUI, "itsWeatherForcastUI", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsThreatsUI, ThreatsUI, "itsThreatsUI", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsContext, Context, "itsContext", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsDashboard, Dashboard, "itsDashboard", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsGUI, GUI, "itsGUI", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsPushNotificationListener, PushNotificationListener, "itsPushNotificationListener", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

SMSWTD::SMSWTD(void) : itsCommunicationInfrastructure(NULL), itsDataStorage(NULL), itsDataStorage_1(NULL), itsProcessors(NULL), itsSensors(NULL) {
    NOTIFY_CONSTRUCTOR(SMSWTD, SMSWTD(), 0, SMSWTD_ANALYSIS_SMSWTD_CONTEXT_SMSWTD_SMSWTD_SERIALIZE);
}

SMSWTD::~SMSWTD(void) {
    NOTIFY_DESTRUCTOR(~SMSWTD, true);
    cleanUpRelations();
}

const CommunicationInfrastructure* SMSWTD::getItsCommunicationInfrastructure(void) const {
    return itsCommunicationInfrastructure;
}

void SMSWTD::setItsCommunicationInfrastructure(CommunicationInfrastructure* const p_CommunicationInfrastructure) {
    if(p_CommunicationInfrastructure != NULL)
        {
            p_CommunicationInfrastructure->_setItsSMSWTD(this);
        }
    _setItsCommunicationInfrastructure(p_CommunicationInfrastructure);
}

const DataStorage* SMSWTD::getItsDataStorage(void) const {
    return itsDataStorage;
}

void SMSWTD::setItsDataStorage(DataStorage* const p_DataStorage) {
    if(p_DataStorage != NULL)
        {
            p_DataStorage->_setItsSMSWTD(this);
        }
    _setItsDataStorage(p_DataStorage);
}

const DataStorage* SMSWTD::getItsDataStorage_1(void) const {
    return itsDataStorage_1;
}

void SMSWTD::setItsDataStorage_1(DataStorage* const p_DataStorage) {
    if(p_DataStorage != NULL)
        {
            p_DataStorage->_setItsSMSWTD_1(this);
        }
    _setItsDataStorage_1(p_DataStorage);
}

const Processors* SMSWTD::getItsProcessors(void) const {
    return itsProcessors;
}

void SMSWTD::setItsProcessors(Processors* const p_Processors) {
    if(p_Processors != NULL)
        {
            p_Processors->_setItsSMSWTD(this);
        }
    _setItsProcessors(p_Processors);
}

const Sensors* SMSWTD::getItsSensors(void) const {
    return itsSensors;
}

void SMSWTD::setItsSensors(Sensors* const p_Sensors) {
    if(p_Sensors != NULL)
        {
            p_Sensors->_setItsSMSWTD(this);
        }
    _setItsSensors(p_Sensors);
}

void SMSWTD::cleanUpRelations(void) {
    if(itsCommunicationInfrastructure != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunicationInfrastructure");
            const SMSWTD* p_SMSWTD = itsCommunicationInfrastructure->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsCommunicationInfrastructure->__setItsSMSWTD(NULL);
                }
            itsCommunicationInfrastructure = NULL;
        }
    if(itsDataStorage != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataStorage");
            const SMSWTD* p_SMSWTD = itsDataStorage->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsDataStorage->__setItsSMSWTD(NULL);
                }
            itsDataStorage = NULL;
        }
    if(itsDataStorage_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataStorage_1");
            const SMSWTD* p_SMSWTD = itsDataStorage_1->getItsSMSWTD_1();
            if(p_SMSWTD != NULL)
                {
                    itsDataStorage_1->__setItsSMSWTD_1(NULL);
                }
            itsDataStorage_1 = NULL;
        }
    if(itsProcessors != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsProcessors");
            const SMSWTD* p_SMSWTD = itsProcessors->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsProcessors->__setItsSMSWTD(NULL);
                }
            itsProcessors = NULL;
        }
    if(itsSensors != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensors");
            const SMSWTD* p_SMSWTD = itsSensors->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsSensors->__setItsSMSWTD(NULL);
                }
            itsSensors = NULL;
        }
}

void SMSWTD::__setItsCommunicationInfrastructure(CommunicationInfrastructure* const p_CommunicationInfrastructure) {
    itsCommunicationInfrastructure = p_CommunicationInfrastructure;
    if(p_CommunicationInfrastructure != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCommunicationInfrastructure", p_CommunicationInfrastructure, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCommunicationInfrastructure");
        }
}

void SMSWTD::_setItsCommunicationInfrastructure(CommunicationInfrastructure* const p_CommunicationInfrastructure) {
    if(itsCommunicationInfrastructure != NULL)
        {
            itsCommunicationInfrastructure->__setItsSMSWTD(NULL);
        }
    __setItsCommunicationInfrastructure(p_CommunicationInfrastructure);
}

void SMSWTD::_clearItsCommunicationInfrastructure(void) {
    NOTIFY_RELATION_CLEARED("itsCommunicationInfrastructure");
    itsCommunicationInfrastructure = NULL;
}

void SMSWTD::__setItsDataStorage(DataStorage* const p_DataStorage) {
    itsDataStorage = p_DataStorage;
    if(p_DataStorage != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDataStorage", p_DataStorage, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDataStorage");
        }
}

void SMSWTD::_setItsDataStorage(DataStorage* const p_DataStorage) {
    if(itsDataStorage != NULL)
        {
            itsDataStorage->__setItsSMSWTD(NULL);
        }
    __setItsDataStorage(p_DataStorage);
}

void SMSWTD::_clearItsDataStorage(void) {
    NOTIFY_RELATION_CLEARED("itsDataStorage");
    itsDataStorage = NULL;
}

void SMSWTD::__setItsDataStorage_1(DataStorage* const p_DataStorage) {
    itsDataStorage_1 = p_DataStorage;
    if(p_DataStorage != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDataStorage_1", p_DataStorage, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDataStorage_1");
        }
}

void SMSWTD::_setItsDataStorage_1(DataStorage* const p_DataStorage) {
    if(itsDataStorage_1 != NULL)
        {
            itsDataStorage_1->__setItsSMSWTD_1(NULL);
        }
    __setItsDataStorage_1(p_DataStorage);
}

void SMSWTD::_clearItsDataStorage_1(void) {
    NOTIFY_RELATION_CLEARED("itsDataStorage_1");
    itsDataStorage_1 = NULL;
}

void SMSWTD::__setItsProcessors(Processors* const p_Processors) {
    itsProcessors = p_Processors;
    if(p_Processors != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsProcessors", p_Processors, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsProcessors");
        }
}

void SMSWTD::_setItsProcessors(Processors* const p_Processors) {
    if(itsProcessors != NULL)
        {
            itsProcessors->__setItsSMSWTD(NULL);
        }
    __setItsProcessors(p_Processors);
}

void SMSWTD::_clearItsProcessors(void) {
    NOTIFY_RELATION_CLEARED("itsProcessors");
    itsProcessors = NULL;
}

void SMSWTD::__setItsSensors(Sensors* const p_Sensors) {
    itsSensors = p_Sensors;
    if(p_Sensors != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensors", p_Sensors, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensors");
        }
}

void SMSWTD::_setItsSensors(Sensors* const p_Sensors) {
    if(itsSensors != NULL)
        {
            itsSensors->__setItsSMSWTD(NULL);
        }
    __setItsSensors(p_Sensors);
}

void SMSWTD::_clearItsSensors(void) {
    NOTIFY_RELATION_CLEARED("itsSensors");
    itsSensors = NULL;
}

void SMSWTD_initRelations(void) {
    {
        {
            itsRawDataLoader.setShouldDelete(false);
        }
        {
            itsThreatsUI.setShouldDelete(false);
        }
        {
            itsContext.setShouldDelete(false);
        }
        {
            itsDashboard.setShouldDelete(false);
        }
        {
            itsGUI.setShouldDelete(false);
        }
        {
            itsPushNotificationListener.setShouldDelete(false);
        }
    }
    {
        
        itsPushNotificationListener.get_p_PushNotificationListener_severity()->setItsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface(itsContext.get_p_PushNotificationListener_severity()->getItsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsPushNotificationListener.get_p_PushNotificationListener_state()->setItsBool_state_ProxyFlowPropertyInterface(itsContext.get_p_PushNotificationListener_state()->getItsBool_state_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsRegionNameAPIClient.get_p_RegionNameAPIClient_region()->setItsRhpString_region_ProxyFlowPropertyInterface(itsLocationChangeUI.get_p_RegionNameAPIClient_region()->getItsRhpString_region_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsLocationProvider.get_p_LocationProvider_lat(0)->setItsFloat_latitude_ProxyFlowPropertyInterface(itsRegionNameAPIClient.get_p_LocationProvider_lat()->getItsFloat_latitude_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsLocationProvider.get_p_LocationProvider_lng(0)->setItsFloat_longitude_ProxyFlowPropertyInterface(itsRegionNameAPIClient.get_p_LocationProvider_lng()->getItsFloat_longitude_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsContext.get_p_Context_alarmSeverity()->setItsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface(itsThreatsUI.get_p_Context_alarmSeverity()->getItsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsContext.get_p_Context_state()->setItsBool_state_ProxyFlowPropertyInterface(itsThreatsUI.get_p_Context_state()->getItsBool_state_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsLocationProvider.get_p_LocationProvider_lat(1)->setItsFloat_latitude_ProxyFlowPropertyInterface(itsWeatherAPIClient.get_p_LocationProvider_lat()->getItsFloat_latitude_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsLocationProvider.get_p_LocationProvider_lng(1)->setItsFloat_longitude_ProxyFlowPropertyInterface(itsWeatherAPIClient.get_p_LocationProvider_lng()->getItsFloat_longitude_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsWeatherAPIClient.get_p_WeatherAPIClient_humidity()->setItsInt_humidityLevel_ProxyFlowPropertyInterface(itsWeatherForcastUI.get_p_WeatherAPIClient_humidity()->getItsInt_humidityLevel_ProxyFlowPropertyInterface());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool SMSWTD_startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsContext.startBehavior();
        }
    if(done == true)
        {
            done = itsDashboard.startBehavior();
        }
    if(done == true)
        {
            done = itsGUI.startBehavior();
        }
    if(done == true)
        {
            done = itsPushNotificationListener.startBehavior();
        }
    if(done == true)
        {
            done = itsRawDataLoader.startBehavior();
        }
    if(done == true)
        {
            done = itsThreatsUI.startBehavior();
        }
    return done;
}

//#[ ignore
SMSWTD_OMInitializer::SMSWTD_OMInitializer(void) {
    SMSWTD_initRelations();
    (void) SMSWTD_startBehavior();
}

SMSWTD_OMInitializer::~SMSWTD_OMInitializer(void) {
}

void OMAnimatedSMSWTD::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSensors", false, true);
    if(myReal->itsSensors)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensors);
        }
    aomsRelations->addRelation("itsDataStorage", false, true);
    if(myReal->itsDataStorage)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataStorage);
        }
    aomsRelations->addRelation("itsProcessors", false, true);
    if(myReal->itsProcessors)
        {
            aomsRelations->ADD_ITEM(myReal->itsProcessors);
        }
    aomsRelations->addRelation("itsCommunicationInfrastructure", false, true);
    if(myReal->itsCommunicationInfrastructure)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunicationInfrastructure);
        }
    aomsRelations->addRelation("itsDataStorage_1", false, true);
    if(myReal->itsDataStorage_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataStorage_1);
        }
}
//#]

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(SMSWTD, SMSWTD_ANALYSIS_SMSWTD_CONTEXT, SMSWTD::ANALYSIS::SMSWTD_CONTEXT, false, OMAnimatedSMSWTD)
#endif // _OMINSTRUMENT

//## classInstance itsContext
Context itsContext;

//## classInstance itsDashboard
Dashboard itsDashboard;

//## classInstance itsGUI
GUI itsGUI;

//## classInstance itsLocationChangeUI
LocationChangeUI itsLocationChangeUI;

//## classInstance itsPushNotificationListener
PushNotificationListener itsPushNotificationListener;

//## classInstance itsThreatsUI
ThreatsUI itsThreatsUI;

//## classInstance itsWeatherForcastUI
WeatherForcastUI itsWeatherForcastUI;

//## classInstance itsLocationProvider
LocationProvider itsLocationProvider;

//## classInstance itsRawDataLoader
RawDataLoader itsRawDataLoader;

//## classInstance itsRegionNameAPIClient
RegionNameAPIClient itsRegionNameAPIClient;

//## classInstance itsWeatherAPIClient
WeatherAPIClient itsWeatherAPIClient;

//## event alarmRec()
alarmRec::alarmRec(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(alarmRec)
    setId(alarmRec_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID alarmRec_SMSWTD_id(4006);
//#]

IMPLEMENT_META_EVENT_P(alarmRec, SMSWTD, SMSWTD, alarmRec())

//## event alarmReceivedEv()
alarmReceivedEv::alarmReceivedEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(alarmReceivedEv)
    setId(alarmReceivedEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID alarmReceivedEv_SMSWTD_id(4007);
//#]

IMPLEMENT_META_EVENT_P(alarmReceivedEv, SMSWTD, SMSWTD, alarmReceivedEv())

//## event AlarmReceivedEv()
AlarmReceivedEv::AlarmReceivedEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(AlarmReceivedEv)
    setId(AlarmReceivedEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID AlarmReceivedEv_SMSWTD_id(4008);
//#]

IMPLEMENT_META_EVENT_P(AlarmReceivedEv, SMSWTD, SMSWTD, AlarmReceivedEv())

//## event alarmResolved()
alarmResolved::alarmResolved(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(alarmResolved)
    setId(alarmResolved_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID alarmResolved_SMSWTD_id(4009);
//#]

IMPLEMENT_META_EVENT_P(alarmResolved, SMSWTD, SMSWTD, alarmResolved())

//## event alarmResolvedEv()
alarmResolvedEv::alarmResolvedEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(alarmResolvedEv)
    setId(alarmResolvedEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID alarmResolvedEv_SMSWTD_id(4010);
//#]

IMPLEMENT_META_EVENT_P(alarmResolvedEv, SMSWTD, SMSWTD, alarmResolvedEv())

//## event AlarmResolvedEv()
AlarmResolvedEv::AlarmResolvedEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(AlarmResolvedEv)
    setId(AlarmResolvedEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID AlarmResolvedEv_SMSWTD_id(4011);
//#]

IMPLEMENT_META_EVENT_P(AlarmResolvedEv, SMSWTD, SMSWTD, AlarmResolvedEv())

//## event crisisReceived()
crisisReceived::crisisReceived(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(crisisReceived)
    setId(crisisReceived_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID crisisReceived_SMSWTD_id(4012);
//#]

IMPLEMENT_META_EVENT_P(crisisReceived, SMSWTD, SMSWTD, crisisReceived())

//## event crisisReceivedEv()
crisisReceivedEv::crisisReceivedEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(crisisReceivedEv)
    setId(crisisReceivedEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID crisisReceivedEv_SMSWTD_id(4013);
//#]

IMPLEMENT_META_EVENT_P(crisisReceivedEv, SMSWTD, SMSWTD, crisisReceivedEv())

//## event crisisResolvedEv()
crisisResolvedEv::crisisResolvedEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(crisisResolvedEv)
    setId(crisisResolvedEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID crisisResolvedEv_SMSWTD_id(4014);
//#]

IMPLEMENT_META_EVENT_P(crisisResolvedEv, SMSWTD, SMSWTD, crisisResolvedEv())

//## event notificationReadyEv()
notificationReadyEv::notificationReadyEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(notificationReadyEv)
    setId(notificationReadyEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID notificationReadyEv_SMSWTD_id(4015);
//#]

IMPLEMENT_META_EVENT_P(notificationReadyEv, SMSWTD, SMSWTD, notificationReadyEv())

//## event NotificationReadyEv()
NotificationReadyEv::NotificationReadyEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(NotificationReadyEv)
    setId(NotificationReadyEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID NotificationReadyEv_SMSWTD_id(4016);
//#]

IMPLEMENT_META_EVENT_P(NotificationReadyEv, SMSWTD, SMSWTD, NotificationReadyEv())

//## event userDismissedAlarm()
userDismissedAlarm::userDismissedAlarm(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(userDismissedAlarm)
    setId(userDismissedAlarm_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID userDismissedAlarm_SMSWTD_id(4017);
//#]

IMPLEMENT_META_EVENT_P(userDismissedAlarm, SMSWTD, SMSWTD, userDismissedAlarm())

//## event userDismissedAlarmE()
userDismissedAlarmE::userDismissedAlarmE(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(userDismissedAlarmE)
    setId(userDismissedAlarmE_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID userDismissedAlarmE_SMSWTD_id(4018);
//#]

IMPLEMENT_META_EVENT_P(userDismissedAlarmE, SMSWTD, SMSWTD, userDismissedAlarmE())

//## event userDismissedAlarmEv()
userDismissedAlarmEv::userDismissedAlarmEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(userDismissedAlarmEv)
    setId(userDismissedAlarmEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID userDismissedAlarmEv_SMSWTD_id(4019);
//#]

IMPLEMENT_META_EVENT_P(userDismissedAlarmEv, SMSWTD, SMSWTD, userDismissedAlarmEv())

//## event UserDismissedAlarmEv()
UserDismissedAlarmEv::UserDismissedAlarmEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(UserDismissedAlarmEv)
    setId(UserDismissedAlarmEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID UserDismissedAlarmEv_SMSWTD_id(4020);
//#]

IMPLEMENT_META_EVENT_P(UserDismissedAlarmEv, SMSWTD, SMSWTD, UserDismissedAlarmEv())

//## event userSnoozed()
userSnoozed::userSnoozed(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(userSnoozed)
    setId(userSnoozed_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID userSnoozed_SMSWTD_id(4021);
//#]

IMPLEMENT_META_EVENT_P(userSnoozed, SMSWTD, SMSWTD, userSnoozed())

//## event userSnoozedEv()
userSnoozedEv::userSnoozedEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(userSnoozedEv)
    setId(userSnoozedEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID userSnoozedEv_SMSWTD_id(4022);
//#]

IMPLEMENT_META_EVENT_P(userSnoozedEv, SMSWTD, SMSWTD, userSnoozedEv())

//## event UserSnoozedEv()
UserSnoozedEv::UserSnoozedEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(UserSnoozedEv)
    setId(UserSnoozedEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID UserSnoozedEv_SMSWTD_id(4023);
//#]

IMPLEMENT_META_EVENT_P(UserSnoozedEv, SMSWTD, SMSWTD, UserSnoozedEv())

//## event warningReceived()
warningReceived::warningReceived(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(warningReceived)
    setId(warningReceived_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID warningReceived_SMSWTD_id(4024);
//#]

IMPLEMENT_META_EVENT_P(warningReceived, SMSWTD, SMSWTD, warningReceived())

//## event warningReceivedEv()
warningReceivedEv::warningReceivedEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(warningReceivedEv)
    setId(warningReceivedEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID warningReceivedEv_SMSWTD_id(4025);
//#]

IMPLEMENT_META_EVENT_P(warningReceivedEv, SMSWTD, SMSWTD, warningReceivedEv())

//## event rawDataTransmissionDone()
rawDataTransmissionDone::rawDataTransmissionDone(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(rawDataTransmissionDone)
    setId(rawDataTransmissionDone_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID rawDataTransmissionDone_SMSWTD_id(4002);
//#]

IMPLEMENT_META_EVENT_P(rawDataTransmissionDone, SMSWTD, SMSWTD, rawDataTransmissionDone())

//## event uploadRawDataToDatabase()
uploadRawDataToDatabase::uploadRawDataToDatabase(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(uploadRawDataToDatabase)
    setId(uploadRawDataToDatabase_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID uploadRawDataToDatabase_SMSWTD_id(4003);
//#]

IMPLEMENT_META_EVENT_P(uploadRawDataToDatabase, SMSWTD, SMSWTD, uploadRawDataToDatabase())

//## event receiveAllRawData()
receiveAllRawData::receiveAllRawData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(receiveAllRawData)
    setId(receiveAllRawData_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID receiveAllRawData_SMSWTD_id(4004);
//#]

IMPLEMENT_META_EVENT_P(receiveAllRawData, SMSWTD, SMSWTD, receiveAllRawData())

//## event checkRawData()
checkRawData::checkRawData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(checkRawData)
    setId(checkRawData_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID checkRawData_SMSWTD_id(4005);
//#]

IMPLEMENT_META_EVENT_P(checkRawData, SMSWTD, SMSWTD, checkRawData())

//## event reqRawDataFromSensors()
reqRawDataFromSensors::reqRawDataFromSensors(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqRawDataFromSensors)
    setId(reqRawDataFromSensors_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID reqRawDataFromSensors_SMSWTD_id(4001);
//#]

IMPLEMENT_META_EVENT_P(reqRawDataFromSensors, SMSWTD, SMSWTD, reqRawDataFromSensors())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.cpp
*********************************************************************/
