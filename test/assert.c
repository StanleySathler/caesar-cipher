#include <stdio.h>
#include <string.h>
#include "assert.h"

/**
 * @brief Asserts two strings.
 */
void
assert_string(const char* expected, const char* actual, const char* message)
{
  if (strcmp(expected, actual) != 0)
  {
    printf(RED_TEXT);
    printf("[FAIL] %s \n", message);
    printf("* Expected: char* '%s' \n", expected);
    printf("* Actual: char* '%s' \n", actual);
    printf(RESET_TEXT);
  }
  else
  {
    printf(GREEN_TEXT);
    printf("[SUCCESS] %s \n", message);
    printf(RESET_TEXT);
  }
}
