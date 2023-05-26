

#include <bits/stdc++.h>
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

void testcase()
{
    ll n,k;
    cin>>n>>k;
    vector<int>v(n,0);
    ll sum= 0;
    loopi(0,n){
        cin>>v[i];
        sum+= v[i];

    }
    int currsum=0;
    int i=0;

    while(true){
        if(sum - currsum <= currsum)break;
        currsum += v[i];
        i++;
    }
    if(k==1)cout<<sum<<endl;
    else  cout<<currsum<<endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ll TC = 1;
    // cin >> TC;
    loopi(0, TC)
    {
        testcase();
    }
    return 0;
}
