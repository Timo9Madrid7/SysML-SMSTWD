/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MonitorSystem
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\MonitorSystem.h
*********************************************************************/

#ifndef MonitorSystem_H
#define MonitorSystem_H

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
//## auto_generated
#include "omlist.h"
//## auto_generated
#include "omcollec.h"
//## classInstance itsLoginAuthenticator
#include "LoginAuthenticator.h"
//## classInstance itsMaintainerPortal
#include "MaintainerPortal.h"
//## classInstance itsProcessedDataDatabase
#include "ProcessedDataDatabase.h"
//## classInstance itsResearcherPortal
#include "ResearcherPortal.h"
//## classInstance itsSensorDatabase
#include "SensorDatabase.h"
//## classInstance itsUserDatabase
#include "UserDatabase.h"
//## classInstance itsInterCommunicationInterface
class InterCommunicationInterface;

//## classInstance itsIntraCommunicationInterface
class IntraCommunicationInterface;

//## link itsProcessedDataLoader
class ProcessedDataLoader;

//## classInstance itsRawDataLoader
class RawDataLoader;

//## package SMSWTD

//## class MonitorSystem
class MonitorSystem : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedMonitorSystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit MonitorSystem(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~MonitorSystem(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    OMIterator<InterCommunicationInterface*> getItsInterCommunicationInterface(void) const;
    
    //## auto_generated
    InterCommunicationInterface* newItsInterCommunicationInterface(void);
    
    //## auto_generated
    void deleteItsInterCommunicationInterface(InterCommunicationInterface* const p_InterCommunicationInterface);
    
    //## auto_generated
    OMIterator<IntraCommunicationInterface*> getItsIntraCommunicationInterface(void) const;
    
    //## auto_generated
    IntraCommunicationInterface* newItsIntraCommunicationInterface(void);
    
    //## auto_generated
    void deleteItsIntraCommunicationInterface(IntraCommunicationInterface* const p_IntraCommunicationInterface);
    
    //## auto_generated
    const LoginAuthenticator* getItsLoginAuthenticator(void) const;
    
    //## auto_generated
    const MaintainerPortal* getItsMaintainerPortal(void) const;
    
    //## auto_generated
    const MaintainerPortal* getItsMaintainerPortal_1(void) const;
    
    //## auto_generated
    void setItsMaintainerPortal_1(MaintainerPortal* const p_MaintainerPortal);
    
    //## auto_generated
    const ProcessedDataDatabase* getItsProcessedDataDatabase(void) const;
    
    //## auto_generated
    OMIterator<ProcessedDataLoader*> getItsProcessedDataLoader(void) const;
    
    //## auto_generated
    void addItsProcessedDataLoader(ProcessedDataLoader* const p_ProcessedDataLoader);
    
    //## auto_generated
    void removeItsProcessedDataLoader(ProcessedDataLoader* const p_ProcessedDataLoader);
    
    //## auto_generated
    void clearItsProcessedDataLoader(void);
    
    //## auto_generated
    OMIterator<ProcessedDataLoader*> getItsProcessedDataLoader_1(void) const;
    
    //## auto_generated
    ProcessedDataLoader* newItsProcessedDataLoader_1(void);
    
    //## auto_generated
    void deleteItsProcessedDataLoader_1(ProcessedDataLoader* const p_ProcessedDataLoader);
    
    //## auto_generated
    OMIterator<RawDataLoader*> getItsRawDataLoader(void) const;
    
    //## auto_generated
    RawDataLoader* newItsRawDataLoader(void);
    
    //## auto_generated
    void deleteItsRawDataLoader(RawDataLoader* const p_RawDataLoader);
    
    //## auto_generated
    OMIterator<RawDataLoader*> getItsRawDataLoader_1(void) const;
    
    //## auto_generated
    void addItsRawDataLoader_1(RawDataLoader* const p_RawDataLoader);
    
    //## auto_generated
    void removeItsRawDataLoader_1(RawDataLoader* const p_RawDataLoader);
    
    //## auto_generated
    void clearItsRawDataLoader_1(void);
    
    //## auto_generated
    const ResearcherPortal* getItsResearcherPortal(void) const;
    
    //## auto_generated
    OMIterator<ResearcherPortal*> getItsResearcherPortal_1(void) const;
    
    //## auto_generated
    void addItsResearcherPortal_1(ResearcherPortal* const p_ResearcherPortal);
    
    //## auto_generated
    void removeItsResearcherPortal_1(ResearcherPortal* const p_ResearcherPortal);
    
    //## auto_generated
    void clearItsResearcherPortal_1(void);
    
    //## auto_generated
    const SensorDatabase* getItsSensorDatabase(void) const;
    
    //## auto_generated
    const UserDatabase* getItsUserDatabase(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    OMList<InterCommunicationInterface*> itsInterCommunicationInterface;		//## classInstance itsInterCommunicationInterface
    
    OMList<IntraCommunicationInterface*> itsIntraCommunicationInterface;		//## classInstance itsIntraCommunicationInterface
    
    LoginAuthenticator itsLoginAuthenticator;		//## classInstance itsLoginAuthenticator
    
    MaintainerPortal itsMaintainerPortal;		//## classInstance itsMaintainerPortal
    
    MaintainerPortal* itsMaintainerPortal_1;		//## link itsMaintainerPortal_1
    
    ProcessedDataDatabase itsProcessedDataDatabase;		//## classInstance itsProcessedDataDatabase
    
    OMCollection<ProcessedDataLoader*> itsProcessedDataLoader;		//## link itsProcessedDataLoader
    
    OMList<ProcessedDataLoader*> itsProcessedDataLoader_1;		//## classInstance itsProcessedDataLoader_1
    
    OMList<RawDataLoader*> itsRawDataLoader;		//## classInstance itsRawDataLoader
    
    OMCollection<RawDataLoader*> itsRawDataLoader_1;		//## link itsRawDataLoader_1
    
    ResearcherPortal itsResearcherPortal;		//## classInstance itsResearcherPortal
    
    OMCollection<ResearcherPortal*> itsResearcherPortal_1;		//## link itsResearcherPortal_1
    
    SensorDatabase itsSensorDatabase;		//## classInstance itsSensorDatabase
    
    UserDatabase itsUserDatabase;		//## classInstance itsUserDatabase
    
    ////    Framework operations    ////

public :

    //## auto_generated
    virtual void destroy(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMonitorSystem : virtual public AOMInstance {
    DECLARE_META(MonitorSystem, OMAnimatedMonitorSystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MonitorSystem.h
*********************************************************************/
