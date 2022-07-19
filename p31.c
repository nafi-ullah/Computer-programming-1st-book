#include<stdio.h>

int main()
{
    int sm,s,mi,h,d,mo,y,one_year,one_mon,one_day,i,t;
    one_year= (12*30*24*60*60);
    one_mon= (30*24*60*60);
    one_day= (24*60*60);
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
    scanf("%d",&sm);


        y= sm/(12*30*24*60*60);
        sm= sm- (y*(12*30*24*60*60));


        mo= sm/(30*24*60*60);
        sm= sm-(mo*(30*24*60*60));


        d= sm/(24*60*60);
        sm= sm- (d*(24*60*60));


        h= sm/3600;
        sm= sm-(h*3600);

        mi= sm/60;
        sm= sm- ((mi*60));


    s= sm;
    printf("Case %d: ",i);
    if(y>0)
    {
        printf("%d year ",y);
    }
    if(mo>0)
    {
        printf("%d month ",mo);
    }
    if(d>0)
    {
        printf("%d day ",d);
    }
    if(h>0)
    {
        printf("%d hour ",h);
    }
    if(mi>0)
    {
        printf("%d minute ",mi);
    }
    if(s>0)
    {
        printf("%d second ",s);
    }
    printf("\n");
    }
}
