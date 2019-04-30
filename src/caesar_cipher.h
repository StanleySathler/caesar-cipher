#ifndef __CAESAR_CIPHER_H__
#define __CAESAR_CIPHER_H__

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
  caesar_cipher_find_index(char letter);

  /**
   * @brief Finds the index of the encoded letter.
   */
  char
  caesar_cipher_shift(char letter, unsigned short int key);

  /**
   * @brief Encodes the given text.
   */
  char*
  caesar_cipher_encode(char* text, unsigned short int key);

#endif /* __CAESAR_CIPHER_H__ */
