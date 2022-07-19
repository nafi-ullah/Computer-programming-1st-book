#include<stdio.h>
struct number
{
    char arr[100];
};
int main()
{
    struct number line[20];

    int n,i,k=0,l=0;
    int r[20];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        fflush(stdin);
        gets(line[i].arr);
    }

    for(i=0;i<n;i++)
    {

        while(line[i].arr[k]!='\0')
        {
            if(line[i].arr[k]==' '){
            l++;

            }
            k++;
        }

        k=0;
        l++;
        r[i]=l;
        l=0;
    }
    for(i=0; i<n; i++)
    {
        printf("%d\n",r[i]);
    }

}
