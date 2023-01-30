#include<stdio.h>

int main()
{
    int n = 5;
    int mid = n/2+1;
    int i,j;

    for ( i = 1; i <= n; i++)
    {
       for ( j = 1; j <= n; j++)
       {
        if (i == 1 || i + j == n + 1)
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }
        
       }
       printf("\n");
       
    }
    
    return 0;
}