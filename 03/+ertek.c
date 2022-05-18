#include <stdio.h>

int main()
{
    int szam;

    while (1)
    {
        printf("Pozitiv ertek: ");
        scanf("%d", &szam);

        if (szam > 0)
        {
            break;
        }
    }
    
    printf("A szam: %d\n", szam);

    return 0;
}
