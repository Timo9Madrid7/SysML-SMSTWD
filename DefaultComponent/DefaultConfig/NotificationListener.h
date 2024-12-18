/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245260
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: NotificationListener
//!	Generated Date	: Wed, 18, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\NotificationListener.h
*********************************************************************/

#ifndef NotificationListener_H
#define NotificationListener_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## package SMSWTD

//## class NotificationListener
class NotificationListener {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedNotificationListener;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    NotificationListener(void);
    
    //## auto_generated
    virtual ~NotificationListener(void);
    
    ////    Operations    ////
    
    //## operation dismissAlarm()
    virtual void dismissAlarm(void);
    
    //## operation getNotifType()
    virtual int getNotifType(void);
    
    //## operation getSeverity()
    virtual unsigned int getSeverity(void);
    
    //## operation indicateCrisisAlarm()
    virtual void indicateCrisisAlarm(void);
    
    //## operation indicateWarningAlarm()
    virtual void indicateWarningAlarm(void);
    
    //## operation resolveAlarm()
    virtual void resolveAlarm(void);
    
    //## operation setNotifType(int)
    virtual void setNotifType(int type);
    
    //## operation showAlarm()
    virtual void showAlarm(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const unsigned int getAlarmSeverity(void) const;
    
    //## auto_generated
    const bool getState(void) const;
    
    //## auto_generated
    void setState(const bool p_state);
    
    ////    Attributes    ////

private :

    unsigned int alarmSeverity;		//## attribute alarmSeverity
    
    char* notifText;		//## attribute notifText
    
    int notifType;		//## attribute notifType
    
    bool state;		//## attribute state

public :

    //## auto_generated
    const char* getNotifText(void) const;
    
    //## auto_generated
    void setAlarmSeverity(const unsigned int p_alarmSeverity);
    
    //## auto_generated
    void setNotifText(char* const p_notifText);
    
    //## auto_generated
    const unsigned int getPrevSeverity(void) const;
    
    //## auto_generated
    void setPrevSeverity(const unsigned int p_prevSeverity);

private :

    unsigned int prevSeverity;		//## attribute prevSeverity
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedNotificationListener : virtual public AOMInstance {
    DECLARE_META(NotificationListener, OMAnimatedNotificationListener)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\NotificationListener.h
*********************************************************************/
