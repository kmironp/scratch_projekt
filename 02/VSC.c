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

    //5x kiratas (for)
    
    for (int i = 0; i < 5; i++)
    {
        printf("ötször\n");
    }
    
    // (while)
    
    int i = 0;
    
    while (i < 5)
    {
        printf("ötször\n");
        i++;
    }
    
    
    
    
    return 0;
}
