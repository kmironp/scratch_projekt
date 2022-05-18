#include<stdio.h>

int main()
{
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
}
