#include<stdio.h>
int main()
{
    int j,n,t;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%d",&n);
        if(n==0)
        {
            printf("even\n");
        }
        else if(n%2==0)
        {
            printf("even\n");
        }
        else if(n%2!=0)
        {
            printf("odd\n");
        }

    }

}

