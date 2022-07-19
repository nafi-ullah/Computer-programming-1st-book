#include<stdio.h>
#include<string.h>

int main()
{
    char a[500];

    int i,l,j,k=0,t;
    scanf("%d",&t);
    for(j=0; j<t; j++)
    {
    fflush(stdin);
    gets(a);

    i=0;
    while(a[i]!='\0')
    {
        if(a[i]==' ')
        {
            k++;
        }
        i++;
    }
    k++;

    printf("%d\n",k*420);
    k=0;
    }

}
