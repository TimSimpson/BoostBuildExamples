#ifndef FILE_GUARD_CALCCONFIG_HPP
#define FILE_GUARD_CALCCONFIG_HPP

#include <boost/config.hpp>

#if defined(BOOST_ALL_DYN_LINK) || defined(CALCLIB_DYN_LINK)
    #if defined(CALCLIB_BUILD)
        #define CALCLIB BOOST_SYMBOL_EXPORT
    #else
        #define CALCLIB BOOST_SYMBOL_IMPORT
    #endif
#else
    #define CALCLIB
#endif

#endif
