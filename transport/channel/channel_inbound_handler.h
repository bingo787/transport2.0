
#ifndef ROSA_TRANSPORT_CHANNEL_CHANNEL_INBOUND_HANDLER_H_
#define ROSA_TRANSPORT_CHANNEL_CHANNEL_INBOUND_HANDLER_H_
#include "channel_handler.h"
#include "channel_exception.h"
#include "channel_handler_context.h"
#include "common/any.hpp"
#include "channel_callbacks.h"
namespace rosa {
namespace transport {
namespace channel {
class ChannelInboundHandler : virtual public ChannelHandler {
 public:
  ChannelInboundHandler(const std::string &name, BoundDirection direction);

  virtual void channelActive(const ChannelHandlerContext &ctx) const;

  virtual void channelRead(const ChannelHandlerContext &ctx, rosa::any &msg) const;

  virtual void exceptionCaught(const ChannelHandlerContext &ctx, const ChannelException &exception) const;

  virtual void channelInactive(const ChannelHandlerContext &ctx) const;

  ~ChannelInboundHandler() override = default;
};

}
}
}

#endif //ROSA_TRANSPORT_CHANNEL_CHANNEL_INBOUND_HANDLER_H_
