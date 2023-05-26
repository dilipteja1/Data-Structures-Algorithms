#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

void print_unordered(unordered_map<int,string>& m)
{
    cout<<m.size()<<" "<<endl;
    for(auto &pair : m)
    {
        cout<<pair.first<<" "<<pair.second<<endl;
    }
}

void print(map<int,string>& m)
{
    cout<<m.size()<<" "<<endl;
    for(auto &pair : m)
    {
        cout<<pair.first<<" "<<pair.second<<endl;
    }
}
int main()
{
    map<int ,string >m;
    m[1] =  "Dilip"; //logn
    m[3] = "Teja";
    m[2] = "Polamarasetty";
    print(m);
    
    //erase
    m.erase(3); //logn

    //find 
    auto it= m.find(2); // logn
    if(it==m.end())
        cout<<"NO value"<<endl;
    else{
        cout<<"Found"<<endl;
        cout<<it->first<<" "<<it->second<<endl;
    }

    //unorderd_map - o(1) for insertiona nd deletion etc as it doesnt store the order .Use unordered when possible .But vector, set, etc wont work in unordered_map. Only 
    //primitive data types work 

    unordered_map<int , string> m1;
    m1[1] = "Dilip";
    m1[3] = "Teja";
    m1[2] = "Polamarasetty";
    print_unordered(m1);
        


    

}