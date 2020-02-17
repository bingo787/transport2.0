
#include "channel_handler_context.h"
using namespace rosa::transport::channel;

const ChannelInboundInvoker &ChannelHandlerContext::fireChannelActive() const {
    return *this;
}
const ChannelInboundInvoker &ChannelHandlerContext::fireChannelRead(
    rosa::any &msg) const {
    return *this;
}
const ChannelInboundInvoker &ChannelHandlerContext::fireExceptionCaught(
    const ChannelException &exception) const {
    return *this;
}
const ChannelInboundInvoker &ChannelHandlerContext::fireChannelInactive() const {
    return *this;
}

void ChannelHandlerContext::connect(const ChannelConnectCallback &callback) const {

}
void ChannelHandlerContext::disconnect(const ChannelConnectCallback &callback) const {

}
void ChannelHandlerContext::write(const rosa::any &message,
                                  const ChannelWriteCallback &callback) const {

}
