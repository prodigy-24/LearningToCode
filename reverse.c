#include <stdio.h>


int oddoreven (int a )
{
    int ans = a & 1;
    return ans;

}

int main (void)
{
    char name[1024];

    int class1[10];

    scanf("%s", name);
    printf("your name is = %s\n", name);
    int length;
    length = strlen(name);
    int lastindex = length - 1;
    int rcb = oddoreven (length);
    if (rcb == 0)
    {
        for ( int i =0 ; i<length/2 ; i++, lastindex--)
        {
            char temp = name[i];
            name[i] = name[lastindex];
            name[lastindex] = temp;
        }
            printf("your name is = %s", name);

    }
    else
    {
        for ( int i =0 ; i<length/2-1 ; i++, lastindex--)
        {
            char temp = name[i];
            name[i] = name[lastindex];
            name[lastindex] = temp;
        }
            printf("your name is = %s", name);

    }
}