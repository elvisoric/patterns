#ifndef PATTERNS_BEHAVIORAL_OBSERVER_HPP
#define PATTERNS_BEHAVIORAL_OBSERVER_HPP
#include <functional>
#include <vector>

namespace patterns {
namespace behavioral {

template <typename... Args>
class Subject {
 public:
  using Signature = std::function<void(const Args&...)>;
  void notify(const Args&... args) {
    for (auto& observer : observers_) {
      observer(args...);
    }
  }
  void attach(Signature observer) { observers_.push_back(observer); }

 private:
  std::vector<Signature> observers_;
};
}  // namespace behavioral
}  // namespace patterns

#endif  // PATTERNS_BEHAVIORAL_OBSERVER_HPP