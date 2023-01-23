#include "WorldFunction.hpp"

namespace KDeT {

  const std::string WorldFunction::myReturn("World");

  const std::string &WorldFunction::function() const
  {
    return myReturn;
  }

  WorldFunction::~WorldFunction() { };

};
