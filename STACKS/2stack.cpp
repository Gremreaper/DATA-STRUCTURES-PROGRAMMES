#include<iostream>
#include<stack>
using namespace std;
class Stack
{
    public:
    int *arr;
    int top1;
    int top2;
    int size;

    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top1=-1;
        top2=size;
    }

    void push1(int elem)
    {
        if(top2-top1>0)
        {
            top1++;
            arr[top1]=elem;
        }else{
            cout<<"stack overflow"<<endl;
        }
    }

    void push2(int elem2)
    {
        if(top2-top1>0)
        {
            top2--;
            arr[top2]=elem2;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    int pop1()
    {
        if(top1>=0)
        {
            int ans=arr[top1];
            top1--; 
            return ans;
        }else{
            return -1;
        }
    }

    int pop2()
    {
        if(top2<size)
        {
            int ans=arr[top2];
            top2++;
            return ans;
      
        }
        else{
            return -1;
        }
    }
};

int main()
{
    Stack st(3);
    st.push1(1);
    st.push2(2);
    st.push2(8);

    cout<<st.pop1()<<endl;
    cout<<st.pop2()<<endl;
}