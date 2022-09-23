#include <stddef.h>
#include <stdbool.h>

#ifndef MIX_H
#define MIX_H

/*
 * Function: mix
 * --------------------
 * Shuffles every word in the given char s[] of length n (in-place).
*/
void mix(char* s, size_t n);

/*
 * Function: shuffle
 * ------------------------
 * Shuffles a word in a char s[] between the two given limits start and end (in-place).
*/
void shuffle(char s[], size_t start, size_t end);

/*
 * Function: swapchar
 * ----------------------------
 * Swaps two letters in a given char [] (in-place).
*/
void swapchar(char *a, char *b);

/*
 *
 * Function: isSeparator
 * -------------------------------
 * Checks if the given char is contained in the "separator" char [].
*/
bool isSeparator(char c);

#endif