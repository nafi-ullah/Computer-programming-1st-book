#include<stdio.h>
int main()
{
    int n,m,t,row,col,i;
    scanf("%d",&t);

    for(i=0; i<t; i++){
    scanf("%d %d",&n,&m);
    printf("Case %d:\n",i+1);
    for(row=0; row<m; row++)
    {
        for(col=0; col<=row; col++)
        {
            printf("%d",n);
        }
        printf("\n");
    }
    }

}
