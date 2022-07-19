#include<stdio.h>
int main()
{
    int i,n,m,t,div,j;
    scanf("%d",&t);
    for(j=0; j<t;j++)
    {
        scanf("%d %d",&n,&m);
        div=m/n;
    printf("Case %d: ",j+1);
        for(i=1; i<=div; i++)
        {
            printf("%d ",n*i);
        }
    printf("\n");
    }
}
