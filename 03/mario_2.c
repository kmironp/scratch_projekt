#include <stdio.h>

int main()
{
    int m = 5;

    for (size_t i = 1; i <= m; i++)
    {
        int szokoz = m - i;
        int tegla = i;

        for (size_t j = 1; j <= szokoz; j++)
        {
            printf(" ");
        }

        for (size_t j = 0; j < tegla; j++)
        {
            printf("#");
        }
        

        printf("\n");
    }
    
    
    return 0;
}
