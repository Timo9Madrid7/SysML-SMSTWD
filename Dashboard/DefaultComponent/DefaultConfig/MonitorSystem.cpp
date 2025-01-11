/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MonitorSystem
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\MonitorSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "MonitorSystem.h"
//## classInstance itsInterCommunicationInterface
#include "InterCommunicationInterface.h"
//## classInstance itsIntraCommunicationInterface
#include "IntraCommunicationInterface.h"
//## link itsProcessedDataLoader
#include "ProcessedDataLoader.h"
//## classInstance itsRawDataLoader
#include "RawDataLoader.h"
//#[ ignore
#define SMSWTD_MonitorSystem_MonitorSystem_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD

//## class MonitorSystem
MonitorSystem::MonitorSystem(IOxfActive* const theActiveContext) : OMReactive(), itsMaintainerPortal_1(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(MonitorSystem, MonitorSystem(), 0, SMSWTD_MonitorSystem_MonitorSystem_SERIALIZE);
    setActiveContext(theActiveContext, false);
}

MonitorSystem::~MonitorSystem(void) {
    NOTIFY_DESTRUCTOR(~MonitorSystem, true);
    cleanUpRelations();
}

OMIterator<InterCommunicationInterface*> MonitorSystem::getItsInterCommunicationInterface(void) const {
    OMIterator<InterCommunicationInterface*> iter(itsInterCommunicationInterface);
    return iter;
}

InterCommunicationInterface* MonitorSystem::newItsInterCommunicationInterface(void) {
    InterCommunicationInterface* newInterCommunicationInterface = new InterCommunicationInterface;
    itsInterCommunicationInterface.add(newInterCommunicationInterface);
    NOTIFY_RELATION_ITEM_ADDED("itsInterCommunicationInterface", newInterCommunicationInterface, true, false);
    return newInterCommunicationInterface;
}

void MonitorSystem::deleteItsInterCommunicationInterface(InterCommunicationInterface* const p_InterCommunicationInterface) {
    itsInterCommunicationInterface.remove(p_InterCommunicationInterface);
    NOTIFY_RELATION_ITEM_REMOVED("itsInterCommunicationInterface", p_InterCommunicationInterface);
    delete p_InterCommunicationInterface;
}

OMIterator<IntraCommunicationInterface*> MonitorSystem::getItsIntraCommunicationInterface(void) const {
    OMIterator<IntraCommunicationInterface*> iter(itsIntraCommunicationInterface);
    return iter;
}

IntraCommunicationInterface* MonitorSystem::newItsIntraCommunicationInterface(void) {
    IntraCommunicationInterface* newIntraCommunicationInterface = new IntraCommunicationInterface;
    itsIntraCommunicationInterface.add(newIntraCommunicationInterface);
    NOTIFY_RELATION_ITEM_ADDED("itsIntraCommunicationInterface", newIntraCommunicationInterface, true, false);
    return newIntraCommunicationInterface;
}

void MonitorSystem::deleteItsIntraCommunicationInterface(IntraCommunicationInterface* const p_IntraCommunicationInterface) {
    itsIntraCommunicationInterface.remove(p_IntraCommunicationInterface);
    NOTIFY_RELATION_ITEM_REMOVED("itsIntraCommunicationInterface", p_IntraCommunicationInterface);
    delete p_IntraCommunicationInterface;
}

const LoginAuthenticator* MonitorSystem::getItsLoginAuthenticator(void) const {
    return &itsLoginAuthenticator;
}

const MaintainerPortal* MonitorSystem::getItsMaintainerPortal(void) const {
    return &itsMaintainerPortal;
}

const MaintainerPortal* MonitorSystem::getItsMaintainerPortal_1(void) const {
    return itsMaintainerPortal_1;
}

void MonitorSystem::setItsMaintainerPortal_1(MaintainerPortal* const p_MaintainerPortal) {
    itsMaintainerPortal_1 = p_MaintainerPortal;
    if(p_MaintainerPortal != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsMaintainerPortal_1", p_MaintainerPortal, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsMaintainerPortal_1");
        }
}

const ProcessedDataDatabase* MonitorSystem::getItsProcessedDataDatabase(void) const {
    return &itsProcessedDataDatabase;
}

OMIterator<ProcessedDataLoader*> MonitorSystem::getItsProcessedDataLoader(void) const {
    OMIterator<ProcessedDataLoader*> iter(itsProcessedDataLoader);
    return iter;
}

