#pragma once

#include <iosfwd>
#include <string>

#include <plop/export.hxx>

namespace plop
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  PLOP_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
