#include <boost/filesystem.hpp>
#include <iostream>

using namespace boost::filesystem;

void ls(const char * const path) {
    if (!exists(path)) {
        std::cerr << "Path does not exist!" << std::endl;
    } else if (!is_directory(path)) {
        std::cerr << "Path isn't a directory!" << std::endl;
    } else {
        directory_iterator end_itr;
        for (auto itr = directory_iterator(path); itr != end_itr; ++ itr) {
            std::cout << *itr << std::endl;
        }
    }
}

int main(int argc, const char * argv[]) {
    if (argc > 1) {
        ls(argv[1]);
        return 0;
    } else {
        std::cerr << "Wrong number of arguments." << std::endl;
        return 1;
    }
}
