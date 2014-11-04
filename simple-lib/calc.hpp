#ifndef FILE_GUARD_CALC_HPP
#define FILE_GUARD_CALC_HPP

int Add(int a, int b);

int Subtract(int a, int b);

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
