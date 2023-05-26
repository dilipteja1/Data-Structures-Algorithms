#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>>a{n+1, vector<int>(m+1,0)};
        int num;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>num;
                a[i][j] = num;
            }
        }
        int row=n;
        int col= m;
        int i=1;
        int j=1;
        int mincost = 1e9;
        while(true){
            if(row-i <=0 || col-j <=0)break;

            int curr_cost =0;
            for(int x =1;x<=i;x++){

                curr_cost += a[row-x][col];
            }
            for(int y = 1;y<=j;y++){
                curr_cost += a[row][col-y];
            }
            curr_cost -= a[row-i][col-j];
            if(curr_cost <=mincost) mincost = curr_cost;
            i++;
            j++;
        }
        cout<<mincost <<endl;
    }
}