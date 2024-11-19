#include "AlpacaSwitch.h"

void AlpacaSwitch::registerCallbacks()
{
    AlpacaDevice::registerCallbacks();
    this->createCallBack(LHF(aGetCanAsync), HTTP_GET, "canasync");
    this->createCallBack(LHF(aPutCancelAsync), HTTP_PUT, "cancelasync");
    this->createCallBack(LHF(aGetCanWrite), HTTP_GET, "canwrite");
	this->createCallBack(LHF(aGetGetSwitch), HTTP_GET, "getswitch");
	this->createCallBack(LHF(aGetGetSwitchDescription), HTTP_GET, "getswitchdescription");
	this->createCallBack(LHF(aGetGetSwitchName), HTTP_GET, "getswitchname");
	this->createCallBack(LHF(aGetGetSwitchValue), HTTP_GET, "getswitchvalue");
	this->createCallBack(LHF(aGetMaxSwitchValue), HTTP_GET, "maxswitchvalue");
	this->createCallBack(LHF(aGetMinSwitchValue), HTTP_GET, "minswitchvalue");
	
	this->createCallBack(LHF(aPutSetAsync), HTTP_PUT, "setasync");
	this->createCallBack(LHF(aPutSetAsyncValue), HTTP_PUT, "setasyncvalue");
	this->createCallBack(LHF(aPutSetSwitch), HTTP_PUT, "setswitch");
	this->createCallBack(LHF(aPutSetSwitchName), HTTP_PUT, "setswitchname");
	this->createCallBack(LHF(aPutSetSwitchValue), HTTP_PUT, "setswitchvalue");
	
	this->createCallBack(LHF(aGetStateChangeComplete), HTTP_GET, "statechangecomplete");
	this->createCallBack(LHF(aGetSwitchStep), HTTP_GET, "switchstep");
	this->createCallBack(LHF(aGetMaxSwitch), HTTP_GET, "maxswitch");
}

void AlpacaSwitch::aGetInterfaceVersion(AsyncWebServerRequest *request) {
    _alpacaServer->respond(request, ALPACA_SWITCH_INTERFACE_VERSION);
};