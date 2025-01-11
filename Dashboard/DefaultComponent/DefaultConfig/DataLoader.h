/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20204193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataLoader
//!	Generated Date	: Sat, 11, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DataLoader.h
*********************************************************************/

#ifndef DataLoader_H
#define DataLoader_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD.h"
//#[ ignore
#define OMAnim_SMSWTD_DataLoader_setData_RhpString_ARGS_DECLARATION RhpString p_data;
//#]

//## package SMSWTD

//## class DataLoader
class DataLoader {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDataLoader;
#endif // _OMINSTRUMENT

    RhpString data;		//## attribute data
    
    bool isDataOk;		//## attribute isDataOk
    
    RhpString dataBuffer;		//## attribute dataBuffer
    
    unsigned int messageId;		//## attribute messageId
    
    ////    Constructors and destructors    ////
    
    //## auto_generated
    DataLoader(void);
    
    //## auto_generated
    virtual ~DataLoader(void);
    
    ////    Operations    ////
    
    //## operation checkData()
    virtual bool checkData(void);
    
    //## operation forwardData()
    virtual void forwardData(void);
    
    //## operation getData(RhpString)
    virtual RhpString getData(const RhpString& source = "");
    
    //## operation setData()
    virtual void setData(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    void setData(const RhpString p_data);
    
    //## auto_generated
    const bool getIsDataOk(void) const;
    
    //## auto_generated
    void setIsDataOk(const bool p_isDataOk);
    
    ////    Attributes    ////
    
    //RhpString data;		//## attribute data
    
    //bool isDataOk;		//## attribute isDataOk
    
    //## operation clearDataBuffer()
    virtual void clearDataBuffer(void);
    
    //## auto_generated
    const RhpString getDataBuffer(void) const;
    
    //## auto_generated
    void setDataBuffer(const RhpString p_dataBuffer);
    
    //## auto_generated
    const unsigned int getMessageId(void) const;
    
    //## operation clearData()
    virtual void clearData(void);
    
    //## auto_generated
    const RhpString getData(void) const;
    
    //## auto_generated
    void setMessageId(const unsigned int p_messageId);
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(SMSWTD_DataLoader_setData_RhpString)

//#[ ignore
class OMAnimatedDataLoader : virtual public AOMInstance {
    DECLARE_META(DataLoader, OMAnimatedDataLoader)
    
    DECLARE_META_OP(SMSWTD_DataLoader_setData_RhpString)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataLoader.h
*********************************************************************/
