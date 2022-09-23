#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "mix.h"

const char separator[34] = " ,;:!?./%*$=+)^_-('&1234567890\"\r\n";

void mix(char s[], size_t n)
{
    size_t start = 1;
    size_t end = -1;
    for (size_t i = 0; i < n; i++)
    {
        if (isSeparator(s[i]))
        {
            end = i - 1;
            shuffle(s, start, end);
            start = i + 2;
        }
    }
    // shuffle last word
    shuffle(s, start, n - 1);
}

void shuffle(char s[], size_t start, size_t end)
{
    srand(time(NULL)); // init random
    if (end - start >= 2)
    {
        // i = 1 pour skip la première lettre d'un mot
        for (size_t i = start; i < end; i++)
        {
            size_t j = i + rand() / (RAND_MAX / (end - i) + 1);
            swapchar(&s[i], &s[j]);
        }
    }
}

void swapchar(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

bool isSeparator(char c)
{
    char *pPosition = strchr(separator, c);
    return pPosition != NULL;
}