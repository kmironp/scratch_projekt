#include<stdio.h>

int main()
{
    int szam;
    int db = 0;
    
    do
    {
        printf("Adjon meg egey számot(vege 0): ");
        scanf("%d", &szam);
        db++;
    }while (szam != 0);

    db--;

    printf("%d a darab erteket adott meg", db);
    
    return 0;
}