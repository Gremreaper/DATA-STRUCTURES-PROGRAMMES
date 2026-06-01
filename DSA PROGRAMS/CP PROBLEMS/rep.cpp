#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int counter=1;
    int maxi_val=1;
    for(std::string::size_type i=1;i< s.length();i++)
    {
      if(s[i]==s[i-1])
      {
        counter++;
      }else{
        maxi_val=max(maxi_val,counter);
        counter=1;
      }
    }

    maxi_val=max(maxi_val,counter);

    cout<<maxi_val<<endl;
}