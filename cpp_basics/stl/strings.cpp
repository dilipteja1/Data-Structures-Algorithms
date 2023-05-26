#include<bits\stdc++.h>
using namespace std;

int main()
{
    string s1;
    string s2(5,'D');
    //gets the string until space eg. dilip is a good boy . It only stores dilip
    cin>>s1;
    cout<<"String is "<<s1<<endl;
    cout<<"String is "<<s2<<endl;
    s1.append(s2);
    cout<<s1<<endl;
    //clear
    string s3;
    s3 = "Dilip Teja";
    s3.clear();
    cout<<s3<<endl;

    //compare subtracts the AScii values of the strings lexographically
    string s4= "bc";
    string s5 = "bc";
    cout<<s5.compare(s4)<<endl;
    if(!s4.compare(s5))
    {
        /* code */
        cout<<"They both are  equal"<<endl;
    }

    //empty
    if(s3.empty()){
        cout<<"String s3 is empty"<<endl;
    }
    
    //erasing few characters
    string s6 = "Dilipramuteja";
    s6.erase(5,4);
    cout<<s6<<endl;

    //find string in a string
    string s7 = "Dilipisateja";
    if(s7.find("isa")){
        cout<<s7.find("isa")<<" found the string"<<endl;
    }

    //insert
    string s8 = "Manam";
    s8.insert(2,"Ramu");
    cout<<s8<<endl;

    //substring 
    string s9 = s8.substr(2,3);
    cout<<s9<<endl;

    //string to integer
    string s10 = "345";
    int x = stoi(s10);
    cout<<x<<endl;

    //integer to string
    int x1 = 336;
    string s11 =to_string(x1);
    cout<<s11+'2'<<endl;

    //sorting a string lexicographically 
    string s12 = "ssfkshf";
    sort(s12.begin(),s12.end());
    cout<<s12<<endl;


}