/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Wed, 18, Dec 2024  
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
//## auto_generated
#include "BackendAPIClient.h"
//## auto_generated
#include "CarrierNotificationListener.h"
//## auto_generated
#include "Context.h"
//## auto_generated
#include "Dashboard.h"
//## auto_generated
#include "GUI.h"
//## auto_generated
#include "LocationChangeUI.h"
//## auto_generated
#include "LocationProvider.h"
//## auto_generated
#include "NotificationAPIClient.h"
//## auto_generated
#include "NotificationListener.h"
//## auto_generated
#include "NotificationUI.h"
//## auto_generated
#include "PushNotificationListener.h"
//## auto_generated
#include "ThreatsUI.h"
//## auto_generated
#include "WeatherAPIClient.h"
//## auto_generated
#include "WeatherForcastUI.h"
//#[ ignore
#define alarmReceivedEv_SERIALIZE OM_NO_OP

#define alarmReceivedEv_UNSERIALIZE OM_NO_OP

#define alarmReceivedEv_CONSTRUCTOR alarmReceivedEv()

#define alarmResolvedEv_SERIALIZE OM_NO_OP

#define alarmResolvedEv_UNSERIALIZE OM_NO_OP

#define alarmResolvedEv_CONSTRUCTOR alarmResolvedEv()

#define alarmResolved_SERIALIZE OM_NO_OP

#define alarmResolved_UNSERIALIZE OM_NO_OP

#define alarmResolved_CONSTRUCTOR alarmResolved()

#define crisisResolvedEv_SERIALIZE OM_NO_OP

#define crisisResolvedEv_UNSERIALIZE OM_NO_OP

#define crisisResolvedEv_CONSTRUCTOR crisisResolvedEv()

#define alarmRec_SERIALIZE OM_NO_OP

#define alarmRec_UNSERIALIZE OM_NO_OP

#define alarmRec_CONSTRUCTOR alarmRec()

#define userSnoozed_SERIALIZE OM_NO_OP

#define userSnoozed_UNSERIALIZE OM_NO_OP

#define userSnoozed_CONSTRUCTOR userSnoozed()

#define crisisReceived_SERIALIZE OM_NO_OP

#define crisisReceived_UNSERIALIZE OM_NO_OP

#define crisisReceived_CONSTRUCTOR crisisReceived()

#define warningReceived_SERIALIZE OM_NO_OP

#define warningReceived_UNSERIALIZE OM_NO_OP

#define warningReceived_CONSTRUCTOR warningReceived()

#define userDismissedAlarm_SERIALIZE OM_NO_OP

#define userDismissedAlarm_UNSERIALIZE OM_NO_OP

#define userDismissedAlarm_CONSTRUCTOR userDismissedAlarm()

#define userDismissedAlarmE_SERIALIZE OM_NO_OP

#define userDismissedAlarmE_UNSERIALIZE OM_NO_OP

#define userDismissedAlarmE_CONSTRUCTOR userDismissedAlarmE()

#define userDismissedAlarmEv_SERIALIZE OM_NO_OP

#define userDismissedAlarmEv_UNSERIALIZE OM_NO_OP

#define userDismissedAlarmEv_CONSTRUCTOR userDismissedAlarmEv()

#define crisisReceivedEv_SERIALIZE OM_NO_OP

#define crisisReceivedEv_UNSERIALIZE OM_NO_OP

#define crisisReceivedEv_CONSTRUCTOR crisisReceivedEv()

#define warningReceivedEv_SERIALIZE OM_NO_OP

#define warningReceivedEv_UNSERIALIZE OM_NO_OP

#define warningReceivedEv_CONSTRUCTOR warningReceivedEv()

#define userSnoozedEv_SERIALIZE OM_NO_OP

#define userSnoozedEv_UNSERIALIZE OM_NO_OP

#define userSnoozedEv_CONSTRUCTOR userSnoozedEv()

#define notificationReadyEv_SERIALIZE OM_NO_OP

#define notificationReadyEv_UNSERIALIZE OM_NO_OP

#define notificationReadyEv_CONSTRUCTOR notificationReadyEv()

#define AlarmReceivedEv_SERIALIZE OM_NO_OP

#define AlarmReceivedEv_UNSERIALIZE OM_NO_OP

