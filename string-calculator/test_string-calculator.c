#include "test-framework/unity.h"
#include "string-calculator.h"

void setUp(void)
{
}

void tearDown(void)
{
}



static void test_empty_string(void)
{
   TEST_ASSERT_EQUAL_UINT8(0, string_calculator(""));
}

int main(void)
{
   UNITY_BEGIN();

   RUN_TEST(test_empty_string);

   return UNITY_END();
}
