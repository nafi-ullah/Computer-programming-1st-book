#include<stdio.h>
int main()
{
    int a[100];
    int i,p,k,n;
    double avg,sum=0;
    i=0;
    scanf("%d",&n);
    for(k=0; k<n; k++){
            i=0;
    while(1){
        scanf("%d",&a[i]);
        if(i==a[0])
        {
            break;
        }
        i++;
    }
    p=i;
    for(i=1; i<p+1; i++)
    {
        sum=sum+a[i];
    }
    avg= sum/a[0];
    printf("%.2lf\n",avg);
    sum=0;
    }

}
