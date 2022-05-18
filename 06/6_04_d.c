#include <stdio.h>
#include "prog1.h"
#include <string.h>

int main(int argc, string argv[])
{
    if(argc ==1)
    {
        printf("Na csa..\n");
    }
    else if(argc == 2)
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
    else
    {
        printf("Nagy a baj\n");
    }

    return 0;
}