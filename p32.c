#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4,alx1,alx2,aly1,aly2,lx,ly;
    int tx,ty,t,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++){
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    scanf("%d %d %d %d",&x3,&y3,&x4,&y4);

    alx1= x2+x1;
    alx2= x3+x4;
    aly1= y1+ y2;
    aly2= y3+y4;
    if(alx1<alx2)
    {
        lx= x4-x1;
    }
    else if(alx1>alx2)
    {
        lx= x2-x3;
    }
    if(aly1<aly2)
    {
        ly= y4-y1;
    }
    else if(aly1>aly2)
    {
        ly= y2-y3;
    }
    tx= (x2-x1)+(x4-x3);
    ty= (y2-y1)+(y4-y3);

    printf("Case %d:",i);
    if(tx>lx && ty>ly)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    }
}

/*
    2nd rectangle (x3+x4)> 1st rectange(x1+x2) = 2nd ta 1st tar right a
     (x3+x4)<(x1+x2= 2nd ta 1st tar baame
     jodi daane hoy, x4-x1 approx length
     jodi baame hoy, x2-x3 approx length

     (y3+y4)>(y1+y2)= 2nd ta 1st tar upore
     (y3+y4)<(y1+y2)= 2nd ta 1st tar niche
    upore hoile, (y4-y1)= apprx length
    niche hoile, y2-y3= approx length
     */
