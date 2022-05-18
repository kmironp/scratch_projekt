#include <stdio.h>

int main()
{
    int m = 5;

    for (size_t i = 1; i <= m; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    
    
    return 0;
}
