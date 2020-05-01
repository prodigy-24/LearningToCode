#include <stdio.h>

int main (void)
{
    char name[1024];
    scanf ("%s",name);
    int length;
    length = strlen(name);
    for (int i = length-1; i >= 0; i-- )
    {
        printf ("%c",name [i]);
    }
}