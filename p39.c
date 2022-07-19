#include<stdio.h>
int main()
{
    int i,t;
    float bd,in,cr,rr,ball;
    scanf("%d",&t);
    for(i=1; i<=t; i++){
    scanf("%f %f %f",&in,&bd,&ball);

    cr= bd/((300-ball)/6);
    rr= (in+1-bd)/(ball/6);

    printf("%.2f %.2f",cr,rr);
    printf("\n");
    }
}
