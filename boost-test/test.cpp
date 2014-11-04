#define BOOST_TEST_MODULE CalcTests
#include <boost/test/unit_test.hpp>
#include "calc.hpp"

using namespace std;


struct Notifier {
    void notify(int r) {
        result = r;
    }
    int result;
};


BOOST_AUTO_TEST_CASE(calc_test) {
    Calculator<Notifier> calc;
    calc.add(2, 2);
    BOOST_REQUIRE(4 == calc.output.result);
}
