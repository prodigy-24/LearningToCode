#include <stdio.h>

int main (void)
{
    int strength1,strength2;
    printf("madam plzz enter strength of the class1\n");
    scanf("%d",&strength1);
    printf("madam plz enter strength of the class2\n");
    scanf("%d",&strength2);
    int class1[strength1], class2[strength2];
    printf("madam, please enter scores of class1 students\n");
    for(int i = 0; i < strength1 ;i++)
    {
        scanf("%d",&class1[i]);     
    }
    printf("madam, please enter scores of class2 students\n");
    for(int j = 0; j < strength2 ; j++)
    {
        scanf("%d",&class2[j]);
    }
    printf("madam these are your students scores represented using #'s\n");
    for(int k = 0 ; k < strength1 ; k++)
    {
        for (int l = 0 ; l < class1[k] ;l++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
    for(int k = 0 ; k < strength2 ; k++)
    {
        for (int l = 0 ; l < class2[k] ;l++)
        {
            printf("#");
        }
        printf("\n");
    }
}