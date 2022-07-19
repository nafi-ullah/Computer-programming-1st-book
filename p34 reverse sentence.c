#include<stdio.h>
#include<string.h>
struct sentence
{
    char word[15];
};
int main()
{
    struct sentence reverse[15];
    int count=1,i,j,k,l,t,f;
    char sen[150];
    scanf("%d",&t);
    for(f=1; f<=t; f++)
    {
    fflush(stdin);
    gets(sen);
    l= strlen(sen);
    i=0; j=0;k=0;
    while(sen[i]!='\0')
    {
        if(sen[i]!=' ')
        {
            reverse[j].word[k]= sen[i];
            k++;
        }
        else if(sen[i]==' ')
        {
            reverse[j].word[k]= '\0';
            j++;
            count++;
            k=0;
        }
        i++;
    }
    reverse[j].word[k]= '\0';

    for(i=count-1; i>=0; i--)
    {
        j=0;
        while(reverse[i].word[j]!='\0')
        {
            printf("%c",reverse[i].word[j]);
            j++;
        }
        printf(" ");
    }
    count=1; i=j=k=l=0;
    printf("\n");
    }
}
