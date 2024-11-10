#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int res=1;
    for(int i=1;i<n;i++)
    {
        if((a[i-1]==10 && a[i]==1) || (a[i-1]==1 && a[i]==10))res++;
    }
    cout<<res<<endl;

}