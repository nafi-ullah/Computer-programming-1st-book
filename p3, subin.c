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
            if(line[i].arr[k]>='0' && line[i].arr[k]<='9'){
            line[i].arr[k]= line[i].arr[k]-48;

            }
            else id(line[i].arr[k]==' ')
            {
                line[i].arr[k]=line[i].arr[k]-31;
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
