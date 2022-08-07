#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int k,r;
    cin>>k>>r;
    int x=1;
    while(1)
    {
        if((k*x)%10 == r || (k*x)%10 == 0 ) break;
        x++;
    }
    cout<<x<<endl;
}