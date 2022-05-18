#include <stdio.h>
#include "prog1.h"
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if(argc > 2)
    {
        printf("Nagy a baj.\n");
        exit(1);
    }

    if(argc ==1)
    {
        printf("Na csa..\n");
    }
    else 
    {
        if(strcmp(argv[1], "Batman") == 0 || strcmp(argv[1], "Robin") == 0)
        {
        printf("Ezt nem vagyok hajlando leirni.\n");
        }
        else
        {
            printf("Na csa, %s\n", argv[1]);
        }
    }

    return 0;
}