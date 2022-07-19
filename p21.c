#include<stdio.h>
int main()
{
    int h1,m1,s1,h2,m2,s2,n,t,i,hs,ms,ss,res;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
    scanf("%d %d %d",&h1,&m1,&s1);
    scanf("%d %d %d",&h2,&m2,&s2);
    scanf("%d",&n);
    if(h2<h1 && h2<23)
    {
        h2= h2+24;
    }
    hs= (h2-h1)* 3600;
    ms= (m2-m1)* 60;
    ss= (s2-s1);
    res= (hs+ms+ss)*n ;
    printf("%d\n",res);

    h1=m1=s1=h2=m2=s2=n=0;
    }
}
