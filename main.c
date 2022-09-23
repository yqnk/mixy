#include "mix.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc > 2)
    {
        printf("Error: to many arguments supplied.");
        return 1;
    }

    size_t n = strlen(argv[1]) - 1;
    char * s = malloc(n + 1);

    if(s == NULL)
    {
        printf("Error: allocation failed");
    }

    strcpy(s, argv[1]);
    mix(s, n);
    printf("%s", s);
    free(s);
    return 0;
}

// int main()
// {
//     char s[] = "text to shuffle here";
//     size_t n = strlen(s) - 1;
//     mix(s, n);
//     printf("%s", s);
//     return 0;
// }