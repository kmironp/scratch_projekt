#include <stdio.h>
#include "prog1.h"

int get_int(string s)
{
    int n;
    printf("%s", s);
    scanf("%d", &n);

    return n;
}

int main()
{
    int szam = get_int("Adjon meg egy egesz szamot: ");
    printf("A szam: %d\n", szam);

    return 0;
}