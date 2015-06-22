#include "factorial.h"

namespace myproject {
    namespace math {

        int fact(int n) {
            int fact = 1;
            int i;

            for (i = 1; i <= n; i++) {
                fact *= i;
            }

            return fact;
        }
    }
}
