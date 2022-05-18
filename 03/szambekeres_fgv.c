#include <stdio.h>

int get_int()
{
    int n;
    scanf("%d", &n);

    return n;
}

int main()
{
    printf("Adjon meg egy szamot: ");
    int szam = get_int();

    printf("A szam: %d\n", szam);

    return 0;
}
