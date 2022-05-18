#include<stdio.h>

int main()
{
    int oldal;
    
    printf("Adjon meg egy számot: \n");
    scanf("%d", &oldal);
    
    int Kerulet = 4 * oldal;
    int Terulet = oldal * oldal;
    
    printf("Kerulet: %d\n", Kerulet);
    printf("Terulet: %d\n", Terulet);
    
    return 0;
}
