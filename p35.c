#include<stdio.h>
int main()
{
    int n,i,t,rem,div,l,j,p,x,y,k;
    int bin[10];
    scanf("%d",&t);
    for(k=0; k<t; k++){
    scanf("%d",&p);
    if(p==1)
    {
        x=0; y=1;
    }
    if(p==2)
    {
        x=2; y=3;
    }
    if(p==3)
    {
        x=4; y=7;
    }
    if(p==4)
    {
        x=8; y=15;
    }
    if(p==5)
    {
        x=16; y=31;
    }
    if(p==6)
    {
        x=32; y=63;
    }
    if(p==7)
    {
        x=64; y=127;
    }
    if(p==8)
    {
        x=128; y=255;
    }


    for(j=x; j<=y; j++)
    {
    i=0;n=j;
    while(1)
    {
        div=n/2;
        bin[i]= n%2;
        n=div;
        i++;
        if(n==0)
        {
            break;
        }
    }
    l=i-1;
    for(i=l; i>=0; i--)
    {
        printf("%d",bin[i]);
    }
    printf("\n");
    }
    }
}
