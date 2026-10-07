#include <nola/nola.hpp>

#include <string>

namespace nola {

std::string greet(std::string const& name)
{
  return "hello " + name;
}

} // namespace nola
