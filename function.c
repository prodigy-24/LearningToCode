#include<stdio.h>

int add(int a, int b) {
    int sum = a + b;
    return sum;
}


int sub(int a, int b)
{
    int dif = a - b;
    return dif;
}
int multi(int a, int b)
{
    int sot = a*b;
    return sot;
}
int divi (int a , int b)
{
    int remi= a/b;
    return remi;
}

int main(void) {
    int dummy = add(5, 1003);
    printf("%d\n", dummy);

    int mummy = sub(1,2);
    printf("%d\n", mummy);

    int tummy = multi(5,5);
    printf("%d\n",tummy);

    int ammy = divi(4,2);
    printf ("%d\n",ammy);
}
