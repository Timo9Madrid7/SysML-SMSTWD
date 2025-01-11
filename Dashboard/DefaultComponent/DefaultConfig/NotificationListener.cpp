/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: NotificationListener
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\NotificationListener.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "NotificationListener.h"
//#[ ignore
#define SMSWTD_NotificationListener_NotificationListener_SERIALIZE OM_NO_OP

#define SMSWTD_NotificationListener_dismissAlarm_SERIALIZE OM_NO_OP

#define SMSWTD_NotificationListener_getNotifType_SERIALIZE OM_NO_OP

#define SMSWTD_NotificationListener_getSeverity_SERIALIZE OM_NO_OP

#define SMSWTD_NotificationListener_indicateCrisisAlarm_SERIALIZE OM_NO_OP

#define SMSWTD_NotificationListener_indicateWarningAlarm_SERIALIZE OM_NO_OP

#define SMSWTD_NotificationListener_resolveAlarm_SERIALIZE OM_NO_OP

#define SMSWTD_NotificationListener_setNotifType_SERIALIZE aomsmethod->addAttribute("type", x2String(type));

#define SMSWTD_NotificationListener_showAlarm_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class NotificationListener
NotificationListener::NotificationListener(void) : alarmSeverity(0), notifType(-1), state(false), prevSeverity(0) {
    NOTIFY_CONSTRUCTOR(NotificationListener, NotificationListener(), 0, SMSWTD_NotificationListener_NotificationListener_SERIALIZE);
}

NotificationListener::~NotificationListener(void) {
    NOTIFY_DESTRUCTOR(~NotificationListener, true);
}

void NotificationListener::dismissAlarm(void) {
    NOTIFY_OPERATION(dismissAlarm, dismissAlarm(), 0, SMSWTD_NotificationListener_dismissAlarm_SERIALIZE);
    //#[ operation dismissAlarm()
    std::cout << "NotificationListener - dismissAlarm\n";
    state = true;
    notifText = "Alarm Dismissed";
    //#]
}

int NotificationListener::getNotifType(void) {
    NOTIFY_OPERATION(getNotifType, getNotifType(), 0, SMSWTD_NotificationListener_getNotifType_SERIALIZE);
    //#[ operation getNotifType()
    return notifType;
    //#]
}

unsigned int NotificationListener::getSeverity(void) {
    NOTIFY_OPERATION(getSeverity, getSeverity(), 0, SMSWTD_NotificationListener_getSeverity_SERIALIZE);
    //#[ operation getSeverity()
    return alarmSeverity;
    //#]
}

void NotificationListener::indicateCrisisAlarm(void) {
    NOTIFY_OPERATION(indicateCrisisAlarm, indicateCrisisAlarm(), 0, SMSWTD_NotificationListener_indicateCrisisAlarm_SERIALIZE);
    //#[ operation indicateCrisisAlarm()
    std::cout << "NotificationListener - alarm in crisis level\n";
    //#]
}

void NotificationListener::indicateWarningAlarm(void) {
    NOTIFY_OPERATION(indicateWarningAlarm, indicateWarningAlarm(), 0, SMSWTD_NotificationListener_indicateWarningAlarm_SERIALIZE);
    //#[ operation indicateWarningAlarm()
    std::cout << "NotificationListener - alarm in warning level\n";
    //#]
}

void NotificationListener::resolveAlarm(void) {
    NOTIFY_OPERATION(resolveAlarm, resolveAlarm(), 0, SMSWTD_NotificationListener_resolveAlarm_SERIALIZE);
    //#[ operation resolveAlarm()
    std::cout << "NotificationListener - resolveAlarm\n";
    state = false;
    notifText = "Alarm Resolved";
    prevSeverity = alarmSeverity;
    alarmSeverity = 0;
    //#]
}

void NotificationListener::setNotifType(int type) {
    NOTIFY_OPERATION(setNotifType, setNotifType(int), 1, SMSWTD_NotificationListener_setNotifType_SERIALIZE);
    //#[ operation setNotifType(int)
    std::cout << "NotificationListener - setNotifType\n";
    notifType = type;
    //#]
}

void NotificationListener::showAlarm(void) {
    NOTIFY_OPERATION(showAlarm, showAlarm(), 0, SMSWTD_NotificationListener_showAlarm_SERIALIZE);
    //#[ operation showAlarm()
    std::cout << "NotificationListener - showAlarm\n";
    state = true;
    
    if (prevSeverity >= 2) {
    	alarmSeverity = 1;
    } else {
    	alarmSeverity = 2;
    }
    
    //#]
}

const unsigned int NotificationListener::getAlarmSeverity(void) const {
    return alarmSeverity;
}

const bool NotificationListener::getState(void) const {
    return state;
}

void NotificationListener::setState(const bool p_state) {
    state = p_state;
    NOTIFY_SET_OPERATION;
}

const char* NotificationListener::getNotifText(void) const {
    return notifText;
}

const unsigned int NotificationListener::getPrevSeverity(void) const {
    return prevSeverity;
}

void NotificationListener::setAlarmSeverity(const unsigned int p_alarmSeverity) {
    alarmSeverity = p_alarmSeverity;
    NOTIFY_SET_OPERATION;
}

void NotificationListener::setNotifText(char* const p_notifText) {
    notifText = p_notifText;
    NOTIFY_SET_OPERATION;
}

void NotificationListener::setPrevSeverity(const unsigned int p_prevSeverity) {
    prevSeverity = p_prevSeverity;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedNotificationListener::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("notifType", x2String(myReal->notifType));
    aomsAttributes->addAttribute("alarmSeverity", x2String(myReal->alarmSeverity));
    aomsAttributes->addAttribute("state", x2String(myReal->state));
    aomsAttributes->addAttribute("notifText", x2String(myReal->notifText));
    aomsAttributes->addAttribute("prevSeverity", x2String(myReal->prevSeverity));
}
//#]

IMPLEMENT_META_P(NotificationListener, SMSWTD, SMSWTD, false, OMAnimatedNotificationListener)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\NotificationListener.cpp
*********************************************************************/
