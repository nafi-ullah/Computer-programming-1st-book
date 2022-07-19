#include<stdio.h>
#include<string.h>
struct word
{
    char copy[20];
};
int main()
{
    char a[200];
    struct word paste[10];
    int i,n,t,count=0,k,j,l,p,f,e;

    gets(a);
    l=strlen(a);
    a[l]=' ';
    a[l+1]='\0';
    i=0;j=0;k=0;
    while(a[i]!='\0')
    {
        if(a[i]!=' ')
        {
            paste[k].copy[j]=a[i];
            j++;
        }
        else if(a[i]==' ')
        {
            paste[k].copy[j]='\0';
            printf("%d %d\n",k,j);
            k++;
            j=0;
        }
        //printf("%c",a[i]);
        i++;

    }

    k++;
    for(i=0; i<k; i++)
    {
        j=0;
        while(paste[i].copy[j]!='\0')
        {
            for(f=i+1; f<k; f++)
            {
                e=0;
                while(paste[f].copy[e]!='\0')
                {
                    if(paste[i].copy[j]==paste[f].copy[e] && paste[i+1].copy[j+1]==paste[f+1].copy[e]+1)
                    {
                        count++;
                    }
                    e++;
                }
            }
            j++;
        }
        //printf("\n");
    }
    printf("\n count= %d",count);

}
