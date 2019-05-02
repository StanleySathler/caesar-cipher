#include "assert.h"
#include "../src/caesar_cipher.h"

void
test_caesar_cipher_encode()
{
  char* encoded = caesar_cipher_encode("Stanley", 3);
  assert_string("vwdqohb", encoded, "Should encode correctly");
}

void
test_caesar_cipher_decode()
{
  char* decoded = caesar_cipher_decode("xyfsqjd", 5);
  assert_string("stanley", decoded, "Should decode correctly");
}

int
main()
{
  test_caesar_cipher_encode();
  test_caesar_cipher_decode();
  return(0);
}
