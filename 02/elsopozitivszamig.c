#include<stdio.h>

int main()
{
    int szam;
    printf("Adjon meg egy egesz szamot: \n");
    scanf("%d", &szam);
    
    while (szam <= 0)
    {
        if (szam > 0)
        {
        printf("A szám: %d\n", szam);
        break;
        }   
        else
        {
            printf("Adjon meg egy egesz szamot: \n");
            scanf("%d", &szam);
        }
    }
    
    //v2
    int n;

    do
    {
        printf("Adjin meg egy pozitív számot: ");
        scanf ("%d", &n);

    }
    while (n <= 0);

    printf("\n");
    printf("A szám %d\n", n);

    return 0;
}
