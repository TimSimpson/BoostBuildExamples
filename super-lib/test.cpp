#include "precompiled_headers.hpp"
#include "calc.hpp"

using namespace std;


struct Notifier {
    void notify(int r) {
        result = r;
    }
    int result;
};


int main() {
    Calculator<Notifier> calc;
    calc.add(2, 2);
    if (calc.output.result != 4) {
        return 2;
    } else {
        return 0;
    }
}