#define AlarmReceivedEv_CONSTRUCTOR AlarmReceivedEv()

#define AlarmResolvedEv_SERIALIZE OM_NO_OP

#define AlarmResolvedEv_UNSERIALIZE OM_NO_OP

#define AlarmResolvedEv_CONSTRUCTOR AlarmResolvedEv()

#define NotificationReadyEv_SERIALIZE OM_NO_OP

#define NotificationReadyEv_UNSERIALIZE OM_NO_OP

#define NotificationReadyEv_CONSTRUCTOR NotificationReadyEv()

#define UserDismissedAlarmEv_SERIALIZE OM_NO_OP

#define UserDismissedAlarmEv_UNSERIALIZE OM_NO_OP

#define UserDismissedAlarmEv_CONSTRUCTOR UserDismissedAlarmEv()

#define UserSnoozedEv_SERIALIZE OM_NO_OP

#define UserSnoozedEv_UNSERIALIZE OM_NO_OP

#define UserSnoozedEv_CONSTRUCTOR UserSnoozedEv()

#define SMSWTD_ANALYSIS_SMSWTD_CONTEXT_SMSWTD_SMSWTD_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## class SMSWTD
#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(SMSWTD, SMSWTD)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
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

#ifdef _OMINSTRUMENT
//#[ ignore
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

IMPLEMENT_META_P(SMSWTD, SMSWTD_ANALYSIS_SMSWTD_CONTEXT, SMSWTD::ANALYSIS::SMSWTD_CONTEXT, false, OMAnimatedSMSWTD)
#endif // _OMINSTRUMENT

