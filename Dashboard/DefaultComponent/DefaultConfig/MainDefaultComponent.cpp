/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "BACKEND_UCS.h"
//## auto_generated
#include "COMMUNICATION_UCS.h"
//## auto_generated
#include "FRONTEND_UCS.h"
//## auto_generated
#include "SMSWTD.h"
//## auto_generated
#include "SMSWTD_CONTEXT.h"
//## auto_generated
#include "DataLoader.h"
//## auto_generated
#include "NotificationListener.h"
//## auto_generated
#include "PushNotificationListener.h"
//## auto_generated
#include "RawDataLoader.h"
DefaultComponent::DefaultComponent(void) {
    SMSWTD_initRelations();
    (void) SMSWTD_startBehavior();
}

RhpInteger main( void) {
    RhpInteger status = 0;
    try {
        if(OXF::initialize(0,NULL))
            {
                DataLoader p_DataLoader;
                NotificationListener p_NotificationListener;
                PushNotificationListener p_PushNotificationListener;
                p_PushNotificationListener.setShouldDelete(false);
                RawDataLoader p_RawDataLoader;
                p_RawDataLoader.setShouldDelete(false);
                DefaultComponent initializer_DefaultComponent;
                (void) p_PushNotificationListener.startBehavior();
                (void) p_RawDataLoader.startBehavior();
                //#[ configuration DefaultComponent::DefaultConfig 
                //#]
                OXF::start();
                status = 0;
            }
        else
            {
                status = 1;
            }
    }
    catch (...)
    {
        status = 0;
    }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/
