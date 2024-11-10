#include<bits\stdc++.h>
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

int n ;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>> a[i];
}

priority_queue<int>pq;
for(auto i : a){
    pq.push(i);
}
for(auto I :a){
    cout<<pq.top()<<" ";
    pq.pop();
}


}