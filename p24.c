#include<stdio.h>
int main()
{
    int a[3];
    int i,max,j=0,k,t,r;
    int b[3];
    scanf("%d",&t);
    for(r=1; r<=t; r++)
    {

        for(k=0; k<3; k++)
        {
            scanf("%d",&a[k]);
        }

        for(j=0; j<3; j++){
            max= a[0];
        for(i=0; i<3; i++)
        {
            if(max<a[i])
            {
                max= a[i];
            }
        }
        b[j]=max;


        for(i=0; i<3; i++)
        {
            if(b[j]==a[i]){
                a[i]=0;
            }

        }
        }
        printf("Case %d: ",r);
        for(j=2; j>=0; j--)
        {
            printf("%d ",b[j]);
        }
        printf("\n");
        i=max=j=0;
    }
}
