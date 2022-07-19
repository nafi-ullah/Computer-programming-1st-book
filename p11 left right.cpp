#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;

int main()
{
    char ara[1000];
    int l,i,t;
    cin>>t;
    while(t--){
    cin>>ara;
    l= strlen(ara);

    for(i=0; i<l; i++)
    {
        if(ara[i]=='L')
        {
            ara[i]= ara[i-1];
        }
        if(ara[i]=='R')
        {
            ara[i]= ara[i+1];
        }
    }
    cout<<ara<<endl;
    }
	return 0;
}
