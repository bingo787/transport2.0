
#ifndef ROSA_TRANSPORT_CHANNEL_CHANNEL_ID_H_
#define ROSA_TRANSPORT_CHANNEL_CHANNEL_ID_H_

#include <string>

namespace rosa {
namespace transport {
namespace channel {
class ChannelId {
 public:
  ChannelId(std::string id);

  std::string text() const;

  size_t hashcode() const;

 private:
  std::string mId;

};

}
}
}

#endif //ROSA_TRANSPORT_CHANNEL_CHANNEL_ID_H_
