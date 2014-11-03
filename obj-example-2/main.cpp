#include "calc.hpp"
#include <boost/lexical_cast.hpp>
#include <iostream>
#include <string>

using namespace std;

int get_number() {
    string str;
    cin >> str;
    return boost::lexical_cast<int>(str);
}

enum class op {
    plus,
    minus
};

op get_operator() {
    char c;
    cin >> c;
    if ('-' == c) {
        return op::minus;
    } else if ('+' == c) {
        return op::plus;
    }
    throw exception("Bad operator!");
}

struct Notifier {
    void notify(int result) {
        cout << "=" << result << endl;
    }
};

void compute() {
    Calculator<Notifier> calc;
    const auto a = get_number();
    const auto o = get_operator();
    const auto b = get_number();
    if (op::plus == o) {
        calc.add(a, b);
    } else if (op::minus == o) {
        calc.subtract(a, b);
    }
}

int main() {
    try {
        while (true) {
            compute();
        }
    } catch(exception e) {
        cerr << "ERROR: " << e.what() << endl;
    }
}
