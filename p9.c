#include<stdio.h>
int main()
{
    int i,count=0,j,x=0,rem,n,k;
    int a[10];
    scanf("%d",&n);
    for(k=0; k<n; k++){

    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<10; i++)
    {
    for(j=2; j<a[i]; j++)
        {
            rem=a[i]%j;
            if(rem==0)
            {
                x=1;
            }
        }
        if(x==0 && a[i]!=1)
        {
            count++;
        }
    x=0;
    }
    printf("%d\n",count);
    count=0;
    }
}

