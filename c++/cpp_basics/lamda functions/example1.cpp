#include <bits\stdc++.h>
using namespace std;
typedef long long int ll;

vector<int> topKFrequent(vector<int> &nums, int k)
{
    vector<int> result;

    unordered_map<int, int> mpp;
    // precompute the frequencies
    for (auto i : nums)
    {
        mpp[i]++;
    }

    // initialize a heap with a priority queue
    // priority is based on the most frequent element
    auto comp = [&](int n1, int n2)
    {
        return mpp[n1] < mpp[n2];
    };
    priority_queue<int,vector<int>, decltype(comp)> heap(comp);

    for (auto i : mpp)
    {
        heap.push(i.first);
    }

    while (k > 0)
    {
        result.push_back(heap.top());
        heap.pop();
        k--;
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

    int n, num, k;
    cin >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        a.push_back(num);
    }

    vector<int> result = topKFrequent(a, k);
    for(auto i : result)cout<<i<<endl;
}