#include <stdio.h>

int main (void)
{
    int scores[5];
    for(int i = 0; i < 5; i++) 
    {
        scanf("%d", &scores[i]);
    }
    for(int i = 0; i < 5; i++)
    {
        int currentscores = scores[i];
        for(int j = 0; j < currentscores; j++ )
        {
            printf("#");
        }
        printf("\n");
    }
      
    printf("\n");
}