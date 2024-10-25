#include<Iostream>
#include<stack>
using namespace std;

class Stack
{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=0;
    }

    void push(int x)
    {
        if(size-top>0)
        {
            arr[top]=x;
            top++;
        }else
        {
            cout<<"stack overflow"<<endl;
        }
    }

    void pop()
    {
        if(top>=0)
        {
            top--;
        }else{
            cout<<"stack underflow"<<endl;
        }
    }

    int peek()
    {
        if(top>=0 && top<size)
        {
            return arr[top];
        }else
        {
          cout<<"stack is empty"<<endl;
          return -1;
        }
    }

    bool isempty()
    {
        if(top==0)
        {
            return true;
        }else
        {
            return false;
        }
    }
};

int main()
{
    int size;
    int elem;

    cout<<"enter the size:";
    cin>>size;

    Stack st(size);

    int value=size;

    while(value!=0)
    {
    cout<<"enter the element:";
    cin>>elem;

    st.push(elem);

    value--;
    }

    st.pop();

    cout<<st.peek()<<endl;

    cout<<st.isempty()<<endl;

}