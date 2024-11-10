#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w[5] = {2,4,7,8,5};
    int sum =14;
    bitset<100000>a;
    a[0]=1;
    for(int i=0;i<5;i++)
    {
        a |=(a<<w[i]);
    }
    if(a[sum])cout<<"YES"<<endl;
}