#include<stdio.h>
int main()
{
    int arr[10];
    int i,sum=0,avg,n,j;
    char temp;
    scanf("%d",&n);
    for(j=0; j<n; j++){
    for(i=0; i<5; i++)
    {
        scanf("%d%c",&arr[i],&temp);
    }

    for(i=0;i<5;i++)
    {
        sum= sum+arr[i];
    }
    avg= sum/5;
    printf("%d\n",avg);
    sum=0;
    }
}
