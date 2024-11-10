

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
    pair <int,int> p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int, pair<int,int>>p1 = {1, {2,3}};
    cout<<p1.first << " "<< p1.second.first<< " "<< p1.second.second<<endl;
    //array of pairs
    pair<int,int>parr[] = {{1,2}, {3,4}, {5,6}};
    for(int i=0;i<3;i++){
        cout<<parr[i].first<<" "<<parr[i].second<<endl;
    }
    return 0;
}


