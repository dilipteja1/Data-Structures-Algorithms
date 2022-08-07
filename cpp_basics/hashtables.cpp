#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 1000000111

class doublehash{
    int TABLE_SIZE,prime,keyspresent;
    vector<int>hash_table;
    bitset<MAX_SIZE>isprime;
    void __seive(){
        for(long long i=2;i*i<=MAX_SIZE;i++)
        {
            if(isprime[i]==0)
            {
                for(int j=i*i;j<=MAX_SIZE;j+=i)
                {
                    isprime[j]== 1;
                }
            }
        }
    }

    int hash1(int value)
    {
        return value%TABLE_SIZE;
    }

    int hash2(int value)
    {
        return prime - (value%prime);
    }

    bool isfull()
    {
        return keyspresent==TABLE_SIZE;
    }

    public:
        doublehash(int n)
        {
            int TABLE_SIZE = n;
            __seive();
            prime = n-1;
            while(isprime[prime]==1)prime--;
            //initializing the table;
            for(int i=0;i<n;i++)
            hash_table.push_back(-1);

            keyspresent = 0;

        }

        void insert(int value)
        {
                if(value==-1 || value==-2)
                    cout<<"Cannot insert "<<value;

                if(isfull())
                    cout<<"Hash table is Filled";
                
                int probe  = hash1(value);
                int offset = hash2(value);

                while(hash_table[probe]==-1)
                {
                    if(hash_table[probe]==-2)break;
                    probe = (probe+offset)% TABLE_SIZE;
                }
                hash_table[probe]=value;
                keyspresent++;
        }

        void erase(int value)
        {
            if(!search(value))
                cout<<"Value i not found";
            
            int probe = hash1(value);
            int offset = hash2(value);

            while(hash_table[probe]!=-1){
                if(hash_table[probe]==value){
                    hash_table[probe] = -2;
                    keyspresent--;
                    break;
                }
                else
                    probe = (probe+offset)%TABLE_SIZE;
            }
        }

        bool search(int value)
        {
            int probe= hash1(value), offset = hash2(value),initialpos = probe;
            bool firstitr = true;

            while (1)
            {
                if(hash_table[probe]==-1)break;
                else if(hash_table[probe]  == value)
                    return true;
                else if(probe == initialpos && !firstitr)return false;
                else    
                    probe = (probe+offset)%TABLE_SIZE;
                
                firstitr = false;
            }
        }
        /* Function to display the hash table. */
        void print(){
            for(int i = 0; i < TABLE_SIZE; i++)
                cout<<hash_table[i]<<", ";
            cout<<"\n";
        }
}

int main()
{
    doublehash myhash(13);
    
    int insertions[] = {2,3,45,23,45,67};
    int n1 = sizeof(insertions)/sizeof(insertions[0]);

    for(int i=0;i<n1;i++)
        myhash.insert(insertions[i]);

    int searchhash[] = {2,45,7,5,67};
    int n2 = sizeof(searchhash)/sizeof(searchhash[0]);

    for(int i=0;i<n1;i++)
        myhash.search(searchhash[i]);
    myhash.search(searchhash ,n2);

    int deletehash[] = {2,45};
    int n3 = sizeof(deletehash)/sizeof(deletehash[0]);

    myhash.delete(deletehash,n3);

    return 0;

    
}