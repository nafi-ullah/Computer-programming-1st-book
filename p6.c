#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,temp,b,n;
    scanf("%d",&n);
    for(i=0; i<n; i++){

    scanf("%d",&a);
    temp=a;
    a= sqrt(a);

    b=a*a;

    if(b==temp)
    {
        printf("YES\n");
    }
    else if(b!=temp)
    {
        printf("NO\n");
    }
    }

}
