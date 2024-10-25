#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string s;
    cout<<"enter the string:";
    cin>>s;

    stack<char>v;

    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];

        if(ch=='{'|| ch=='('||ch=='[')
        {
            v.push(ch);
        }else{
            if(!s.empty())
            {
                char new1=s[i];
              if((new1=='(' && ch==')')||(new1=='{' && ch=='}')||(new1=='['&& ch==']'))
              {
                v.pop();
                  cout<<"True";
                return true;
              } 
              else
              {
                return false;
              }
            }
        }
    }
        if(s.empty())
        {
            cout<<"True";
            return 1;
        }else{
            cout<<"False";
            return 0;
        }
}