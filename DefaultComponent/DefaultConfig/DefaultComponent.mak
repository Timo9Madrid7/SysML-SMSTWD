
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

SIMULINK_CONFIG=False
!IF "$(SIMULINK_CONFIG)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "OM_WITH_CLEANUP"
!ENDIF


!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC15x86$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x86 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0\Share"
RHPROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0"
FRAMEWORK_LIB_ROOT="C:\ProgramData\IBM\Rhapsody\9.0\UserShare"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  PushNotificationListener.obj \
  GUI.obj \
  CarrierNotificationListener.obj \
  NotificationUI.obj \
  BackendAPIClient.obj \
  NotificationAPIClient.obj \
  WeatherAPIClient.obj \
  LocationProvider.obj \
  Dashboard.obj \
  NotificationListener.obj \
  Context.obj \
  WeatherForcastUI.obj \
  ThreatsUI.obj \
  LocationChangeUI.obj \
  SMSWTD.obj \
  Sensors.obj \
  Processors.obj \
  CommunicationInfrastructure.obj \
  DataStorage.obj \
  SatelliteSystems.obj \
  AircraftSensors.obj \
  UnderwaterSensors.obj \
  Transformer.obj \
  Algorithms.obj \
  ResearchGateway.obj \
  GovermentAgencies.obj \
  Public.obj \
  Scientists.obj \
  Maintainers.obj \
  SMSWTD_CONTEXT.obj \
  SERVICE_UCS.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






PushNotificationListener.obj : PushNotificationListener.cpp PushNotificationListener.h    SMSWTD.h NotificationListener.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PushNotificationListener.obj" "PushNotificationListener.cpp" 



GUI.obj : GUI.cpp GUI.h    SMSWTD.h NotificationUI.h Dashboard.h BackendAPIClient.h LocationProvider.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"GUI.obj" "GUI.cpp" 



CarrierNotificationListener.obj : CarrierNotificationListener.cpp CarrierNotificationListener.h    SMSWTD.h NotificationListener.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CarrierNotificationListener.obj" "CarrierNotificationListener.cpp" 



NotificationUI.obj : NotificationUI.cpp NotificationUI.h    SMSWTD.h NotificationAPIClient.h BackendAPIClient.h LocationProvider.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"NotificationUI.obj" "NotificationUI.cpp" 



BackendAPIClient.obj : BackendAPIClient.cpp BackendAPIClient.h    SMSWTD.h LocationProvider.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"BackendAPIClient.obj" "BackendAPIClient.cpp" 



NotificationAPIClient.obj : NotificationAPIClient.cpp NotificationAPIClient.h    SMSWTD.h BackendAPIClient.h LocationProvider.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"NotificationAPIClient.obj" "NotificationAPIClient.cpp" 



WeatherAPIClient.obj : WeatherAPIClient.cpp WeatherAPIClient.h    SMSWTD.h BackendAPIClient.h LocationProvider.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"WeatherAPIClient.obj" "WeatherAPIClient.cpp" 



LocationProvider.obj : LocationProvider.cpp LocationProvider.h    SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"LocationProvider.obj" "LocationProvider.cpp" 



Dashboard.obj : Dashboard.cpp Dashboard.h    SMSWTD.h WeatherAPIClient.h WeatherForcastUI.h LocationChangeUI.h ThreatsUI.h BackendAPIClient.h LocationProvider.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Dashboard.obj" "Dashboard.cpp" 



NotificationListener.obj : NotificationListener.cpp NotificationListener.h    SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"NotificationListener.obj" "NotificationListener.cpp" 



Context.obj : Context.cpp Context.h    SMSWTD.h NotificationListener.h GUI.h BackendAPIClient.h LocationProvider.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Context.obj" "Context.cpp" 



WeatherForcastUI.obj : WeatherForcastUI.cpp WeatherForcastUI.h    SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"WeatherForcastUI.obj" "WeatherForcastUI.cpp" 



ThreatsUI.obj : ThreatsUI.cpp ThreatsUI.h    SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ThreatsUI.obj" "ThreatsUI.cpp" 



LocationChangeUI.obj : LocationChangeUI.cpp LocationChangeUI.h    SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"LocationChangeUI.obj" "LocationChangeUI.cpp" 



SMSWTD.obj : SMSWTD.cpp SMSWTD.h    SMSWTD_CONTEXT.h Sensors.h DataStorage.h Processors.h CommunicationInfrastructure.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SMSWTD.obj" "SMSWTD.cpp" 



Sensors.obj : Sensors.cpp Sensors.h    SMSWTD_CONTEXT.h SatelliteSystems.h AircraftSensors.h UnderwaterSensors.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Sensors.obj" "Sensors.cpp" 



Processors.obj : Processors.cpp Processors.h    SMSWTD_CONTEXT.h Algorithms.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Processors.obj" "Processors.cpp" 



