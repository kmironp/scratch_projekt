#include <stdio.h>


int get_poz_int()
{
    int beszam;

    while(1)
    {
        printf("Pozitiv ertek: ");
        scanf("%d", &beszam);

        if (beszam > 0)
        {
            break;
            //vagy return beszam;
        }
    }
}

int main()
{
    //printf("Adjon meg egy szamot: ");
    int szam = get_poz_int();

    printf("A szam: %d\n", szam);

    return 0;
}
