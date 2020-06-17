#include <stdio.h>
#include "calculator.h"
#include "ctest.h"

CTEST(calculator, simple_sum)
{
    // Given
    const float a = 3.123;
    const float b = 9999.321;


    // When
    const float result = sum(a, b);

    // Then
    const float expected = 10002.444;

    ASSERT_EQUAL(expected, result);
}

CTEST(calculator, simple_sub)
{
    // Given
    const float a = 3.123;
    const float b = 9999.321;


    // When
    const float result = sub(a, b);

    // Then
    const float expected = -9996.198;

    ASSERT_EQUAL(expected, result);
}

CTEST(calculator, simple_mul)
{
    // Given
    const float a = 3.123;
    const float b = 9999.321;


    // When
    const float result = mul(a, b);

    // Then
    const float expected = 31227.879483;

    ASSERT_EQUAL(expected, result);
}

CTEST(calculator, simple_del)
{
    // Given
    const float a = 3.123;
    const float b = 9999.321;


    // When
    const float result = del(a, b);

    // Then
    const float expected = 3.123212066099288e-4;

    ASSERT_EQUAL(expected, result);
}
