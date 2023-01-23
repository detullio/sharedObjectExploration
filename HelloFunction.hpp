#include "dynamicFunction.hpp"

#include <boost/dll/alias.hpp> 

#if !defined(__HELLO_FUNCTION_HPP__)
#define __HELLO_FUNCTION_HPP__

namespace KDeT
{

  class HelloFunction  final : public DynamicFunction
  {

    static const std::string myReturn;

  public:

    const std::string &function() const override;

    ~HelloFunction();

  };

  extern "C" BOOST_SYMBOL_EXPORT HelloFunction function;

  HelloFunction function;

}

#endif //#if !defined(__HELLO_FUNCTION_HPP__)
