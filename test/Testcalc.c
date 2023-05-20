#include <stddef.h>

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

void test_fill_single_digit_positive_number()
{
	int expected_arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	size_t expected_size = sizeof(expected_arr) / sizeof(expected_arr[0]);

	int arr[9];
	size_t arr_size = sizeof(arr) / sizeof(arr[0]);

	fill_single_digit_positive_number(arr, arr_size);

	TEST_ASSERT_EQUAL_INT_ARRAY(expected_arr, arr, expected_size);

	TEST_ASSERT_EQUAL_MEMORY(expected_arr, arr, expected_size);
}

void test_true_as_string()
{
	TEST_ASSERT_EQUAL_STRING("true", true_as_string());
	TEST_ASSERT_EQUAL_STRING_LEN("truz", true_as_string(), 3);
	TEST_ASSERT_NOT_NULL(true_as_string());
	TEST_ASSERT_EQUAL_MEMORY("true", true_as_string(), 4);
}

void test_false_as_string()
{
	TEST_ASSERT_EQUAL_STRING_MESSAGE("false", false_as_string(),
					 "The output should be 'false'");
	TEST_ASSERT_EQUAL_STRING_LEN_MESSAGE("falze", false_as_string(), 3,
					     "First three characters should be 'tru'");
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
	RUN_TEST(test_fill_single_digit_positive_number);
	RUN_TEST(test_true_as_string);
	RUN_TEST(test_false_as_string);

	UNITY_END();

	return 0;
}
