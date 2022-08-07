#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    int T ;
    if (n%k==0) T = (n/k)*t ;
    else  T =((n/k)+1)*t;
    if(T-d>t)cout<<"YES"<<endl;
    
    else cout<<"NO"<<endl;

}