#include <stdio.h>

float my_abs(float n)
{
    if (n >= 0)
    {
        return n;
    }
    else
    {
        return -1 * n;
    }
}

int main()
{
    float szam = -3.14;
    printf("%.2f\n", szam);
    printf("%.2f\n", my_abs(szam));
    
    return 0;
}
