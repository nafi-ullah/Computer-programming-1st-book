#include<stdio.h>
#include<math.h>
int main()
{

    float a,b,c,dif1,dif2,div1,div2;
    int i,t;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
    scanf("%f %f %f",&a,&b,&c);
    dif1= b-a;
    dif2= c-b;
    div1=b/a;
    div2=c/b;

    printf("Case %d:",i+1);

    if(dif1==dif2 && div1==div2)
    {
        printf("Both");
    }
    else if(dif1==dif2 && div1!=div2)
    {
        printf("Arithmetic Progression");
    }
    else if(dif1!=dif2 && div1==div2)
    {
        printf("Geometric Progression");
    }
    else if(dif1!=dif2 && div1!=div2)
    {
        printf("None");
    }
    printf("\n");
    }
}
