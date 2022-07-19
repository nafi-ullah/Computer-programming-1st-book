#include<stdio.h>
int main()
{
    int m,row,col,t,i;
    scanf("%d",&t);
    for(i=0;i<t; i++)
    {
    scanf("%d",&m);

    for(row=0; row<m; row++)
    {
        for(col=0; col<m; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    }

}

