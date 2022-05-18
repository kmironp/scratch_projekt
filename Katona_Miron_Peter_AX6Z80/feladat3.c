#include <stdio.h>

void fibonacci()
{
    int a = 1;
    int b = 1;
    int c;
    int legelso = 1000000000;
    while (1)
    {
        c = a+b;
        a = b;
        b = c;

        if(c >= legelso)
        {
            printf("%d\n", c);
            break;
        }
    }
}

int main()
{
    fibonacci();

    return 0;
}
