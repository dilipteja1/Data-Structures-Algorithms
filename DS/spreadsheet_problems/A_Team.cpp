#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    int res=0;
    for(int i=0;i<n;i++)
    {
        int tmp=0;
        for(int j=0;j<3;j++)
        {
            if(a[i][j]==1)tmp++;
        }
        if(tmp>=2)res++;
    }
    cout<<res<<endl;
}