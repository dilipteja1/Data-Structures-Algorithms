

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

    vector<int>v{1,23,34,45,50};

    vector<int>::iterator upper1, upper2;
    upper1 = upper_bound(v.begin(), v.end(), 55);
    cout<<"the number is in the index : "<<upper1-v.begin()<<endl;

    //for maps 
    map<int,int>mp;
    mp.insert({12,30});
    mp.insert({30,33});
    mp.insert({15,39});
    mp.insert({17,60});

    auto  it = mp.upper_bound(13);
    cout<<"key is "<<(*it).first<<" value is "<<(*it).second<<endl;


}
