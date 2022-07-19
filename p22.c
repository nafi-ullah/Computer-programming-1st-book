#include<stdio.h>

int main()
{
    int n,i,rem,k=2,temp,j,total_prime,count=0,main;
    int a[100];
    int prime[20];

    while(1)
    {

    scanf("%d",&n);
    if(n<2)
    {
        break;
    }
    j=0; main=n;
    while(1)
    {
    for(i=k; i<=n; i++)
    {
        if(n%i==0)
        {
            rem= n/i;
            break;
        }
    }
    k=i;
    a[j]=i;             // copied all prime with multiple
    n=rem;

    j++;
    if(n==1)
    {
        break;
    }
    }
    temp=j;i=0;

    for(j=0;j<temp; j++)
    {
        if(a[j]!=a[j+1])
        {
            prime[i]=a[j];          // copied only single prime
            i++;
        }
    }
    total_prime= i;

    printf("%d = ",main);
    for(i=0; i<total_prime; i++)
    {
        for(j=0; j<temp; j++)
        {
            if(prime[i]==a[j])
            {
                count++;
            }
        }
        printf("%d^%d ",prime[i],count);
        count=0;
        if(i<(total_prime-1))
           {
               printf("* ");
           }
    }
    printf("\n");
    n=i=rem=temp=j=total_prime=count=0; k=2;
    }
}
