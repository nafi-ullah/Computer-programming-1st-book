#include<stdio.h>
#include<math.h>
int main()
{

    int h,b,r,i,t;

    scanf("%d",&t);

    for(i=0; i<t; i++)
    {

    scanf("%d %d",&b,&h);
    r= b*h;
    printf("Case %d: %d\n",i+1,r);
    }

}
