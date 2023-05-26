#include <bits\stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
typedef long long int ll;

// int lineshelper(int i, int last_index, int flag, vector<int> &nums1, map<int, vector<int>> &mp2, int visited[])
// {
//     if (i > nums1.size() - 1)
//         return 0;
//     else if (mp2.find(nums1[i]) != mp2.end())
//     {
//         vector<int> indices = mp2[nums1[i]];
//         if (flag > indices.size() - 1)
//             return lineshelper(i+1, last_index, 0, nums1, mp2, visited);
//         int index = indices[flag];

//         // not picked
//         int not_picked = lineshelper(i, last_index, flag + 1, nums1, mp2, visited);

//         // // picked
//         // int change = 0;
//         // int visited1[2002] = {0};
//         // for (int j = 0; j <= last_index; j++)
//         // {
//         //     if (j < index)
//         //         visited1[j] = visited[j];
//         //     else if (visited[j])
//         //     {
//         //         change++;
//         //     }
//         // }
//         // visited[index] = 1;
//         // visited1[index]= 1;
//         // if (index > last_index)
//         //     last_index = index;
//         // int picked = 1 - change + lineshelper(i + 1, last_index, 0, nums1, mp2, visited1);
//         // picked
//         int change = 0;
//         for (int j = index; j <= last_index; j++)
//         {
//             if (visited[j])
//             {
//                 change++;
//                 // visited[j]=0;
//             }
//         }
//         visited[index] = 1;
//         // visited1[index]= 1;
//         if (index > last_index)
//             last_index = index;
//         int picked = 1 - change + lineshelper(i + 1, last_index, 0, nums1, mp2, visited);
//         return max(picked, not_picked);
//     }
//     else
//     {
//         return lineshelper(i + 1, last_index, 0, nums1, mp2, visited);
//     }
// }
// int maxUncrossedLines(vector<int> &nums1, vector<int> &nums2)
// {
//     map<int, vector<int>> mp2;
//     // maps with key-> element , value -> indices
//     for (int i = 0; i < nums2.size(); i++)
//     {
//         mp2[nums2[i]].push_back(i);
//     }
//     int visited[2002] = {0};
//     int last_index = -1;
//     int flag = 0;
//     int count = lineshelper(0, last_index, flag, nums1, mp2, visited);
//     return count;
// }

int lineshelper(vector<int> &nums1, vector<int> &nums2, int i,int j){
    if(i>nums1.size()-1 || j>nums2.size()-1) return 0;
    else{
        if(nums1[i]==nums2[j]){
            return 1+lineshelper(nums1,nums2,i+1,j+1);
        }
        else{
            return max(lineshelper(nums1,nums2,i+1,j), lineshelper(nums1,nums2,i,j+1));
        }
    }
}
int maxUncrossedLines(vector<int> &nums1, vector<int> &nums2){
    int count = lineshelper(nums1,nums2,0,0);
    return count;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n1, n2, num;
    cin >> n1 >> n2;
    vector<int> nums1, nums2;
    for (int i = 0; i < n1; i++)
    {
        cin >> num;
        nums1.push_back(num);
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> num;
        nums2.push_back(num);
    }

    int result = maxUncrossedLines(nums1, nums2);
    cout << result;
}