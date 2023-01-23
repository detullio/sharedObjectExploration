#include "HelloFunction.hpp"

namespace KDeT {

  const std::string HelloFunction::myReturn("Hello");

  const std::string &HelloFunction::function() const
  {
    return myReturn;
  }

  HelloFunction::~HelloFunction() { };

};
