#include <boost/config.hpp>
#include <string>

#if !defined(__DYNAMIC_FUNCTION__HPP__)
#define __DYNAMIC_FUNCTION__HPP__

namespace KDeT
{

  class BOOST_SYMBOL_VISIBLE DynamicFunction
    {

    public :

    virtual const std::string &function() const = 0;

    virtual ~DynamicFunction() {};

    };

}
#endif //#if !defined(__DYNAMIC_FUNCTION__HPP__)
