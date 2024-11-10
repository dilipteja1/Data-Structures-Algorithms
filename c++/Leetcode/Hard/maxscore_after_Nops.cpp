#include <bits\stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
typedef long long int ll;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

map<int, int> dp;
int score_helper1(vector<int> &nums, int operations, int mask)
{
    if (operations == 0)
        return 0;
    if (dp[mask])
        return dp[mask];
    int score = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if ((mask & (1 << i)) && (mask & (1 << j)) && (i != j))
            {
                score = max(score, (operations * __gcd(nums[i], nums[j])) + score_helper1(nums, operations - 1, mask ^ (1 << i) ^ (1 << j)));
            }
        }
    }
    dp[mask] = score;
    return score;
}

int maxScore(vector<int> &nums)
{
    int n = nums.size();
    int mask = (1 << n) - 1;
    // int score = score_helper(vect, visited, visited_count, operation, 0,dp);
    return score_helper1(nums, n / 2, mask);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n1, num;
    cin >> n1;
    vector<int> nums1;
    for (int i = 0; i < n1; i++)
    {
        cin >> num;
        nums1.push_back(num);
    }

    int result = maxScore(nums1);
    cout << result;
}