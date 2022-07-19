#include<stdio.h>

int main()
{
    int n,i,t,one=0,zero=0,x=0,j;
    scanf("%d",&t);
    for(j=0; j<t; j++)
    {
    char a[50];
    fflush(stdin);
    gets(a);
    i=0;x=0;
    while(a[i]!='\0')
    {
        if(a[i]=='1')
        {
            one++;
        }
        else if(a[i]=='0')
        {
            zero++;
        }
        if(zero>one)
        {
            x=1;
            break;
        }
        i++;
    }
    if(x==1)
    {
        printf("MAGIC\n");
    }
    else if(x==0)
    {
        printf("NORMAL\n");
    }
    one=0; zero=0;
    }

}
