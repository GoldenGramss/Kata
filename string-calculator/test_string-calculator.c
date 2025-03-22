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

static void test_1_string(void)
{
   TEST_ASSERT_EQUAL_UINT8(1, string_calculator("1"));
}

static void test_1_1_string(void)
{
   TEST_ASSERT_EQUAL_UINT8(2, string_calculator("1,1"));
}

static void test_1_2_string(void)
{
   TEST_ASSERT_EQUAL_UINT8(3, string_calculator("1,2"));
}

static void test_1_newline_2_string(void)
{
   TEST_ASSERT_EQUAL_UINT8(3, string_calculator("1\n2"));
}

static void test_1_coma_newline_2_string(void)
{
   TEST_ASSERT_EQUAL_UINT8(0, string_calculator("1,\n2"));
}

static void test_12_coma_2_newline_13_string(void)
{
   TEST_ASSERT_EQUAL_UINT8(27, string_calculator("12,2\n13"));
}


int main(void)
{
   UNITY_BEGIN();

   RUN_TEST(test_empty_string);
   RUN_TEST(test_1_string);
   RUN_TEST(test_1_1_string);
   RUN_TEST(test_1_2_string);
   RUN_TEST(test_1_newline_2_string);
   RUN_TEST(test_1_coma_newline_2_string);
   RUN_TEST(test_12_coma_2_newline_13_string);


   return UNITY_END();
}
