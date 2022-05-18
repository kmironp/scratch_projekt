#include <stdio.h>

int get_int()
{
    int n;
    scanf("%d", &n);

    return n;
}

int get_poz_int()
{
    int beszam;

    while(1)
    {
        printf("Pozitiv ertek: ");
        scanf("%d", &beszam);

        if (beszam > 0)
        {
            //break;
            return beszam;
        }
        else
        {
            printf("Adjon meg egy uj erteket\n");
        }
    }
}

int kerulet(int n)
{
    return n*4;
}

int terulet(int n)
{
    return n*n;
}

int main()
{
    printf("Adja meg a negyzet oldalhosszat: ");
    int oldal = get_poz_int();

    int k = kerulet(oldal);
    int t = terulet(oldal);

    printf("Kerulet: %d\n", k);
    printf("Terulet: %d\n", t);
    
    return 0;
}
