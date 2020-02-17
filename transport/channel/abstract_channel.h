
#ifndef ROSA_TRANSPORT_CHANNEL_ABSTRACT_CHANNEL_H_
#define ROSA_TRANSPORT_CHANNEL_ABSTRACT_CHANNEL_H_

#include <memory>

#include "common/event_loop.h"
#include "channel_id.h"
#include "channel_callbacks.h"
#include "channel_pipeline.h"

namespace rosa {
namespace transport {
namespace channel {
class AbstractChannel {
 public:

  std::shared_ptr<ChannelId> id() const;

  std::shared_ptr<ChannelPipeline> pipeline() const;

  std::shared_ptr<common::EventLoop> eventLoop() const;

  bool isActive() const;

  
  virtual void open() const;

  virtual void close() const ;

  virtual void connect() const;

  virtual void disconnect() const;

  virtual void write() const;

  virtual void read() const;

  virtual void flush() const;

};
}
}
}

#endif //ROSA_TRANSPORT_CHANNEL_ABSTRACT_CHANNEL_H_
