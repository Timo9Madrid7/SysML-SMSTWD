/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RawDataLoader
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\RawDataLoader.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "RawDataLoader.h"
//#[ ignore
#define SMSWTD_RawDataLoader_RawDataLoader_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class RawDataLoader
RawDataLoader::RawDataLoader(IOxfActive* const theActiveContext) : OMReactive(), DataLoader() {
    NOTIFY_REACTIVE_CONSTRUCTOR(RawDataLoader, RawDataLoader(), 0, SMSWTD_RawDataLoader_RawDataLoader_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

RawDataLoader::~RawDataLoader(void) {
    NOTIFY_DESTRUCTOR(~RawDataLoader, false);
    cancelTimeouts();
}

bool RawDataLoader::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

bool RawDataLoader::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void RawDataLoader::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    RawDataReceivingState_subState = OMNonState;
    rootState_timeout = NULL;
}

void RawDataLoader::cancelTimeouts(void) {
    cancel(rootState_timeout);
}

void RawDataLoader::RawDataReceivingState_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.RawDataReceivingState");
    rootState_subState = RawDataReceivingState;
    NOTIFY_TRANSITION_STARTED("5");
    NOTIFY_STATE_ENTERED("ROOT.RawDataReceivingState.DataTransmissionOngoing");
    RawDataReceivingState_subState = DataTransmissionOngoing;
    rootState_active = DataTransmissionOngoing;
    NOTIFY_TRANSITION_TERMINATED("5");
}

