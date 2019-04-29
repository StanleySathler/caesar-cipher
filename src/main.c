#include <stdio.h>
#include "caesar_cipher.h"

int
main(int argc, char **argv)
{
  if (!argv[1])
  {
    fprintf(stderr, "Error: You must provide a text to be encoded");
    return(-1);
  }

  printf("[+] Encoding: %s \n", argv[1]);
  printf("[+] Encoded: %s \n", caesar_cipher_encode(argv[1], 3));

  return(0);
}
