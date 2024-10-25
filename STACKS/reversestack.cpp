#include<Iostream>
#include<stack>
using namespace std;

int main()
{
    string str;
    cout<<"enter the string:";
    cin>>str;

    stack<char>v;

    for(int i=0;i<str.length();i++)
    {
        v.push(str[i]);
    }

    string ans="";

    while(!v.empty())
    {
        char ch=v.top();
        ans.push_back(ch);
        v.pop();
    }

    cout<<ans<<endl;
}


/*

By recursion

class Solution{
public:

void func(stack<int>&st,int temp)
{
    if(st.empty())
    {
        st.push(temp);
        return;
    }
    
    int top=st.top();
    st.pop();
    func(st,temp);
    st.push(top);
}
    void Reverse(stack<int> &st){
        if(st.size()==1)
        {
            return;
        }
        
        int temp=st.top();
        st.pop();
        Reverse(st);
        
        func(st,temp);
    }
};





*/