void MonitorSystem::addItsProcessedDataLoader(ProcessedDataLoader* const p_ProcessedDataLoader) {
    if(p_ProcessedDataLoader != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsProcessedDataLoader", p_ProcessedDataLoader, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsProcessedDataLoader");
        }
    itsProcessedDataLoader.add(p_ProcessedDataLoader);
}

void MonitorSystem::removeItsProcessedDataLoader(ProcessedDataLoader* const p_ProcessedDataLoader) {
    NOTIFY_RELATION_ITEM_REMOVED("itsProcessedDataLoader", p_ProcessedDataLoader);
    itsProcessedDataLoader.remove(p_ProcessedDataLoader);
}

void MonitorSystem::clearItsProcessedDataLoader(void) {
    NOTIFY_RELATION_CLEARED("itsProcessedDataLoader");
    itsProcessedDataLoader.removeAll();
}

OMIterator<ProcessedDataLoader*> MonitorSystem::getItsProcessedDataLoader_1(void) const {
    OMIterator<ProcessedDataLoader*> iter(itsProcessedDataLoader_1);
    return iter;
}

ProcessedDataLoader* MonitorSystem::newItsProcessedDataLoader_1(void) {
    ProcessedDataLoader* newProcessedDataLoader = new ProcessedDataLoader;
    itsProcessedDataLoader_1.add(newProcessedDataLoader);
    NOTIFY_RELATION_ITEM_ADDED("itsProcessedDataLoader_1", newProcessedDataLoader, true, false);
    return newProcessedDataLoader;
}

void MonitorSystem::deleteItsProcessedDataLoader_1(ProcessedDataLoader* const p_ProcessedDataLoader) {
    itsProcessedDataLoader_1.remove(p_ProcessedDataLoader);
    NOTIFY_RELATION_ITEM_REMOVED("itsProcessedDataLoader_1", p_ProcessedDataLoader);
    delete p_ProcessedDataLoader;
}

OMIterator<RawDataLoader*> MonitorSystem::getItsRawDataLoader(void) const {
    OMIterator<RawDataLoader*> iter(itsRawDataLoader);
    return iter;
}

RawDataLoader* MonitorSystem::newItsRawDataLoader(void) {
    RawDataLoader* newRawDataLoader = new RawDataLoader;
    itsRawDataLoader.add(newRawDataLoader);
    NOTIFY_RELATION_ITEM_ADDED("itsRawDataLoader", newRawDataLoader, true, false);
    return newRawDataLoader;
}

void MonitorSystem::deleteItsRawDataLoader(RawDataLoader* const p_RawDataLoader) {
    itsRawDataLoader.remove(p_RawDataLoader);
    NOTIFY_RELATION_ITEM_REMOVED("itsRawDataLoader", p_RawDataLoader);
    p_RawDataLoader->destroy();
}

OMIterator<RawDataLoader*> MonitorSystem::getItsRawDataLoader_1(void) const {
    OMIterator<RawDataLoader*> iter(itsRawDataLoader_1);
    return iter;
}

void MonitorSystem::addItsRawDataLoader_1(RawDataLoader* const p_RawDataLoader) {
    if(p_RawDataLoader != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsRawDataLoader_1", p_RawDataLoader, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsRawDataLoader_1");
        }
    itsRawDataLoader_1.add(p_RawDataLoader);
}

void MonitorSystem::removeItsRawDataLoader_1(RawDataLoader* const p_RawDataLoader) {
    NOTIFY_RELATION_ITEM_REMOVED("itsRawDataLoader_1", p_RawDataLoader);
    itsRawDataLoader_1.remove(p_RawDataLoader);
}

void MonitorSystem::clearItsRawDataLoader_1(void) {
    NOTIFY_RELATION_CLEARED("itsRawDataLoader_1");
    itsRawDataLoader_1.removeAll();
}

const ResearcherPortal* MonitorSystem::getItsResearcherPortal(void) const {
    return &itsResearcherPortal;
}

OMIterator<ResearcherPortal*> MonitorSystem::getItsResearcherPortal_1(void) const {
    OMIterator<ResearcherPortal*> iter(itsResearcherPortal_1);
    return iter;
}

