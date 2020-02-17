
#ifndef ROSA_TRANSPORT_CHANNEL_CHANNEL_OUTBOUND_INVOKER_H_
#define ROSA_TRANSPORT_CHANNEL_CHANNEL_OUTBOUND_INVOKER_H_

#include "channel_callbacks.h"

namespace rosa {
namespace transport {
namespace channel {
class ChannelOutboundInvoker {
 public:
  virtual void connect(const ChannelConnectCallback &callback) const = 0;

  virtual void disconnect(const ChannelConnectCallback &callback) const = 0;

  virtual void write(const rosa::any &message, const ChannelWriteCallback &callback) const = 0;

  virtual ~ChannelOutboundInvoker() = default;
};
}
}
}

#endif //ROSA_TRANSPORT_CHANNEL_CHANNEL_OUTBOUND_INVOKER_H_
