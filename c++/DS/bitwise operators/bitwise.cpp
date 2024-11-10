#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int b = 30;
    //bitwise and  -> converts the integr into binary and performs the bitwise and 
    cout<<(a&b)<<endl;
    //bitwise or -> converts the integr into binary and performs the bitwise or 
    cout<<(a|b)<<endl;
    //bitwise xor -> output is 1 only if one both are different 
    cout<< (a^b)<<endl;
    //left shift  -> x<<k shifting x to left bitwise k times
    cout<<(1<<3)<<endl;
    //right shift -> x>>k shifting x to right bitwise k times 
    cout<<(1>>3)<<endl;
    //bitset big binary number 
    bitset<350>c;
    cout<<c;
}