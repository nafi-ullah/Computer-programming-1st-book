#include<stdio.h>

int main()
{
    int n,count=0,i;
    int a[20];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]>=80 && a[i]<=100)
        {
        count++;
        printf("case %d: A+\n",count);
        }
        else if(a[i]>=75 && a[i]<=79)
        {
        count++;
        printf("case %d: A\n",count);
        }
        else if(a[i]>=70 && a[i]<=74)
        {
        count++;
        printf("case %d: A-\n",count);
        }
        else if(a[i]>=65 && a[i]<=69)
        {
        count++;
        printf("case %d: B+\n",count);
        }
        else if(a[i]>=60 && a[i]<=64)
        {
        count++;
        printf("case %d: B\n",count);
        }
        else if(a[i]>=55 && a[i]<=59)
        {
        count++;
        printf("case %d: B-\n",count);
        }
        else if(a[i]>=50 && a[i]<=54)
        {
        count++;
        printf("case %d: C\n",count);
        }
        else if(a[i]>=45 && a[i]<=49)
        {
        count++;
        printf("case %d: D\n",count);
        }
        else if(a[i]>=0 && a[i]<=44)
        {
        count++;
        printf("case %d: F\n",count);
        }
    }
}
