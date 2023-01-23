#include "dynamicFunction.hpp"
#include "WorldFunction.hpp"
#include "HelloFunction.hpp"

#include <boost/dll/import.hpp> // for import_alias
#include <iostream>

int main(int argc, char* argv[]) {

    boost::dll::fs::path lib_path(argv[1]);             // argv[1] contains path to directory with our plugin library
    boost::shared_ptr<KDeT::DynamicFunction> hello;            // variable to hold a pointer to plugin variable
    std::cout << "Loading the plugin" << std::endl;
    {
    hello = boost::dll::import_symbol<KDeT::HelloFunction>(         // type of imported symbol is located between `<` and `>`
        lib_path / "libhelloFunction.so",                     // path to the library and library name
        "function",                                       // name of the symbol to import
        boost::dll::load_mode::append_decorations              // makes `libmy_plugin_sum.so` or `my_plugin_sum.dll` from `my_plugin_sum`
    );

    std::cout << hello->function() << ' ';
    }
    {
    boost::shared_ptr<KDeT::DynamicFunction> world;            // variable to hold a pointer to plugin variable
    world = boost::dll::import_symbol<KDeT::WorldFunction>(         // type of imported symbol is located between `<` and `>`
        lib_path / "libworldFunction.so",                     // path to the library and library name
        "function",                                       // name of the symbol to import
        boost::dll::load_mode::append_decorations              // makes `libmy_plugin_sum.so` or `my_plugin_sum.dll` from `my_plugin_sum`
    );

    std::cout << world->function() << std::endl;

    }
}
