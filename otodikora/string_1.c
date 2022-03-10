#include <stdio.h>
#include "prog1.h"

int main()
{
    string szo = "Sensei"; 
    printf("%s\n", szo);
    
    string nev = get_string("Add meg a neved: "); 
    printf("Hello %s\n", nev);

    return 0;
}