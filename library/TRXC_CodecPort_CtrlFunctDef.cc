#include "IPL4asp_PortType.hh"
#include "IPL4asp_PT.hh"
#include "TRXC_CodecPort.hh"

namespace TRXC__CodecPort__CtrlFunct {

  IPL4asp__Types::Result f__IPL4__listen(
    TRXC__CodecPort::TRXC__CODEC__PT& portRef,
    const IPL4asp__Types::HostName& locName,
    const IPL4asp__Types::PortNumber& locPort,
    const IPL4asp__Types::ProtoTuple& proto,
    const IPL4asp__Types::OptionList& options)
  {
    return f__IPL4__PROVIDER__listen(portRef, locName, locPort, proto, options);
  }
  
  IPL4asp__Types::Result f__IPL4__connect(
    TRXC__CodecPort::TRXC__CODEC__PT& portRef,
    const IPL4asp__Types::HostName& remName,
    const IPL4asp__Types::PortNumber& remPort,
    const IPL4asp__Types::HostName& locName,
    const IPL4asp__Types::PortNumber& locPort,
    const IPL4asp__Types::ConnectionId& connId,
    const IPL4asp__Types::ProtoTuple& proto,
    const IPL4asp__Types::OptionList& options)
  {
    return f__IPL4__PROVIDER__connect(portRef, remName, remPort,
                                      locName, locPort, connId, proto, options);
  }

  IPL4asp__Types::Result f__IPL4__close(
    TRXC__CodecPort::TRXC__CODEC__PT& portRef, 
    const IPL4asp__Types::ConnectionId& connId, 
    const IPL4asp__Types::ProtoTuple& proto)
  {
      return f__IPL4__PROVIDER__close(portRef, connId, proto);
  }

  IPL4asp__Types::Result f__IPL4__setUserData(
    TRXC__CodecPort::TRXC__CODEC__PT& portRef,
    const IPL4asp__Types::ConnectionId& connId,
    const IPL4asp__Types::UserData& userData)
  {
    return f__IPL4__PROVIDER__setUserData(portRef, connId, userData);
  }
  
  IPL4asp__Types::Result f__IPL4__getUserData(
    TRXC__CodecPort::TRXC__CODEC__PT& portRef,
    const IPL4asp__Types::ConnectionId& connId,
    IPL4asp__Types::UserData& userData)
  {
    return f__IPL4__PROVIDER__getUserData(portRef, connId, userData);
  }

}
