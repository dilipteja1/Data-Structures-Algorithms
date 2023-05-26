//Minimum Number of Vertices to Reach All Nodes


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

vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
    
    map<int,vector<int>>mp;
        for(auto edge : edges){
            mp[edge[0]].push_back(edge[1]);
        }
    auto comp = [&](const int &a , const int &b){
        return mp[a].size()>= mp[b].size();
    };
    map<int, vector<int>, decltype(comp)> mp1(comp);
    for(auto i : mp){
        mp1.insert(i);
    }
    // mp1 = mp;
    // mp1(mp.begin(),mp.end());
    for(auto i : mp1){
        cout<<i.first<<"  - [";
        for(auto j : i.second){
            cout<<j<<" ";
        }
        cout<<"]"<<endl;
    }

    vector<int>visited(n, -1);
    for(auto m: mp1){
        visited[m.first]
    }

    

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n,m;
    cin>>n>>m;
    vector<vector<int>>edges;
    for(int i=0;i<m;i++){
        int a, b;
        vector<int>temp;
        cin>>a>>b;
        temp.push_back(a);
        temp.push_back(b);

        edges.push_back(temp);
    }
    findSmallestSetOfVertices(n, edges);

}
