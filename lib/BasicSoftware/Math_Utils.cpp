#include "Math_Utils.hpp"
#include "StaticData.hpp"
namespace Math
{
    uint16_t lim_S16_U16(int16_t val)
    {
        if (val > 0)
            return (uint16_t)val;
        else
            return 0u;
    }

    uint16_t testFunkt(uint16_t val)
    {
        return val * Data::TEST;
    }
} // namespace Math