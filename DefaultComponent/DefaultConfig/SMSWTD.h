/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Wed, 18, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.h
*********************************************************************/

#ifndef SMSWTD_H
#define SMSWTD_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD_CONTEXT.h"
//## auto_generated
#include <event.h>
//## auto_generated
class BackendAPIClient;

//## auto_generated
class CarrierNotificationListener;

//## link itsCommunicationInfrastructure
class CommunicationInfrastructure;

//## auto_generated
class Context;

//## auto_generated
class Dashboard;

//## link itsDataStorage
class DataStorage;

//## auto_generated
class GUI;

//## auto_generated
class LocationChangeUI;

//## auto_generated
class LocationProvider;

//## auto_generated
class NotificationAPIClient;

//## auto_generated
class NotificationListener;

//## auto_generated
class NotificationUI;

//## link itsProcessors
class Processors;

//## auto_generated
class PushNotificationListener;

//## link itsSensors
class Sensors;

//## auto_generated
class ThreatsUI;

//## auto_generated
class WeatherAPIClient;

//## auto_generated
class WeatherForcastUI;

//## package SMSWTD::ANALYSIS::SMSWTD_CONTEXT

//## class SMSWTD
class SMSWTD {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSMSWTD;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SMSWTD(void);
    
    //## auto_generated
    ~SMSWTD(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const CommunicationInfrastructure* getItsCommunicationInfrastructure(void) const;
    
    //## auto_generated
    void setItsCommunicationInfrastructure(CommunicationInfrastructure* const p_CommunicationInfrastructure);
    
    //## auto_generated
    const DataStorage* getItsDataStorage(void) const;
    
    //## auto_generated
    void setItsDataStorage(DataStorage* const p_DataStorage);
    
    //## auto_generated
    const DataStorage* getItsDataStorage_1(void) const;
    
    //## auto_generated
    void setItsDataStorage_1(DataStorage* const p_DataStorage);
    
    //## auto_generated
    const Processors* getItsProcessors(void) const;
    
    //## auto_generated
    void setItsProcessors(Processors* const p_Processors);
    
    //## auto_generated
    const Sensors* getItsSensors(void) const;
    
    //## auto_generated
    void setItsSensors(Sensors* const p_Sensors);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    CommunicationInfrastructure* itsCommunicationInfrastructure;		//## link itsCommunicationInfrastructure
    
    DataStorage* itsDataStorage;		//## link itsDataStorage
    
    DataStorage* itsDataStorage_1;		//## link itsDataStorage_1
    
    Processors* itsProcessors;		//## link itsProcessors
    
    Sensors* itsSensors;		//## link itsSensors
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCommunicationInfrastructure(CommunicationInfrastructure* const p_CommunicationInfrastructure);
    
    //## auto_generated
    void _setItsCommunicationInfrastructure(CommunicationInfrastructure* const p_CommunicationInfrastructure);
    
    //## auto_generated
    void _clearItsCommunicationInfrastructure(void);
    
    //## auto_generated
    void __setItsDataStorage(DataStorage* const p_DataStorage);
    
    //## auto_generated
    void _setItsDataStorage(DataStorage* const p_DataStorage);
    
    //## auto_generated
    void _clearItsDataStorage(void);
    
    //## auto_generated
    void __setItsDataStorage_1(DataStorage* const p_DataStorage);
    
    //## auto_generated
    void _setItsDataStorage_1(DataStorage* const p_DataStorage);
    
    //## auto_generated
    void _clearItsDataStorage_1(void);
    
    //## auto_generated
    void __setItsProcessors(Processors* const p_Processors);
    
    //## auto_generated
    void _setItsProcessors(Processors* const p_Processors);
    
    //## auto_generated
    void _clearItsProcessors(void);
    
    //## auto_generated
    void __setItsSensors(Sensors* const p_Sensors);
    
    //## auto_generated
    void _setItsSensors(Sensors* const p_Sensors);
    
    //## auto_generated
    void _clearItsSensors(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSMSWTD : virtual public AOMInstance {
    DECLARE_META(SMSWTD, OMAnimatedSMSWTD)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

//## event alarmReceivedEv()
class alarmReceivedEv : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedalarmReceivedEv;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    alarmReceivedEv(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedalarmReceivedEv : virtual public AOMEvent {
    DECLARE_META_EVENT(alarmReceivedEv)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID alarmReceivedEv_SMSWTD_id;
//#]

//## event alarmResolvedEv()
class alarmResolvedEv : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedalarmResolvedEv;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    alarmResolvedEv(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedalarmResolvedEv : virtual public AOMEvent {
    DECLARE_META_EVENT(alarmResolvedEv)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID alarmResolvedEv_SMSWTD_id;
//#]

//## event alarmResolved()
class alarmResolved : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedalarmResolved;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    alarmResolved(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedalarmResolved : virtual public AOMEvent {
    DECLARE_META_EVENT(alarmResolved)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID alarmResolved_SMSWTD_id;
//#]

//## event crisisResolvedEv()
class crisisResolvedEv : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedcrisisResolvedEv;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    crisisResolvedEv(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedcrisisResolvedEv : virtual public AOMEvent {
    DECLARE_META_EVENT(crisisResolvedEv)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID crisisResolvedEv_SMSWTD_id;
//#]

//## event alarmRec()
class alarmRec : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedalarmRec;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    alarmRec(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedalarmRec : virtual public AOMEvent {
    DECLARE_META_EVENT(alarmRec)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID alarmRec_SMSWTD_id;
//#]

//## event userSnoozed()
class userSnoozed : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimateduserSnoozed;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    userSnoozed(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimateduserSnoozed : virtual public AOMEvent {
    DECLARE_META_EVENT(userSnoozed)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID userSnoozed_SMSWTD_id;
//#]

//## event crisisReceived()
class crisisReceived : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedcrisisReceived;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    crisisReceived(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedcrisisReceived : virtual public AOMEvent {
    DECLARE_META_EVENT(crisisReceived)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID crisisReceived_SMSWTD_id;
//#]

//## event warningReceived()
class warningReceived : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedwarningReceived;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    warningReceived(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedwarningReceived : virtual public AOMEvent {
    DECLARE_META_EVENT(warningReceived)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID warningReceived_SMSWTD_id;
//#]

//## event userDismissedAlarm()
class userDismissedAlarm : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimateduserDismissedAlarm;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    userDismissedAlarm(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimateduserDismissedAlarm : virtual public AOMEvent {
    DECLARE_META_EVENT(userDismissedAlarm)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID userDismissedAlarm_SMSWTD_id;
//#]

//## event userDismissedAlarmE()
class userDismissedAlarmE : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimateduserDismissedAlarmE;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    userDismissedAlarmE(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimateduserDismissedAlarmE : virtual public AOMEvent {
    DECLARE_META_EVENT(userDismissedAlarmE)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID userDismissedAlarmE_SMSWTD_id;
//#]

//## event userDismissedAlarmEv()
class userDismissedAlarmEv : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimateduserDismissedAlarmEv;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    userDismissedAlarmEv(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimateduserDismissedAlarmEv : virtual public AOMEvent {
    DECLARE_META_EVENT(userDismissedAlarmEv)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID userDismissedAlarmEv_SMSWTD_id;
//#]

//## event crisisReceivedEv()
class crisisReceivedEv : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedcrisisReceivedEv;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    crisisReceivedEv(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedcrisisReceivedEv : virtual public AOMEvent {
    DECLARE_META_EVENT(crisisReceivedEv)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID crisisReceivedEv_SMSWTD_id;
//#]

//## event warningReceivedEv()
class warningReceivedEv : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedwarningReceivedEv;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    warningReceivedEv(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedwarningReceivedEv : virtual public AOMEvent {
    DECLARE_META_EVENT(warningReceivedEv)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID warningReceivedEv_SMSWTD_id;
//#]

//## event userSnoozedEv()
class userSnoozedEv : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimateduserSnoozedEv;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    userSnoozedEv(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimateduserSnoozedEv : virtual public AOMEvent {
    DECLARE_META_EVENT(userSnoozedEv)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID userSnoozedEv_SMSWTD_id;
//#]

//## event notificationReadyEv()
class notificationReadyEv : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatednotificationReadyEv;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    notificationReadyEv(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatednotificationReadyEv : virtual public AOMEvent {
    DECLARE_META_EVENT(notificationReadyEv)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID notificationReadyEv_SMSWTD_id;
//#]

//## event AlarmReceivedEv()
class AlarmReceivedEv : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAlarmReceivedEv;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AlarmReceivedEv(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAlarmReceivedEv : virtual public AOMEvent {
    DECLARE_META_EVENT(AlarmReceivedEv)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID AlarmReceivedEv_SMSWTD_id;
//#]

//## event AlarmResolvedEv()
class AlarmResolvedEv : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAlarmResolvedEv;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AlarmResolvedEv(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAlarmResolvedEv : virtual public AOMEvent {
    DECLARE_META_EVENT(AlarmResolvedEv)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID AlarmResolvedEv_SMSWTD_id;
//#]

//## event NotificationReadyEv()
class NotificationReadyEv : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedNotificationReadyEv;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    NotificationReadyEv(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedNotificationReadyEv : virtual public AOMEvent {
    DECLARE_META_EVENT(NotificationReadyEv)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID NotificationReadyEv_SMSWTD_id;
//#]

//## event UserDismissedAlarmEv()
class UserDismissedAlarmEv : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUserDismissedAlarmEv;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UserDismissedAlarmEv(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUserDismissedAlarmEv : virtual public AOMEvent {
    DECLARE_META_EVENT(UserDismissedAlarmEv)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID UserDismissedAlarmEv_SMSWTD_id;
//#]

//## event UserSnoozedEv()
class UserSnoozedEv : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUserSnoozedEv;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UserSnoozedEv(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUserSnoozedEv : virtual public AOMEvent {
    DECLARE_META_EVENT(UserSnoozedEv)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID UserSnoozedEv_SMSWTD_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.h
*********************************************************************/
