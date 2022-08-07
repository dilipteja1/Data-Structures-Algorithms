#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6] = {2,4,5,6,9,1};
    int sum = 10;
    for(int mask =0;mask < (1LL<<6);mask++)
    {
        int sum1=0;
        for (int index=0;index<=6;index++)
        {

            if( mask & (1<<index))sum1+=a[index];
        }
        if(sum1==sum)
        {
            cout<<"YES for "<<mask<<endl;
            
        }
            
        
    }
    cout<<"NO"<<endl;
}