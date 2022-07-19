#include<stdio.h>
int main()
{
    int n,t,i,j;
    scanf("%d",&t);

    for(j=0; j<t; j++)
        {
    scanf("%d",&n);
    printf("Case %d:",j+1);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    i=1;
        }
}
