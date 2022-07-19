#include<stdio.h>
int main()
{
    int i,t,n,x=0,j;
    scanf("%d",&t);
    for(j=0; j<t; j++){
    scanf("%d",&n);
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            x=1;
        }
    }
    if(x==1)
    {
        printf("%d is not a prime",n);
    }
    else if(x==0)
    {
        printf("%d is a prime",n);
    }
    printf("\n");
    x=0;}
}
