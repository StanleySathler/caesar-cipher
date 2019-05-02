#ifndef __ASSERT_H__
#define __ASSERT_H__

  #define RED_TEXT    "\033[0;31m"
  #define RESET_TEXT  "\033[0m"
  #define GREEN_TEXT  "\033[0;32m"

  /**
   * @brief Asserts two strings.
   */
  void
  assert_string(const char* expected, const char* actual, const char* message);

#endif /* __ASSERT_H__ */
