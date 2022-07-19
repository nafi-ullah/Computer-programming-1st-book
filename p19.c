#include<stdio.h>

int main()
{
    int n,i,t,j,row,col;
    scanf("%d",&t);
    for(j=0; j<t; j++)
    {
    scanf("%d",&n);
    for(row=0; row<=n; row++)
    {
        for(col=n-row; col>0; col--)
        {
            printf(" ");
        }
        for(col=0; col<2*row-1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    }
}
