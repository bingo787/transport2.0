
#ifndef ROSA_TRANSPORT_CHANNEL_CHANNEL_HANDLER_H_
#define ROSA_TRANSPORT_CHANNEL_CHANNEL_HANDLER_H_

#include <memory>

namespace rosa {
namespace transport {
namespace channel {

enum BoundDirection { kInbound, kOutbound, kInOutBound };

class ChannelHandler : public std::enable_shared_from_this<ChannelHandler> {
 public:
  ChannelHandler(const std::string &name, BoundDirection direction) :
      mName(name),
      mDirection(direction) {}

  BoundDirection direction() const{
      return mDirection;
  }
  std::string name() const{
      return mName;
  };

  virtual ~ChannelHandler() = default;

 private:
  std::string mName;
  BoundDirection mDirection;
};
}
}
}

#endif //ROSA_TRANSPORT_CHANNEL_CHANNEL_HANDLER_H_
