#include "mix.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// not yet #include <getopt.h>


/*
 * returns :
 * - 0 -> success
 * - 1 -> help provided
 * - 2 -> error
*/
int main(int argc, char *argv[])
{
    if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0)
    {
        // print help
        printf("help");
        return 1;
    }
    else if ((strcmp(argv[1], "-t") || strcmp(argv[1], "--target")) && argc == 3)
    {
        // exec with argv[2] as the target string
        size_t n = strlen(argv[2]) - 1;
        char * s = malloc(n + 1);

        if(s == NULL)
        {
            printf("error: allocation failed :(");
            return 2;
        }

        strcpy(s, argv[2]);
        mix(s, n);
        printf("%s", s);
        free(s);
        return 0;
    }
    else
    {
        printf("error: read (shuffle -h) :)");
        return 2;
    }
}

// int main()
// {
//     char s[] = "text to shuffle here";
//     size_t n = strlen(s) - 1;
//     mix(s, n);
//     printf("%s", s);
//     return 0;
// }