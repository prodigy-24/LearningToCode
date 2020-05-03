#include <stdio.h>

int main (void)
{
    int class1[10], class2[10];
    printf("madam, please enter scores of class1 students\n");
    for(int i = 0; i < 10 ;i++)
    {
        scanf("%d",&class1[i]);     
    }
    printf("madam, please enter scores of class2 students\n");
    for(int j = 0; j < 10 ; j++)
    {
        scanf("%d",&class2[j]);
    }
    printf("madam these are your students scores represented using #'s\n");
    for(int k = 0 ; k < 10 ; k++)
    {
        for (int l = 0 ; l < class1[k] ;l++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
    for(int k = 0 ; k < 10 ; k++)
    {
        for (int l = 0 ; l < class2[k] ;l++)
        {
            printf("#");
        }
        printf("\n");
    }
}