void RawDataLoader::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.IdleSate");
        rootState_subState = IdleSate;
        rootState_active = IdleSate;
        //#[ state IdleSate.(Entry) 
        clearData();
        //#]
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus RawDataLoader::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State IdleSate
        case IdleSate:
        {
            if(IS_EVENT_TYPE_OF(reqRawDataFromSensors_SMSWTD_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.IdleSate");
                    //#[ transition 10 
                    getData("sensors");
                    //#]
                    RawDataReceivingState_entDef();
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State DataTransmissionOngoing
        case DataTransmissionOngoing:
        {
            if(IS_EVENT_TYPE_OF(receiveAllRawData_SMSWTD_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    NOTIFY_STATE_EXITED("ROOT.RawDataReceivingState.DataTransmissionOngoing");
                    NOTIFY_STATE_ENTERED("ROOT.RawDataReceivingState.DataTransmissionDone");
                    RawDataReceivingState_subState = DataTransmissionDone;
                    rootState_active = DataTransmissionDone;
                    //#[ state RawDataReceivingState.DataTransmissionDone.(Entry) 
                    //simulate checing failure
                    isDataOk = !isDataOk;
                    if (isDataOk) {
                    	dataBuffer = "<valid_data_from_sensors>";
                    } else {
                    	dataBuffer = "<invalid_data_from_sensors>";
                    }
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State DataTransmissionDone
        case DataTransmissionDone:
        {
            if(IS_EVENT_TYPE_OF(checkRawData_SMSWTD_id) == 1)
                {
                    //## transition 6 
                    if(checkData())
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            NOTIFY_TRANSITION_STARTED("6");
                            switch (RawDataReceivingState_subState) {
                                // State DataTransmissionOngoing
                                case DataTransmissionOngoing:
                                {
                                    NOTIFY_STATE_EXITED("ROOT.RawDataReceivingState.DataTransmissionOngoing");
                                }
                                break;
                                // State DataTransmissionDone
                                case DataTransmissionDone:
                                {
                                    NOTIFY_STATE_EXITED("ROOT.RawDataReceivingState.DataTransmissionDone");
                                }
                                break;
                                default:
                                    break;
                            }
                            RawDataReceivingState_subState = OMNonState;
                            NOTIFY_STATE_EXITED("ROOT.RawDataReceivingState");
                            NOTIFY_STATE_ENTERED("ROOT.RawDataReadyState");
                            rootState_subState = RawDataReadyState;
                            rootState_active = RawDataReadyState;
                            //#[ state RawDataReadyState.(Entry) 
                            setData();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("6");
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            NOTIFY_TRANSITION_STARTED("7");
                            switch (RawDataReceivingState_subState) {
                                // State DataTransmissionOngoing
                                case DataTransmissionOngoing:
                                {
                                    NOTIFY_STATE_EXITED("ROOT.RawDataReceivingState.DataTransmissionOngoing");
                                }
                                break;
                                // State DataTransmissionDone
                                case DataTransmissionDone:
                                {
                                    NOTIFY_STATE_EXITED("ROOT.RawDataReceivingState.DataTransmissionDone");
                                }
                                break;
                                default:
                                    break;
                            }
                            RawDataReceivingState_subState = OMNonState;
                            NOTIFY_STATE_EXITED("ROOT.RawDataReceivingState");
                            NOTIFY_STATE_ENTERED("ROOT.RawDataFailureState");
                            rootState_subState = RawDataFailureState;
                            rootState_active = RawDataFailureState;
                            //#[ state RawDataFailureState.(Entry) 
                            clearDataBuffer();
                            //#]
                            rootState_timeout = scheduleTimeout(2000, "ROOT.RawDataFailureState");
                            NOTIFY_TRANSITION_TERMINATED("7");
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State RawDataReadyState
        case RawDataReadyState:
        {
            if(IS_EVENT_TYPE_OF(uploadRawDataToDatabase_SMSWTD_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    NOTIFY_STATE_EXITED("ROOT.RawDataReadyState");
                    //#[ transition 8 
                    forwardData();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.IdleSate");
                    rootState_subState = IdleSate;
                    rootState_active = IdleSate;
                    //#[ state IdleSate.(Entry) 
                    clearData();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
        }
        break;
        // State RawDataFailureState
        case RawDataFailureState:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.RawDataFailureState");
                            NOTIFY_STATE_ENTERED("ROOT.RefetchPeriod");
                            pushNullTransition();
                            rootState_subState = RefetchPeriod;
                            rootState_active = RefetchPeriod;
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case RefetchPeriod:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.RefetchPeriod");
                    //#[ transition 10 
                    getData("sensors");
                    //#]
                    RawDataReceivingState_entDef();
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedRawDataLoader::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedDataLoader::serializeAttributes(aomsAttributes);
}

void OMAnimatedRawDataLoader::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedDataLoader::serializeRelations(aomsRelations);
}

void OMAnimatedRawDataLoader::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case RawDataLoader::IdleSate:
        {
            IdleSate_serializeStates(aomsState);
        }
        break;
        case RawDataLoader::RawDataReceivingState:
        {
            RawDataReceivingState_serializeStates(aomsState);
        }
        break;
        case RawDataLoader::RawDataReadyState:
        {
            RawDataReadyState_serializeStates(aomsState);
        }
        break;
        case RawDataLoader::RawDataFailureState:
        {
            RawDataFailureState_serializeStates(aomsState);
        }
        break;
        case RawDataLoader::RefetchPeriod:
        {
            RefetchPeriod_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedRawDataLoader::RefetchPeriod_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.RefetchPeriod");
}

void OMAnimatedRawDataLoader::RawDataReceivingState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.RawDataReceivingState");
    switch (myReal->RawDataReceivingState_subState) {
        case RawDataLoader::DataTransmissionOngoing:
        {
            DataTransmissionOngoing_serializeStates(aomsState);
        }
        break;
        case RawDataLoader::DataTransmissionDone:
        {
            DataTransmissionDone_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedRawDataLoader::DataTransmissionOngoing_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.RawDataReceivingState.DataTransmissionOngoing");
}

void OMAnimatedRawDataLoader::DataTransmissionDone_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.RawDataReceivingState.DataTransmissionDone");
}

void OMAnimatedRawDataLoader::RawDataReadyState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.RawDataReadyState");
}

void OMAnimatedRawDataLoader::RawDataFailureState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.RawDataFailureState");
}

void OMAnimatedRawDataLoader::IdleSate_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.IdleSate");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(RawDataLoader, SMSWTD, false, DataLoader, OMAnimatedDataLoader, OMAnimatedRawDataLoader)

OMINIT_SUPERCLASS(DataLoader, OMAnimatedDataLoader)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RawDataLoader.cpp
*********************************************************************/