//## event alarmReceivedEv()
alarmReceivedEv::alarmReceivedEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(alarmReceivedEv)
    setId(alarmReceivedEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID alarmReceivedEv_SMSWTD_id(4001);
//#]

IMPLEMENT_META_EVENT_P(alarmReceivedEv, SMSWTD, SMSWTD, alarmReceivedEv())

//## event alarmResolvedEv()
alarmResolvedEv::alarmResolvedEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(alarmResolvedEv)
    setId(alarmResolvedEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID alarmResolvedEv_SMSWTD_id(4002);
//#]

IMPLEMENT_META_EVENT_P(alarmResolvedEv, SMSWTD, SMSWTD, alarmResolvedEv())

//## event alarmResolved()
alarmResolved::alarmResolved(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(alarmResolved)
    setId(alarmResolved_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID alarmResolved_SMSWTD_id(4003);
//#]

IMPLEMENT_META_EVENT_P(alarmResolved, SMSWTD, SMSWTD, alarmResolved())

//## event crisisResolvedEv()
crisisResolvedEv::crisisResolvedEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(crisisResolvedEv)
    setId(crisisResolvedEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID crisisResolvedEv_SMSWTD_id(4004);
//#]

IMPLEMENT_META_EVENT_P(crisisResolvedEv, SMSWTD, SMSWTD, crisisResolvedEv())

//## event alarmRec()
alarmRec::alarmRec(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(alarmRec)
    setId(alarmRec_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID alarmRec_SMSWTD_id(4005);
//#]

IMPLEMENT_META_EVENT_P(alarmRec, SMSWTD, SMSWTD, alarmRec())

//## event userSnoozed()
userSnoozed::userSnoozed(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(userSnoozed)
    setId(userSnoozed_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID userSnoozed_SMSWTD_id(4006);
//#]

IMPLEMENT_META_EVENT_P(userSnoozed, SMSWTD, SMSWTD, userSnoozed())

//## event crisisReceived()
crisisReceived::crisisReceived(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(crisisReceived)
    setId(crisisReceived_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID crisisReceived_SMSWTD_id(4007);
//#]

IMPLEMENT_META_EVENT_P(crisisReceived, SMSWTD, SMSWTD, crisisReceived())

//## event warningReceived()
warningReceived::warningReceived(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(warningReceived)
    setId(warningReceived_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID warningReceived_SMSWTD_id(4008);
//#]

IMPLEMENT_META_EVENT_P(warningReceived, SMSWTD, SMSWTD, warningReceived())

//## event userDismissedAlarm()
userDismissedAlarm::userDismissedAlarm(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(userDismissedAlarm)
    setId(userDismissedAlarm_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID userDismissedAlarm_SMSWTD_id(4009);
//#]

IMPLEMENT_META_EVENT_P(userDismissedAlarm, SMSWTD, SMSWTD, userDismissedAlarm())

//## event userDismissedAlarmE()
userDismissedAlarmE::userDismissedAlarmE(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(userDismissedAlarmE)
    setId(userDismissedAlarmE_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID userDismissedAlarmE_SMSWTD_id(4010);
//#]

IMPLEMENT_META_EVENT_P(userDismissedAlarmE, SMSWTD, SMSWTD, userDismissedAlarmE())

//## event userDismissedAlarmEv()
userDismissedAlarmEv::userDismissedAlarmEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(userDismissedAlarmEv)
    setId(userDismissedAlarmEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID userDismissedAlarmEv_SMSWTD_id(4011);
//#]

IMPLEMENT_META_EVENT_P(userDismissedAlarmEv, SMSWTD, SMSWTD, userDismissedAlarmEv())

//## event crisisReceivedEv()
crisisReceivedEv::crisisReceivedEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(crisisReceivedEv)
    setId(crisisReceivedEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID crisisReceivedEv_SMSWTD_id(4012);
//#]

IMPLEMENT_META_EVENT_P(crisisReceivedEv, SMSWTD, SMSWTD, crisisReceivedEv())

//## event warningReceivedEv()
warningReceivedEv::warningReceivedEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(warningReceivedEv)
    setId(warningReceivedEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID warningReceivedEv_SMSWTD_id(4013);
//#]

IMPLEMENT_META_EVENT_P(warningReceivedEv, SMSWTD, SMSWTD, warningReceivedEv())

//## event userSnoozedEv()
userSnoozedEv::userSnoozedEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(userSnoozedEv)
    setId(userSnoozedEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID userSnoozedEv_SMSWTD_id(4014);
//#]

IMPLEMENT_META_EVENT_P(userSnoozedEv, SMSWTD, SMSWTD, userSnoozedEv())

//## event notificationReadyEv()
notificationReadyEv::notificationReadyEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(notificationReadyEv)
    setId(notificationReadyEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID notificationReadyEv_SMSWTD_id(4015);
//#]

IMPLEMENT_META_EVENT_P(notificationReadyEv, SMSWTD, SMSWTD, notificationReadyEv())

//## event AlarmReceivedEv()
AlarmReceivedEv::AlarmReceivedEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(AlarmReceivedEv)
    setId(AlarmReceivedEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID AlarmReceivedEv_SMSWTD_id(4016);
//#]

IMPLEMENT_META_EVENT_P(AlarmReceivedEv, SMSWTD, SMSWTD, AlarmReceivedEv())

//## event AlarmResolvedEv()
AlarmResolvedEv::AlarmResolvedEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(AlarmResolvedEv)
    setId(AlarmResolvedEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID AlarmResolvedEv_SMSWTD_id(4017);
//#]

IMPLEMENT_META_EVENT_P(AlarmResolvedEv, SMSWTD, SMSWTD, AlarmResolvedEv())

//## event NotificationReadyEv()
NotificationReadyEv::NotificationReadyEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(NotificationReadyEv)
    setId(NotificationReadyEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID NotificationReadyEv_SMSWTD_id(4018);
//#]

IMPLEMENT_META_EVENT_P(NotificationReadyEv, SMSWTD, SMSWTD, NotificationReadyEv())

//## event UserDismissedAlarmEv()
UserDismissedAlarmEv::UserDismissedAlarmEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(UserDismissedAlarmEv)
    setId(UserDismissedAlarmEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID UserDismissedAlarmEv_SMSWTD_id(4019);
//#]

IMPLEMENT_META_EVENT_P(UserDismissedAlarmEv, SMSWTD, SMSWTD, UserDismissedAlarmEv())

//## event UserSnoozedEv()
UserSnoozedEv::UserSnoozedEv(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(UserSnoozedEv)
    setId(UserSnoozedEv_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID UserSnoozedEv_SMSWTD_id(4020);
//#]

IMPLEMENT_META_EVENT_P(UserSnoozedEv, SMSWTD, SMSWTD, UserSnoozedEv())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.cpp
*********************************************************************/
