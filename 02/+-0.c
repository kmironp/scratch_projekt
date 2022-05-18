#include<stdio.h>

int main()
{
    //pozitiv negativ nulla    
    
    int szam;
    printf("Adjon meg egy szamot: \n");
    scanf("%d", &szam);
    
    if (szam > 0)
    {
        printf("pozitv\n");
    }
    else if (szam < 0)
    {
        printf("negatib\n");    
    }
    else 
    {
        printf("nulla\n");
    }    

    return 0;
}