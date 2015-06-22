#include "complex_number.h"

namespace myproject {
    namespace math {

        complex_number::complex_number(double r, double i) : r(r), i(i) {};

        complex_number & complex_number::add(const complex_number &op) {
            r += op.r;
            i += op.i;
            return *this;
        }

        complex_number & complex_number::subtract(const complex_number &op) {
            r -= op.r;
            i -= op.i;
            return *this;
        }
    }
}
