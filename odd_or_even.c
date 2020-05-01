#include <stdio.h>

int oddoreven (int a )
{
    int ans = a & 1;
    return ans;

}
int main (void)
{
    int no ;
    scanf ("%d",&no);
    int rcb = oddoreven (no);
    if  (rcb == 0 )
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}