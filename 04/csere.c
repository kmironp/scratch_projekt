#include <stdio.h>

int main()
{
    int a = 20;
    int b = 30;

    printf("Elotte: a=%d, b=%d\n", a, b);

    int tmp = a;
    a = b;
    b = tmp;
    
    printf("Utana: a=%d, b=%d\n", a, b);

    return 0;
}
