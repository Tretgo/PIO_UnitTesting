#ifndef __MATH_H__
#define __MATH_H__

#include <math.h>
#include <stdint.h>

namespace Math
{

#define ABS(x, type) ((type)abs(x))
#define IN_LIMIT(x, min, max) (x >= min && x <= max)

    uint16_t lim_S16_U16(int16_t val);
    uint16_t testFunkt(uint16_t val);

} // namespace Math
#endif // __MATH_H__