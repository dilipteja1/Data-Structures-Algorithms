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

    // empty capture list
    auto lamda1 = [](int a, int b)
    {
        return a + b;
    };
    cout << lamda1(100, 230) << endl;

    // capturing the local variables by value
    int i = 22;
    auto lamda2 = [i](int a, int b)
    {
        return a + b + i;
    };
    cout << lamda2(100, 230) << endl;
    ;

    // capturing the local variables by reference
    int j = 299;
    auto lamda3 = [&j](int a, int b)
    {
        j++;
        return a + b + j;
    };
    cout << lamda3(100, 230) << endl;
    cout << j << endl;

    //= in capture list means use all the local variables by value
    // & in capture list means use all the local variables by reference
    int j1 = 34;
    auto lamda4 = [&](int a, int b)
    {
        return a + b + i + j + j1;
    };
    cout << lamda4(100, 230) << endl;

    // for_each usage.
    vector<int> v{2, 3, 4, 5, 6, 7};
    double total = 0;
    for_each(v.begin(), v.end(),
             [&](int x)
             {
                 total += x;
             });
    cout << "the sum is " << total << endl;
    


    
}
