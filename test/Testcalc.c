#include "unity.h"
#include "calc.h"

void test_add()
{
    int output = add(10, 20);
    TEST_ASSERT_EQUAL(30, output);
}

void test_sub()
{
    int output = sub(20, 10);
    TEST_ASSERT_EQUAL(10, output);
}

void test_mul()
{
    int output = mul(10, 2);
    TEST_ASSERT_EQUAL(20, output);
}

void test_mul_overflow()
{
    int output = mul(10000000, 999999999);
    TEST_ASSERT_EQUAL(-1, output);
}

void test_mul_underflow()
{
    int output = mul(-10000000, 99999999);
    TEST_ASSERT_EQUAL(-1, output);
}

void test_div()
{
    int output = div(10, 0);
    TEST_ASSERT_EQUAL(0, output);
}

void test_mod()
{
    TEST_ASSERT_EQUAL(0, mod(10, 2));
    TEST_ASSERT_EQUAL(1, mod(10, 3));
}

void test_power_two()
{
    TEST_ASSERT_EQUAL(9, power_two(3));
}

void test_power_two_overflow()
{
    TEST_ASSERT_EQUAL(-1, power_two(1000000));

}

void test_power()
{
    TEST_ASSERT_EQUAL(8, power(2, 3));
}

void test_is_greater()
{
    TEST_ASSERT_TRUE(is_greater(20, 10));
    TEST_ASSERT_FALSE(is_greater(10, 20));
}

void test_is_equal()
{
    TEST_ASSERT_TRUE(is_equal(10, 10));
    TEST_ASSERT_FALSE(is_equal(10, 9));
}

void test_is_smaller()
{
    TEST_ASSERT_TRUE(is_smaller(9, 10));
    TEST_ASSERT_FALSE(is_smaller(10, 9));
}

void setUp()
{

}

void tearDown()
{

}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    RUN_TEST(test_mul);
    RUN_TEST(test_mul_overflow);
    RUN_TEST(test_mul_underflow);
    RUN_TEST(test_div);
    RUN_TEST(test_mod);
    RUN_TEST(test_power_two);
    RUN_TEST(test_power_two_overflow);
    RUN_TEST(test_power);
    RUN_TEST(test_is_greater);
    RUN_TEST(test_is_equal);
    RUN_TEST(test_is_smaller);

    UNITY_END();

    return 0;
}
