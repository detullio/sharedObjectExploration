#include "dynamicFunction.hpp"

#if !defined(__WORLD_FUNCTION_HPP__)
#define __WORLD_FUNCTION_HPP__

namespace KDeT
{

  class WorldFunction  final : public DynamicFunction
  {

    static const std::string myReturn;

  public:

    virtual const std::string &function() const override;

    ~WorldFunction();

  };

  extern "C" BOOST_SYMBOL_EXPORT WorldFunction function;

  WorldFunction function;

}

#endif //#if !defined(__WORLD_FUNCTION_HPP__)
