#include<Iostream>
#include<stack>
#include<vector>
using namespace std;

int main()
{
    int size;
    cin>>size;

    int arr[size];
    cout<<"enter the array:";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int count=0;
    int top=size-1;
    
    stack<int>s;

    for(int i=0;i<size;i++)
    {
        s.push(arr[i]);
    }

    vector<int>v;
    
    if(size%2!=0)
    {   
     while(top>((size)/2))
    {
        int num=s.top();
        v.push_back(num);
        s.pop();
        top--;
    }

    if(top==(size)/2)
    {
        int y=s.top();
        cout<<"The middle element is:"<<y<<endl;
        s.pop();
    }
    }
    else
    {
        while(top>((size-1)/2))
    {
        int num=s.top();
        v.push_back(num);
        s.pop();
        top--;
    }

    if(top==(size-1)/2)
    {
        int y=s.top();
        cout<<"The middle element is:"<<y<<endl;
        s.pop();
    }
    }

    for(int i=v.size()-1;i>=0;i--)
    {
        s.push(v[i]);
    }

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    
}