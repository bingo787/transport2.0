#include <utility>
#include "channel_id.h"
using namespace rosa::transport::channel;
ChannelId::ChannelId(std::string id) : mId(std::move(id)) {

}
std::string ChannelId::text() const {
    return mId;
}
size_t ChannelId::hashcode() const {
    return std::hash<std::string>{}(mId);
}
