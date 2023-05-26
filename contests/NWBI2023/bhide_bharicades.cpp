#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define loopi(x, n) for (long long i = x; i < n; ++i)
#define loopj(x, n) for (long long j = x; j < n; ++j)
#define loopk(x, n) for (long long k = x; k < n; ++k)
#define rloop(x, n) for (long long r = x; r >= n; --r)



bool three_sum(vector<int> &nums, ll p)
{
    int target = p;
    sort(nums.begin(), nums.end());
    int flag = 0;
     for (int i = 0; i < nums.size(); i++){
        int j = i + 1;
        int k = nums.size() - 1;
        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == target) {
                return true;
                j++;
                k--;
            } else if (sum < target) {
                j++;
            } else {
                k--;
            }
        }
    }
    return false;
}

void testcase()
{
    ll n, m, p;
    cin >> n >> m >> p;
    map<ll,ll> mp;
    vector<int>vec(n,0),sum3;

    loopi(0,n) 
    { 
        cin>>vec[i]; 
        vec[i] %= m;
        if(vec[i] <= p && mp[vec[i]] < 3)
        {
            sum3.push_back(vec[i]);
            mp[vec[i]]++;
        }
    }
    if (three_sum(sum3, p))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
    cin >> TC;
    loopi(0, TC)
    {
        testcase();
    }
    return 0;
}
