/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ThreatsUI
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\ThreatsUI.h
*********************************************************************/

#ifndef ThreatsUI_H
#define ThreatsUI_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## class ThreatsUI
#include "bool_state_ProxyFlowPropertyInterface.h"
//## classInstance itsContext
#include "Context.h"
//## class ThreatsUI
#include "unsignedint_alarmSeverity_ProxyFlowPropertyInterface.h"
//## classInstance itsWeatherAPIClient
#include "WeatherAPIClient.h"
//## package SMSWTD

//## class ThreatsUI
class ThreatsUI : public OMReactive, public unsignedint_alarmSeverity_ProxyFlowPropertyInterface, public bool_state_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package SMSWTD
    class p_Context_alarmSeverity_C : public unsignedint_alarmSeverity_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Context_alarmSeverity_C(void);
        
        //## auto_generated
        virtual ~p_Context_alarmSeverity_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectThreatsUI(ThreatsUI* part);
        
        //## auto_generated
        unsignedint_alarmSeverity_ProxyFlowPropertyInterface* getItsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        virtual void setAlarmSeverity(unsigned int p_alarmSeverity);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface(unsignedint_alarmSeverity_ProxyFlowPropertyInterface* const p_unsignedint_alarmSeverity_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        unsignedint_alarmSeverity_ProxyFlowPropertyInterface* itsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface;		//## link itsUnsignedint_alarmSeverity_ProxyFlowPropertyInterface
    };
    
    //## package SMSWTD
    class p_Context_state_C : public bool_state_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Context_state_C(void);
        
        //## auto_generated
        virtual ~p_Context_state_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectThreatsUI(ThreatsUI* part);
        
        //## auto_generated
        bool_state_ProxyFlowPropertyInterface* getItsBool_state_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        virtual void setState(bool p_state);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsBool_state_ProxyFlowPropertyInterface(bool_state_ProxyFlowPropertyInterface* const p_bool_state_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        bool_state_ProxyFlowPropertyInterface* itsBool_state_ProxyFlowPropertyInterface;		//## link itsBool_state_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedThreatsUI;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit ThreatsUI(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~ThreatsUI(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setAlarmSeverity(unsigned int p_alarmSeverity);
    
    void setState(bool p_state);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_Context_alarmSeverity_C* getP_Context_alarmSeverity(void) const;
    
    //## auto_generated
    p_Context_alarmSeverity_C* get_p_Context_alarmSeverity(void) const;
    
    //## auto_generated
    p_Context_state_C* getP_Context_state(void) const;
    
    //## auto_generated
    p_Context_state_C* get_p_Context_state(void) const;
    
    //## auto_generated
    const unsigned int getAlarmSeverity(void) const;
    
    //## auto_generated
    const bool getState(void) const;
    
    //## auto_generated
    const Context* getItsContext(void) const;
    
    //## auto_generated
    const WeatherAPIClient* getItsWeatherAPIClient(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initRelations(void);
    
    ////    Attributes    ////

private :

    unsigned int alarmSeverity;		//## attribute alarmSeverity
    
    bool state;		//## attribute state
    
    ////    Relations and components    ////
    
//#[ ignore
    p_Context_alarmSeverity_C p_Context_alarmSeverity;
    
    p_Context_state_C p_Context_state;
//#]

    Context itsContext;		//## classInstance itsContext
    
    WeatherAPIClient itsWeatherAPIClient;		//## classInstance itsWeatherAPIClient
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* const theActiveContext, bool activeInstance);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedThreatsUI : virtual public AOMInstance {
    DECLARE_META(ThreatsUI, OMAnimatedThreatsUI)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ThreatsUI.h
*********************************************************************/
