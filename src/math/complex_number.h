#ifndef MYPROJECT_MATH_COMPLEX_NUMBER_H
#define MYPROJECT_MATH_COMPLEX_NUMBER_H

/*! @ingroup group_math */
namespace myproject {
    namespace math {

        /*! @ingroup group_math */
        class complex_number {

            private:
                double r;
                double i;

            public:
                complex_number(double r, double i);
                complex_number & add(const complex_number &op);
                complex_number & subtract(const complex_number &op);
        };
    }
}

#endif
