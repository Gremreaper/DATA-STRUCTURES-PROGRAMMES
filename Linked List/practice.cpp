/* we are practicing implementation of stack now
*/

#include<iostream>
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
        top=-1;
    }
};


void push(int elem)
{
  if(size-top>1)
  {
    top++;
    arr[top]=elem;
  }else
  {
    cout<<"Overflow condition"<<endl;
  }
}

void pop()
{
    if(top>=0)
    {
        top--;
    }else
    {
        cout<<"Stack underflow";
    }
}

int peek()
{
   if(top>=0 && top<size)
   {
      return arr[top];
   }else
   {
    cout<<"empty stack"<<endl;
   }
}

bool isempty()
{
    if(top==-1)
    {
        return true;
    }else
    {
        return false;
    }
}


int main()
{
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.isempty();
    s.pop();
    s.top();
}