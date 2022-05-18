#include<stdio.h>

int main()
{
    int a = 20;
    int b = 3;
        
    printf("%d + %d = %d\n", a, b, a + b);
    int c = a - b;
    printf("%d - %d = %d\n", a, b, c);
    
    printf("%d * %d = %d\n", a, b, a * b);
    
    printf("%d / %d = %d\n", a, b, a / b);
    
    double d = 20.0;
    double e = 3.0;
    
    printf("%lf / %lf = %lf\n", d, e, d / e);
    
    printf("%d %% %d = %d\n", a, b, a % b);
    
    return 0;
}
