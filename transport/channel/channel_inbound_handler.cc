
#include "channel_inbound_handler.h"
using namespace rosa::transport::channel;

ChannelInboundHandler::ChannelInboundHandler(const std::string &name, BoundDirection direction)
    : ChannelHandler(name, direction) {

}
void ChannelInboundHandler::channelActive(const ChannelHandlerContext &ctx) const{
    ctx.fireChannelActive();
}
void ChannelInboundHandler::channelRead(const ChannelHandlerContext &ctx, rosa::any &msg) const{
    ctx.fireChannelRead(msg);
}
void ChannelInboundHandler::exceptionCaught(const ChannelHandlerContext &ctx, const ChannelException &exception) const{
    ctx.fireExceptionCaught(exception);
}
void ChannelInboundHandler::channelInactive(const ChannelHandlerContext &ctx) const{
    ctx.fireChannelInactive();
}
