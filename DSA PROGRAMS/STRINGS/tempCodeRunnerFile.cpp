#include<iostream>
using namespace std;
int main()
{
    //reverse a string

    string s;
    cin>>s;


    int n=s.length();

    int i=0;
    int j=n-1;

    while(i<n/2 && j>n/2)
    {
        char temp;
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }

    for(int i=0;i<n;i++)
    {
        cout<<s;
    }
}