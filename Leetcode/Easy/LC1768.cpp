
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

 string mergeAlternately(string word1, string word2) {
        string result;
        int i=0, j=0;
        while(i< word1.length() && j < word2.length()){
            result += word1[i];
            result += word2[j];
            i++;j++;
        }
        if(i == word1.length()){
            while(j < word2.length()){
                result += word2[j];
                j++;
            }
        }
        else {
            while(i < word1.length()){
                result += word1[i];
                i++;
            }
        }
        return result;
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    string s1, s2; 
    cin>>s1>> s2; 
    string result = mergeAlternately(s1, s2);
    cout<<result<<endl;
    return 0;

}
