#include <boost/program_options.hpp>
#include <iostream>
#include <string>

using namespace boost::program_options;

int main(int argc, const char ** argv) {
    try {
        std::string pattern;
        options_description description("Options");
        description.add_options()
            ("help", "Print help message.")
            ("pattern,p", value<std::string>(&pattern)->required(),
             "Waterfall pattern.")
        ;
        variables_map map;
        try {
            store(parse_command_line(argc, argv, description), map);
            if (map.count("help")) {
                std::cout << description;
                return 0;
            }
            notify(map);
        } catch(error & map_error) {
            std::cerr << map_error.what() << std::endl;
            return 1;
        }
        std::cout << "Pattern=" << pattern << std::endl;
    } catch (std::exception & ex) {
        std::cerr << "Error parsing options!" << std::endl;
        std::cerr << ex.what() << std::endl;
        return 1;
    }
    return 0;
}
