#include<stdio.h>
struct asci
{
    char arr[3];
};
int main()
{
    struct asci line[10];
    int n,i,k,sum=0;
    int jog[10];
    scanf("%d",&n);

     for(i=0; i<n; i++)
    {
        fflush(stdin);
        gets(line[i].arr);
    }

    for(i=0; i<n; i++)
    {
        for(k=0; k<3; k++)
        {
            sum= sum+line[i].arr[k];
        }
        jog[i]=sum;
        sum=0;
    }
    for(i=0; i<n; i++)
    {
        printf("%d\n",jog[i]);
    }
}