CommunicationInfrastructure.obj : CommunicationInfrastructure.cpp CommunicationInfrastructure.h    SMSWTD_CONTEXT.h SMSWTD.h GovermentAgencies.h Public.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CommunicationInfrastructure.obj" "CommunicationInfrastructure.cpp" 



DataStorage.obj : DataStorage.cpp DataStorage.h    SMSWTD_CONTEXT.h SMSWTD.h ResearchGateway.h Transformer.h Scientists.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DataStorage.obj" "DataStorage.cpp" 



SatelliteSystems.obj : SatelliteSystems.cpp SatelliteSystems.h    SMSWTD_CONTEXT.h Sensors.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SatelliteSystems.obj" "SatelliteSystems.cpp" 



AircraftSensors.obj : AircraftSensors.cpp AircraftSensors.h    SMSWTD_CONTEXT.h Sensors.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"AircraftSensors.obj" "AircraftSensors.cpp" 



UnderwaterSensors.obj : UnderwaterSensors.cpp UnderwaterSensors.h    SMSWTD_CONTEXT.h Sensors.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UnderwaterSensors.obj" "UnderwaterSensors.cpp" 



Transformer.obj : Transformer.cpp Transformer.h    SMSWTD_CONTEXT.h Algorithms.h DataStorage.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Transformer.obj" "Transformer.cpp" 



Algorithms.obj : Algorithms.cpp Algorithms.h    SMSWTD_CONTEXT.h Transformer.h Processors.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Algorithms.obj" "Algorithms.cpp" 



ResearchGateway.obj : ResearchGateway.cpp ResearchGateway.h    SMSWTD_CONTEXT.h Scientists.h DataStorage.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ResearchGateway.obj" "ResearchGateway.cpp" 



GovermentAgencies.obj : GovermentAgencies.cpp GovermentAgencies.h    SMSWTD_CONTEXT.h CommunicationInfrastructure.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"GovermentAgencies.obj" "GovermentAgencies.cpp" 



Public.obj : Public.cpp Public.h    SMSWTD_CONTEXT.h CommunicationInfrastructure.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Public.obj" "Public.cpp" 



Scientists.obj : Scientists.cpp Scientists.h    SMSWTD_CONTEXT.h ResearchGateway.h DataStorage.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Scientists.obj" "Scientists.cpp" 



Maintainers.obj : Maintainers.cpp Maintainers.h    SERVICE_UCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Maintainers.obj" "Maintainers.cpp" 



SMSWTD_CONTEXT.obj : SMSWTD_CONTEXT.cpp SMSWTD_CONTEXT.h    SMSWTD.h Sensors.h Processors.h CommunicationInfrastructure.h DataStorage.h SatelliteSystems.h AircraftSensors.h UnderwaterSensors.h Transformer.h Algorithms.h ResearchGateway.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SMSWTD_CONTEXT.obj" "SMSWTD_CONTEXT.cpp" 



SERVICE_UCS.obj : SERVICE_UCS.cpp SERVICE_UCS.h    SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SERVICE_UCS.obj" "SERVICE_UCS.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist PushNotificationListener.obj erase PushNotificationListener.obj
	if exist GUI.obj erase GUI.obj
	if exist CarrierNotificationListener.obj erase CarrierNotificationListener.obj
	if exist NotificationUI.obj erase NotificationUI.obj
	if exist BackendAPIClient.obj erase BackendAPIClient.obj
	if exist NotificationAPIClient.obj erase NotificationAPIClient.obj
	if exist WeatherAPIClient.obj erase WeatherAPIClient.obj
	if exist LocationProvider.obj erase LocationProvider.obj
	if exist Dashboard.obj erase Dashboard.obj
	if exist NotificationListener.obj erase NotificationListener.obj
	if exist Context.obj erase Context.obj
	if exist WeatherForcastUI.obj erase WeatherForcastUI.obj
	if exist ThreatsUI.obj erase ThreatsUI.obj
	if exist LocationChangeUI.obj erase LocationChangeUI.obj
	if exist SMSWTD.obj erase SMSWTD.obj
	if exist Sensors.obj erase Sensors.obj
	if exist Processors.obj erase Processors.obj
	if exist CommunicationInfrastructure.obj erase CommunicationInfrastructure.obj
	if exist DataStorage.obj erase DataStorage.obj
	if exist SatelliteSystems.obj erase SatelliteSystems.obj
	if exist AircraftSensors.obj erase AircraftSensors.obj
	if exist UnderwaterSensors.obj erase UnderwaterSensors.obj
	if exist Transformer.obj erase Transformer.obj
	if exist Algorithms.obj erase Algorithms.obj
	if exist ResearchGateway.obj erase ResearchGateway.obj
	if exist GovermentAgencies.obj erase GovermentAgencies.obj
	if exist Public.obj erase Public.obj
	if exist Scientists.obj erase Scientists.obj
	if exist Maintainers.obj erase Maintainers.obj
	if exist SMSWTD_CONTEXT.obj erase SMSWTD_CONTEXT.obj
	if exist SERVICE_UCS.obj erase SERVICE_UCS.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
