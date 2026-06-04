#include<iostream>
using namespace std;
//to check our palindromic string or not

bool func(int i,string &s)
{
    if(i>=(s.size()/2))
    {
        return true;
    }

    if(s[i]!=s[s.size()-i-1])
    {
        return false;
    }
    
    return func(i+1,s);
}


int main()
{
    string r;
    cin>>r;


    cout<<func(0,r);
}