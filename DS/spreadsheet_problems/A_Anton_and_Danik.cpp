#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int w_a =0,w_d=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
            w_a++;
        else
            w_d++;
    }
    if(w_a>w_d)cout<<"Anton"<<endl;
    else if(w_a<w_d)cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
}