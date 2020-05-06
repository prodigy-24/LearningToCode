#include <stdio.h>

int  main (void)
{
    int a,b;
    scanf("%d %d",&a ,&b);
    printf("a = %d,b=%d\n", a, b);
    int c;
    c =a;
    a =b;
    b= c;
    printf("a = %d,b=%d", a, b);

}
