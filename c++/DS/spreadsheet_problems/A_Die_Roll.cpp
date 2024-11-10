#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int y,w;
    cin>>y>>w;
    
    string s[6] = {"1/6","1/3","1/2","2/3","4/6","1/1"};
    int k = max(y,w);
    cout<<s[6-k]<<endl;
}