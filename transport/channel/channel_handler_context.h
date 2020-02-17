
#ifndef ROSA_TRANSPORT_CHANNEL_CHANNEL_HANDLER_CONTEXT_H_
#define ROSA_TRANSPORT_CHANNEL_CHANNEL_HANDLER_CONTEXT_H_
#include "channel_inbound_invoker.h"
#include "channel_outbound_invoker.h"
namespace rosa {
namespace transport {
namespace channel {
class ChannelHandlerContext : public ChannelInboundInvoker, public ChannelOutboundInvoker {
 public:
  const ChannelInboundInvoker &fireChannelActive() const override;

  const ChannelInboundInvoker &fireChannelRead(rosa::any &msg) const override;

  const ChannelInboundInvoker &fireExceptionCaught(const ChannelException &exception) const override;

  const ChannelInboundInvoker &fireChannelInactive() const override;

  void connect(const ChannelConnectCallback &callback) const override;

  void disconnect(const ChannelConnectCallback &callback) const override;

  void write(const rosa::any &message, const ChannelWriteCallback &callback) const override;

  ~ChannelHandlerContext() override = default;
};

}
}
}

#endif //ROSA_TRANSPORT_CHANNEL_CHANNEL_HANDLER_CONTEXT_H_
