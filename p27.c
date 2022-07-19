#include<stdio.h>
int main()
{
    int a,b,c,t,i,j,k,max,min,rem,sum,l;
    scanf("%d",&t);
    for(l=0; l<t; l++)
        {
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    max=a;
    min=a;
    if(b>a && b>=c)
    {
        max=b;
    }
    else if(c>b && c>a)
    {
        max=c;
    }

    if(b<a && b<=c)
    {
        min=b;
    }
    else if(c<b && c<a)
    {
        min=c;
    }

    rem= sum- (max+min);

    printf("Case %d:\n",l+1);
    for(i=0; i<=min; i++)
    {
        for(j=0; j<=rem; j++)
        {
            for(k=0; k<=max; k++)
            {
                if(i<j && j<k)
                {
                    printf("%d %d %d\n",i,j,k);
                }
            }
        }
    }

     a=b=c=i=j=k=max=min=rem=sum=0;
        }
}
