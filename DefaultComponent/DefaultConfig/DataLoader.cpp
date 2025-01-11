/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataLoader
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DataLoader.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DataLoader.h"
//#[ ignore
#define SMSWTD_DataLoader_DataLoader_SERIALIZE OM_NO_OP

#define SMSWTD_DataLoader_checkData_SERIALIZE OM_NO_OP

#define SMSWTD_DataLoader_clearData_SERIALIZE OM_NO_OP

#define SMSWTD_DataLoader_clearDataBuffer_SERIALIZE OM_NO_OP

#define SMSWTD_DataLoader_forwardData_SERIALIZE OM_NO_OP

#define SMSWTD_DataLoader_getData_SERIALIZE aomsmethod->addAttribute("source", x2String(source));

#define SMSWTD_DataLoader_setData_SERIALIZE OM_NO_OP

#define OMAnim_SMSWTD_DataLoader_setData_RhpString_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_data)

#define OMAnim_SMSWTD_DataLoader_setData_RhpString_SERIALIZE_RET_VAL
//#]

//## package SMSWTD

//## class DataLoader
DataLoader::DataLoader(void) : data(""), isDataOk(true), dataBuffer(""), messageId(1) {
    NOTIFY_CONSTRUCTOR(DataLoader, DataLoader(), 0, SMSWTD_DataLoader_DataLoader_SERIALIZE);
}

DataLoader::~DataLoader(void) {
    NOTIFY_DESTRUCTOR(~DataLoader, true);
}

bool DataLoader::checkData(void) {
    NOTIFY_OPERATION(checkData, checkData(), 0, SMSWTD_DataLoader_checkData_SERIALIZE);
    //#[ operation checkData()
    return isDataOk;
    //#]
}

void DataLoader::forwardData(void) {
    NOTIFY_OPERATION(forwardData, forwardData(), 0, SMSWTD_DataLoader_forwardData_SERIALIZE);
    //#[ operation forwardData()
    //#]
}

RhpString DataLoader::getData(const RhpString& source) {
    NOTIFY_OPERATION(getData, getData(const RhpString&), 1, SMSWTD_DataLoader_getData_SERIALIZE);
    //#[ operation getData(RhpString)
    dataBuffer = "<data_from_" + source + ">";
    return dataBuffer;
    //#]
}

void DataLoader::setData(void) {
    NOTIFY_OPERATION(setData, setData(), 0, SMSWTD_DataLoader_setData_SERIALIZE);
    //#[ operation setData()
    data = dataBuffer;
    dataBuffer = "";
    //#]
    NOTIFY_SET_OPERATION;
}

void DataLoader::setData(const RhpString p_data) {
    data = p_data;
    NOTIFY_SET_OPERATION;
}

const bool DataLoader::getIsDataOk(void) const {
    return isDataOk;
}

void DataLoader::setIsDataOk(const bool p_isDataOk) {
    isDataOk = p_isDataOk;
}

void DataLoader::clearDataBuffer(void) {
    NOTIFY_OPERATION(clearDataBuffer, clearDataBuffer(), 0, SMSWTD_DataLoader_clearDataBuffer_SERIALIZE);
    //#[ operation clearDataBuffer()
    dataBuffer = "";
    //#]
}

const RhpString DataLoader::getDataBuffer(void) const {
    return dataBuffer;
}

void DataLoader::setDataBuffer(const RhpString p_dataBuffer) {
    dataBuffer = p_dataBuffer;
    NOTIFY_SET_OPERATION;
}

const unsigned int DataLoader::getMessageId(void) const {
    return messageId;
}

void DataLoader::clearData(void) {
    NOTIFY_OPERATION(clearData, clearData(), 0, SMSWTD_DataLoader_clearData_SERIALIZE);
    //#[ operation clearData()
    data = "";
    //#]
}

const RhpString DataLoader::getData(void) const {
    return data;
}

void DataLoader::setMessageId(const unsigned int p_messageId) {
    messageId = p_messageId;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDataLoader::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("data", x2String(myReal->data));
    aomsAttributes->addAttribute("isDataOk", x2String(myReal->isDataOk));
    aomsAttributes->addAttribute("messageId", x2String(myReal->messageId));
    aomsAttributes->addAttribute("dataBuffer", x2String(myReal->dataBuffer));
}
//#]

IMPLEMENT_META_P(DataLoader, SMSWTD, SMSWTD, false, OMAnimatedDataLoader)

IMPLEMENT_META_OP(OMAnimatedDataLoader, SMSWTD_DataLoader_setData_RhpString, "setData", FALSE, "setData(RhpString)", 1)

IMPLEMENT_OP_CALL(SMSWTD_DataLoader_setData_RhpString, DataLoader, setData(p_data), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataLoader.cpp
*********************************************************************/