void MonitorSystem::addItsResearcherPortal_1(ResearcherPortal* const p_ResearcherPortal) {
    if(p_ResearcherPortal != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsResearcherPortal_1", p_ResearcherPortal, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsResearcherPortal_1");
        }
    itsResearcherPortal_1.add(p_ResearcherPortal);
}

void MonitorSystem::removeItsResearcherPortal_1(ResearcherPortal* const p_ResearcherPortal) {
    NOTIFY_RELATION_ITEM_REMOVED("itsResearcherPortal_1", p_ResearcherPortal);
    itsResearcherPortal_1.remove(p_ResearcherPortal);
}

void MonitorSystem::clearItsResearcherPortal_1(void) {
    NOTIFY_RELATION_CLEARED("itsResearcherPortal_1");
    itsResearcherPortal_1.removeAll();
}

const SensorDatabase* MonitorSystem::getItsSensorDatabase(void) const {
    return &itsSensorDatabase;
}

const UserDatabase* MonitorSystem::getItsUserDatabase(void) const {
    return &itsUserDatabase;
}

bool MonitorSystem::startBehavior(void) {
    bool done = true;
    {
        OMIterator<RawDataLoader*> iter(itsRawDataLoader);
        while (*iter){
            done &= (*iter)->startBehavior();
            iter++;
        }
    }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void MonitorSystem::cleanUpRelations(void) {
    itsRawDataLoader.removeAll();
    {
        OMIterator<ProcessedDataLoader*> iter(itsProcessedDataLoader_1);
        while (*iter){
            deleteItsProcessedDataLoader_1(*iter);
            iter.reset();
        }
    }
    {
        OMIterator<IntraCommunicationInterface*> iter(itsIntraCommunicationInterface);
        while (*iter){
            deleteItsIntraCommunicationInterface(*iter);
            iter.reset();
        }
    }
    {
        OMIterator<InterCommunicationInterface*> iter(itsInterCommunicationInterface);
        while (*iter){
            deleteItsInterCommunicationInterface(*iter);
            iter.reset();
        }
    }
    if(itsMaintainerPortal_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsMaintainerPortal_1");
            itsMaintainerPortal_1 = NULL;
        }
    {
        itsProcessedDataLoader.removeAll();
    }
    {
        itsRawDataLoader_1.removeAll();
    }
    {
        itsResearcherPortal_1.removeAll();
    }
}

void MonitorSystem::destroy(void) {
    {
        OMIterator<RawDataLoader*> iter(itsRawDataLoader);
        while (*iter){
            (*iter)->destroy();
            iter++;
        }
    }
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMonitorSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsIntraCommunicationInterface", true, false);
    {
        OMIterator<IntraCommunicationInterface*> iter(myReal->itsIntraCommunicationInterface);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsInterCommunicationInterface", true, false);
    {
        OMIterator<InterCommunicationInterface*> iter(myReal->itsInterCommunicationInterface);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsMaintainerPortal_1", false, true);
    if(myReal->itsMaintainerPortal_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsMaintainerPortal_1);
        }
    aomsRelations->addRelation("itsResearcherPortal_1", false, false);
    {
        OMIterator<ResearcherPortal*> iter(myReal->itsResearcherPortal_1);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsRawDataLoader_1", false, false);
    {
        OMIterator<RawDataLoader*> iter(myReal->itsRawDataLoader_1);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsProcessedDataLoader", false, false);
    {
        OMIterator<ProcessedDataLoader*> iter(myReal->itsProcessedDataLoader);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsRawDataLoader", true, false);
    {
        OMIterator<RawDataLoader*> iter(myReal->itsRawDataLoader);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsProcessedDataLoader_1", true, false);
    {
        OMIterator<ProcessedDataLoader*> iter(myReal->itsProcessedDataLoader_1);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsProcessedDataDatabase", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsProcessedDataDatabase);
    aomsRelations->addRelation("itsSensorDatabase", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSensorDatabase);
    aomsRelations->addRelation("itsUserDatabase", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsUserDatabase);
    aomsRelations->addRelation("itsResearcherPortal", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsResearcherPortal);
    aomsRelations->addRelation("itsMaintainerPortal", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsMaintainerPortal);
    aomsRelations->addRelation("itsLoginAuthenticator", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLoginAuthenticator);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(MonitorSystem, SMSWTD, SMSWTD, false, OMAnimatedMonitorSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MonitorSystem.cpp
*********************************************************************/
