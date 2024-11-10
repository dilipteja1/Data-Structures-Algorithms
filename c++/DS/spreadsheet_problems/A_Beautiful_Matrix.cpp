#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int a[5][5];
    int row=0;int col=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1){
                row=i;col=j;
            }
        }
    }
    int res = abs(2-row)+abs(2-col);
    cout<<res<<endl;
}