#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void display(vector<int>& vec)
{
    cout<<"size of vector is "<<vec.size()<<" ";
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    //dynamic array - vector   
    //different initializations 
    vector<int>vec;
    vector<int>vec1(5);//5 length Vector 
    vector<int> vec2(5,0);//5 lenght vector with each value as 0


    int size;
    cin>>size;
    cout<<vec.capacity()<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element : "<<endl;
        int x;
        cin>>x;
        vec.push_back(x);
    }
    display(vec);
    vec.pop_back();
    display(vec);
    //changing value at a certain place 
    vec2.at(2)= 4;
    display(vec2);

    //inserting at a certain position
    vector<int>:: iterator iter = vec2.begin();
    vec2.insert(iter+2,3,345);
    display(vec2);

    //sorting
    sort(vec2.begin(),vec2.end());
    display(vec2);

    



    

}