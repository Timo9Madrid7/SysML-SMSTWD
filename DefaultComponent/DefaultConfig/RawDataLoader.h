/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RawDataLoader
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\RawDataLoader.h
*********************************************************************/

#ifndef RawDataLoader_H
#define RawDataLoader_H

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
//## class RawDataLoader
#include "DataLoader.h"
//## package SMSWTD

//## class RawDataLoader
class RawDataLoader : public OMReactive, public DataLoader {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedRawDataLoader;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit RawDataLoader(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~RawDataLoader(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cancelTimeouts(void);
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // RefetchPeriod:
    //## statechart_method
    inline RhpBoolean RefetchPeriod_IN(void) const;
    
    // RawDataReceivingState:
    //## statechart_method
    inline RhpBoolean RawDataReceivingState_IN(void) const;
    
    //## statechart_method
    void RawDataReceivingState_entDef(void);
    
    // DataTransmissionOngoing:
    //## statechart_method
    inline RhpBoolean DataTransmissionOngoing_IN(void) const;
    
    // DataTransmissionDone:
    //## statechart_method
    inline RhpBoolean DataTransmissionDone_IN(void) const;
    
    // RawDataReadyState:
    //## statechart_method
    inline RhpBoolean RawDataReadyState_IN(void) const;
    
    // RawDataFailureState:
    //## statechart_method
    inline RhpBoolean RawDataFailureState_IN(void) const;
    
    // IdleSate:
    //## statechart_method
    inline RhpBoolean IdleSate_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum RawDataLoader_Enum {
        OMNonState = 0,
        RefetchPeriod = 1,
        RawDataReceivingState = 2,
        DataTransmissionOngoing = 3,
        DataTransmissionDone = 4,
        RawDataReadyState = 5,
        RawDataFailureState = 6,
        IdleSate = 7
    };
//#]

private :

//#[ ignore
    RawDataLoader_Enum rootState_subState;
    
    RawDataLoader_Enum rootState_active;
    
    RawDataLoader_Enum RawDataReceivingState_subState;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedRawDataLoader : public OMAnimatedDataLoader {
    DECLARE_REACTIVE_META(RawDataLoader, OMAnimatedRawDataLoader)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void RefetchPeriod_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void RawDataReceivingState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DataTransmissionOngoing_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DataTransmissionDone_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void RawDataReadyState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void RawDataFailureState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void IdleSate_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean RawDataLoader::rootState_IN(void) const {
    return true;
}

inline RhpBoolean RawDataLoader::RefetchPeriod_IN(void) const {
    return rootState_subState == RefetchPeriod;
}

inline RhpBoolean RawDataLoader::RawDataReceivingState_IN(void) const {
    return rootState_subState == RawDataReceivingState;
}

inline RhpBoolean RawDataLoader::DataTransmissionOngoing_IN(void) const {
    return RawDataReceivingState_subState == DataTransmissionOngoing;
}

inline RhpBoolean RawDataLoader::DataTransmissionDone_IN(void) const {
    return RawDataReceivingState_subState == DataTransmissionDone;
}

inline RhpBoolean RawDataLoader::RawDataReadyState_IN(void) const {
    return rootState_subState == RawDataReadyState;
}

inline RhpBoolean RawDataLoader::RawDataFailureState_IN(void) const {
    return rootState_subState == RawDataFailureState;
}

inline RhpBoolean RawDataLoader::IdleSate_IN(void) const {
    return rootState_subState == IdleSate;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RawDataLoader.h
*********************************************************************/
