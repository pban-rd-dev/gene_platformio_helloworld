
#include <unity.h>

#include "sample.h"

void test_main(void)
{
    TEST_ASSERT_EQUAL(say_greeting(), 0);
}

void app_main(void)
{
  UNITY_BEGIN();

  RUN_TEST(test_main);

  UNITY_END();
}