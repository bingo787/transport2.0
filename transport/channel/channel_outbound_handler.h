
#ifndef ROSA_TRANSPORT_CHANNEL_CHANNEL_OUTBOUND_HANDLER_H_
#define ROSA_TRANSPORT_CHANNEL_CHANNEL_OUTBOUND_HANDLER_H_

#include "channel_handler.h"
#include "channel_handler_context.h"

namespace rosa {
namespace transport {
namespace channel {
class ChannelOutboundHandler : virtual public ChannelHandler {

 public:

  ChannelOutboundHandler(const std::string &name,BoundDirection direction);

  virtual void connect(const ChannelHandlerContext &ctx, const ChannelConnectCallback &callback) const;

  virtual void disconnect(const ChannelHandlerContext &ctx, const ChannelConnectCallback &callback) const;

  virtual void write(const ChannelHandlerContext &ctx,
                     const rosa::any &message,
                     const ChannelWriteCallback &callback) const;
  ~ChannelOutboundHandler() override = default;

};
}
}
}

#endif //ROSA_TRANSPORT_CHANNEL_CHANNEL_OUTBOUND_HANDLER_H_
