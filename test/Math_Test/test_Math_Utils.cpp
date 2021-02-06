#include <unity.h>
#include <stdio.h>
#include "Math_Utils.hpp"

void setUp()
{
}
void tearDown()
{
}

void test_StandardMathFuncts()
{
    TEST_ASSERT_EQUAL_UINT16(0u, Math::lim_S16_U16(-5));
    TEST_ASSERT_EQUAL_UINT16(7u, Math::lim_S16_U16(7));
    TEST_ASSERT_EQUAL_UINT16(500u, Math::lim_S16_U16(500));
    TEST_ASSERT_EQUAL_UINT16(35u, Math::testFunkt(7u));
}

int main(void)
{
    UNITY_BEGIN(); // IMPORTANT LINE!
    RUN_TEST(test_StandardMathFuncts);
    UNITY_END(); // stop unit testing
}