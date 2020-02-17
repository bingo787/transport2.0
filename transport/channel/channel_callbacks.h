
#ifndef ROSA_TRANSPORT_COMMON_CHANNEL_CALLBACKS_H_
#define ROSA_TRANSPORT_COMMON_CHANNEL_CALLBACKS_H_
#include <functional>
#include <string>
namespace rosa {
namespace transport {
namespace channel {

using ChannelConnectCallback = std::function<void(bool result)>;
using ChannelWriteCallback = std::function<void(bool result)>;

}
}
}

#endif //ROSA_TRANSPORT_COMMON_CHANNEL_CONNECT_CALLBACK_H_
