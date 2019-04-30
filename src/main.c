#include <stdio.h>
#include <string.h>
#include "caesar_cipher.h"

#define IDX_MODE_PARAM  1
#define IDX_TEXT        2

int
main(int argc, char **argv)
{
  int is_encoding = !(strcmp(argv[IDX_MODE_PARAM], "-e"));
  int is_decoding = !(strcmp(argv[IDX_MODE_PARAM], "-d"));

  if (argc < 3 || (!is_encoding && !is_decoding))
  {
    fprintf(stderr, "[ERR]: You must specify a mode and a text. Usage: %s [-e | -d] TEXT \n", argv[0]);
    return(-1);
  }

  if (is_encoding)
    printf("%s", caesar_cipher_encode(argv[IDX_TEXT], 3));
  else if (is_decoding)
    printf("%s", caesar_cipher_decode(argv[IDX_TEXT], 3));

  putchar('\n');
  return(0);
}
