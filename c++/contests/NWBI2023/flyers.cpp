#include <bits\stdc++.h>
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
	cin>>t;
	while(t--){
	    int n, X;
	    cin>>n>>X;
	    vector<int>p,c;
	    int num;
	    for(int i=0;i<n;i++){
	        cin>>num;
	        p.push_back(num);
	    }
	    for(int i=0;i<n;i++){
	        cin>>num;
	        c.push_back(num);
	    }
	    vector<vector<int>>cp{n,vector<int>(3,0)};
	    for(int i=0;i<n;i++){
            cp[i][0] = p[i];
            cp[i][1] = c[i];
            int cpp = c[i]/p[i];
            cp[i][2] = cpp;
	    }
	    auto comp = [](vector<int>& a, vector< int>&b){
	      return a[2]<b[2];  
	    };
	    sort(cp.begin(),cp.end(),comp);
        // for(auto i : c){
        //     cout<<i<<" "<<endl;
        // }
        // for(auto i: cp){
        //     cout<<i[0]<<" "<<i[2]<< endl;
        // }
	    int curr_cost =0;
	    int pages= 0;
	    for(int i=0;i<n;i++){
	        if(curr_cost > X)break;
            while(cp[i][0]>0){
                if(cp[i][2]+curr_cost <=X){
                     curr_cost += cp[i][2];
                     pages++;
                     cp[i][0] -=1;
                }
                else break;
            }
	    }
	    
	    cout<<pages<<endl;
	    
	    
	}
	return 0;

}