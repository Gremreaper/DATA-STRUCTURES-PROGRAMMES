#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;

    //we have created a stack

    s.push(2);
    s.push(3);
    s.push(4);

    //2-->3-->4

    s.pop();
    //removed the topmost element from stack made

    cout<<s.top()<<endl;
    //top-->3

    cout<<s.size()<<endl;

    if(s.empty())
    {
        cout<<"stack made is empty"<<endl;
    }else
    {
        cout<<"Not empty"<<endl;
    }
}
