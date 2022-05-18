#include <stdio.h>
#include <stdlib.h>
#include "prog1.h"

int main()
{
    string s1 = "234";
    int n = atoi(s1);

    printf ("%d\n", n);

    string s2 = "3.14";
    double d = atof(s2);
    printf("%lf\n", d);

    return 0;
    
    }