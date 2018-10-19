#ifndef PATTERNS_CREATIONAL_SINGLETON_HPP
#define PATTERNS_CREATIONAL_SINGLETON_HPP

namespace patterns {
namespace creational {

template <typename Type>
class Singleton {
 public:
  static Type& instance() {
    static Type instance = Type{};
    return type;
  }
};

}  // namespace creational
}  // namespace patterns
#endif  // PATTERNS_CREATIONAL_SINGLETON_HPP