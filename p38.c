#include<stdio.h>
#include<string.h>
int main()
{
    char a[128];
    char b[128];
    char sub[128];
    int i,j,k,v=1,l3,x=0,t,r;
    scanf("%d",&t);
    for(r=1; r<=t; r++){

    scanf("%s",&a);
    scanf("%s",&sub);

    strcpy(b,a);

    l3=strlen(sub);

    i=0;j=0;x=0;
    while(a[i]!='\0')
    {
        for(j=0; j<l3; j++)
        {
            if(a[i]==sub[0])
            {
                k=i;
                for(i=k, j=0; i<k+l3; i++,j++)
                {
                    a[i]=sub[j];
                }
                v=strcmp(a,b);
                if(v==0)
                {
                    x++;
                    i=k;
                }
                else if(v!=0)
                {
                    strcpy(a,b);
                    i=k;
                }
            }
        }

        i++;
    }
    if(x>0)
    {
        printf("%d",x);
    }
    else if(x==0)
    {
        printf("0");
    }

    v=1; k=0;
    printf("\n");
    }
}

