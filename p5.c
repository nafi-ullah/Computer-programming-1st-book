#include<stdio.h>
struct number
{
    int arr[5];
};
int main()
{
        int i,j,n,max,min,k,row,col;
        int result[10][10];
        struct number line[10];
        char temp;

        scanf("%d",&n);
        for(k=0; k<n;k++){

        for(i=0;i<5;i++)
            {
        scanf("%d%c", &line[k].arr[i],&temp); // scanning for both the integer and the space(as a character)
            }
        }
         // for loop to calculation
    for(k=0;k<n;k++)
  {
max=line[k].arr[0];
min=line[k].arr[0];
for(i=0;i<5;i++)
{
    if(max<line[k].arr[i])
    {
        max=line[k].arr[i];         // max value calculate
    }
    else if(min>line[k].arr[i])
    {
        min=line[k].arr[i];         // min value calculate
    }

}
    for(row=k; row<=k; row++)
    {
        for(col=0; col<2; col++)
        {
            if(col==0)
            {
                result[row][col]=max; // max value store
            }
            else if(col==1)
            {
                result[row][col]=min;   //min value store
            }
        }
    }

}
printf("\n");
for(row=0; row<n; row++)
    {
        for(col=0; col<2; col++)
        {
            printf("%d ",result[row][col]);
        }
        printf("\n");
    }

}
