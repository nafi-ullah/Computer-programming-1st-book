#include<stdio.h>
#include<stdlib.h>
struct number
{
    int arr[3];
};
int main()
{
        int i,j,n,volume=1,k;
        int vol[10];
        struct number line[10];
        char temp;

        scanf("%d",&n);
        for(k=0; k<n;k++){

        for(i=0;i<3;i++)
            {
        scanf("%d%c", &line[k].arr[i],&temp); // scanning for both the integer and the space(as a character)
            }
        }
  for(k=0;k<n;k++)
  {

for(i=0;i<3;i++)
{                   // for loop to print the array runs
printf("%d   ",line[k].arr[i]);
volume=volume*line[k].arr[i];
}
vol[k]=volume;
volume=1;
printf("\n");
  }
for(i=0; i<n; i++)
{
    printf("%d\n",vol[i]);
}

}

