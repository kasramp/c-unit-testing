#include <stdbool.h>
#include <stddef.h>

#ifndef CALC_H
#define CALC_h

int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int mod(int x, int y);
int power_two(int x);
int power(int x, int n);
bool is_equal(int x, int y);
bool is_greater(int x, int y);
bool is_smaller(int x, int y);
void fill_single_digit_positive_number(int arr[], size_t size);
const char *true_as_string();
const char *false_as_string();
#endif
