#include<stdio.h>
int main()
{
    int total_marks[]={10,19,55,94,90,94,55,89,68,10,13};
    int i,j,a=1;

    for(i=0; i<11; i++)
    {
        for(j=0; j<11; j++)
        {
            if(total_marks[i]==total_marks[j] && i!=j)
            {
                a=a+1;
            }

        }

        printf("%d got %d \n",total_marks[i],a);
        a=1;
    }
}
