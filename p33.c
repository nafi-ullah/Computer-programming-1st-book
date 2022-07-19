#include<stdio.h>
#include<string.h>
int main()
{
    char a[8];
    int num[8];
    int i,l,t,j;

    scanf("%d",&t);
    for(j=1; j<=t; j++){
    fflush(stdin);
    gets(a);
    l=strlen(a);

    i=0;
    while(a[i]!='\0')
    {
        num[i]= a[i]-'0';
        i++;
    }
    for(i=0; i<l; i++)
    {
        if(num[i]%2==0 || num[i]==0)
        {
            num[i]= num[i]+1;
        }
        else if(num[i]%2!=0)
        {
            num[i]= num[i]-1;
        }
       printf("%d",num[i]);
    }
    printf("\n");
    }

}
