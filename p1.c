#include<stdio.h>
int main()
{
    int t,i,n,pos=0,neg=0;

    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        if(n>0)
        {
            pos++;
        }
        else if(n<0)
        {
            neg++;
        }
    }
    printf("%d %d",pos,neg);
}
