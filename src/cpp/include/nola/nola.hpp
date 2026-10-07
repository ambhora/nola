#ifndef nola_HPP
#define nola_HPP

#include <string>

namespace nola {

/** Return a greeting for name. */
[[nodiscard]] std::string greet(std::string const& name);

} // namespace nola

#endif // nola_HPP
