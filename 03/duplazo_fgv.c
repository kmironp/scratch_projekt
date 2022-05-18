#include <stdio.h>

int duplaz(int n)
    {
        return 2 * n;
    }

int main()
{
    int szam = 10;
    int dupla = duplaz(szam);
    printf("%d\n", szam);
    printf("%d\n", dupla);
    //printf("%d\n", duplaz(szam)); UA mint fölötte

    return 0;
}
