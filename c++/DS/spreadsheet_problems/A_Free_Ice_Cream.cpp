#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    long long int n,x;
    cin>>n>>x;
    int dis=0;
    for(int i=0;i<n;i++)
    {
        char ch;int a;
        cin>>ch>>a;
        if(ch=='+')
            x+=a;
        else 
        {
            if(x>=a)x-=a;
            else   dis++;
        }   
            
    }
    cout<<x<<" "<<dis<<endl;
}