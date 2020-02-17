
#ifndef ROSA_TRANSPORT_CHANNEL_CHANNEL_INBOUND_INVOKER_H_
#define ROSA_TRANSPORT_CHANNEL_CHANNEL_INBOUND_INVOKER_H_

#include "common/any.hpp"
#include "channel_exception.h"

namespace rosa {
namespace transport {
namespace channel {
class ChannelInboundInvoker {
 public:
  virtual const ChannelInboundInvoker &fireChannelActive() const = 0;

  virtual const ChannelInboundInvoker &fireChannelRead(rosa::any &msg) const = 0;

  virtual const ChannelInboundInvoker &fireExceptionCaught(const ChannelException &exception) const = 0;

  virtual const ChannelInboundInvoker &fireChannelInactive() const = 0;

  virtual ~ChannelInboundInvoker() = default;
};

}
}
}

#endif //ROSA_TRANSPORT_CHANNEL_CHANNEL_INBOUND_INVOKER_H_
