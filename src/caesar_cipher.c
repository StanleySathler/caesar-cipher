#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief The alphabet containing 26 different chars.
 */
static char alphabet[26] = {
  'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
  'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
  'u', 'v', 'w', 'x', 'y', 'z',
};

/**
 * @brief Finds the letter index in the alphabet.
 */
int
caesar_cipher_find_index(char letter)
{
  if (letter > 64 && letter < 91)
    letter = (letter + 32);

  for (int i = 0; i < 26; i++)
    if (alphabet[i] == letter)
      return i;

  fprintf(stderr, "[-] Error: the char %c was not found in the alphabet \n", letter);
  return(-1);
}

/**
 * @brief Finds the index of the encoded letter.
 */
char
caesar_cipher_shift(char letter, unsigned short int key)
{
  int index = caesar_cipher_find_index(letter);
  return ((index + key) % 26);
}

/**
 * @brief Encodes the given text.
 */
char*
caesar_cipher_encode(char* text, unsigned short int key)
{
  char* encoded = malloc(strlen(text) + 1);

  for (int i = 0; text[i]; i++)
    encoded[i] = alphabet[caesar_cipher_shift(text[i], key)];
  encoded[strlen(text)] = '\0';

  return encoded;
}
