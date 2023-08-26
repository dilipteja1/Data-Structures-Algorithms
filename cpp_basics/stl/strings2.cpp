

#include <bits\stdc++.h>
using namespace std;
typedef long long int ll;
//loops
#define loopi(x, n) for (long long i = x; i < n; ++i)
#define loopj(x, n) for (long long j = x; j < n; ++j)
#define loopk(x, n) for (long long k = x; k < n; ++k)
#define rloop(x, n) for (long long r = x; r >= n; --r)
//prints
#define printv(v)             for(auto &i: v){cout << i << " ";} cout << endl;
#define printmap(mp)          for(auto &i: mp){cout << i.first << " "<<i.second<<endl;}
#define printset(st)          for(auto &i: st){cout << i << " ";} cout << endl;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
 //iterators
    string::iterator it;
    string::reverse_iterator rit;

    string a = "geeksforgeeks";

    string b = "gfg";

    for(it = a.begin() ; it != a.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    for(rit = a.rbegin(); rit != a.rend(); rit++){
        if(rit == a.rbegin()+1) *rit = 'S';
        cout<< *rit<<" ";
    }
    cout<<endl;

    //cbegin and cend are also iterators but they are constant i.e we cannot change the contents of the variable the
    //iterator is pointing to


    //swap;
    a.swap(b);
    cout<<a<<endl;
    a.swap(b);
    cout<<a<<endl;

    //copy 
    
}
