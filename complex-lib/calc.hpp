#ifndef FILE_GUARD_CALC_HPP
#define FILE_GUARD_CALC_HPP

#include "CalcConfig.hpp"

int CALCLIB Add(int a, int b);

int CALCLIB Subtract(int a, int b);

template<typename Output>
class Calculator {
public:
    Calculator()
    :   output()
    {
    }

    void add(int a, int b) {
        notify(Add(a, b));
    }

    void subtract(int a, int b) {
        notify(Subtract(a, b));
    }

    Output output;

private:

    void notify(int result) {
        output.notify(result);
    }
};

#endif
