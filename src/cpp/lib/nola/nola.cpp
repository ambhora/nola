// --------------------------------------------------------------------------------------------------
// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2026 nola developers
// --------------------------------------------------------------------------------------------------
#include <nola/nola.hh>

#include <string>

namespace nola {

std::string greet(std::string const& name)
{
  return "hello " + name;
}

} // namespace nola
