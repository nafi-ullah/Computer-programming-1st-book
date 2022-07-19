#include<stdio.h>
int main()
{
    char a[6];
    char s1,s2;
    int i,t;
    scanf("%d",&t);
    for(i=0; i<=t; i++)
    {
    gets(a);

        if(a[0]== a[3] || a[0]==a[4])
        {
            s1=a[0];

        }
        else{
            s1='N';
        }
        //s2
        if(a[1]== a[3] || a[1]==a[4])
        {
            s2=a[1];

        }
        else{
            s2='N';
        }
        //print
        if(s1!='N' && s2!='N' && s1>s2)
        {
            printf("%c%c\n",s2,s1);
        }
        else if(s1!='N' && s2!='N' && s1<s2)
        {
            printf("%c%c\n",s1,s2);
        }
        else if(s1!='N' && s2!='N' && s1==s2)
        {
            printf("%c\n",s2);
        }
        else if(s1=='N' && s2!='N')
        {
            printf("%c\n",s2);
        }
        else if(s2=='N' && s1!='N')
        {
            printf("%c\n",s1);
        }
        else if(s1=='N' && s2=='N')
        {
            printf("N\n");
        }
    }

}

