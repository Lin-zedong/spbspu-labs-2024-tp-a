#include "ScopeGuard.hpp"

lelkov::StreamGuard::StreamGuard(std::basic_ios< char > &s) noexcept :
  s_(s),
  fill_(s.fill()),
  precision_(s.precision()),
  fmt_(s.flags())
{};

lelkov::StreamGuard::~StreamGuard()
{
  s_.fill(fill_);
  s_.precision(precision_);
  s_.flags(fmt_);
}
