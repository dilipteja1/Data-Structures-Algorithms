#include<iostream>
using namespace std;

int main()
{
    int n, h;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int wid = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=h)wid+=1;
        else wid+=2;
    }
    cout<<wid<<endl;

}