#include <bits/stdc++.h>
using namespace std;
// notes
// any array inside the main cannot be more that 1e6.
//  where as globally it can be 1e9

//works
int hash1[100000000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute
    // declare an array of size of largest value in the arr.
    int hash[100010] = {0};
    for (int i = 0; i < n; i++)
    {
        hash1[arr[i]]++;
    }

    //using a map
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    //iterate in a map 
    for(auto it: mpp){
        cout<<it.first<< "->" <<it.second <<endl;
    }

    // queries
    int q;
    cin >> q;
    int q1;
    while (q--)
    {
        cin >> q1;
        // cout << hash1[q1] << endl;
        cout<< mpp[q1]++<<endl;
    }
}