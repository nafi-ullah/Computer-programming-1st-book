#include<stdio.h>
int main()
{
    int n,i,count=0,t,j;
    scanf("%d",&t);
    for(j=0; j<t; j++){
    scanf("%d",&n);
    for(i=1; i<10000001; i= i*10)
    {
        if(n>i)
        {
            count++;
        }
        else if(n<i)
        {
            break;
        }
    }
    if(n==0)
    {
        count=1;
    }
    printf("%d\n",count);
    count=0;
    }
}

