#include<stdio.h>

int main()
{
    //v1
    int n;
    printf("Adjon meg egy egesz szamot: \n");
    scanf("%d", &n);
    
    if (n % 2 == 0)
    {
        printf("paros\n");
    }
    else 
    {
        printf("paratlan\n");
    }    

    return 0;

    //v2
    for(int i = 10; i > 0; i--)
    {
        if ( i % 2 ==0)
        {
            printf("%d", i)
        }
    }

    //v2
    for(int i = 10; i > 0; i-=2)
    {
        printf("%d", i)
    }
    prinf ("\n");

    //v3

    int i = 10;
    while (i > 1)
    {
        if(i % 2 == 0)
        {
            printf ("%d\n", i);
        }
        i--;
    }

    return 0;
}