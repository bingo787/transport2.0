
#include "channel_outbound_handler.h"
#include "channel_handler.h"
using namespace rosa::transport::channel;

ChannelOutboundHandler::ChannelOutboundHandler(const std::string &name,
                                               BoundDirection direction)
    : ChannelHandler(name, direction) {}
void ChannelOutboundHandler::connect(const ChannelHandlerContext &ctx,
                                     const ChannelConnectCallback &callback) const {
    ctx.connect(callback);

}
void ChannelOutboundHandler::disconnect(const ChannelHandlerContext &ctx,
                                        const ChannelConnectCallback &callback) const {
    ctx.disconnect(callback);

}
void ChannelOutboundHandler::write(const ChannelHandlerContext &ctx,
                                   const rosa::any &message,
                                   const ChannelWriteCallback &callback) const {
    ctx.write(message, callback);
}
