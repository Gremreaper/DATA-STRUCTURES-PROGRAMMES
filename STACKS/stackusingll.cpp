#include<bits/stdc++.h>
using namespace std;
class Node{
    public:

    int data;
    Node *next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

class Stack{
    public:

    Node *head;

    Stack()
    {
        this->head=NULL;
    }

    bool isempty()
    {
        return head==NULL;
    }

    void push(int new_data)
    {
        Node *newnode=new Node(new_data);
        if(!newnode)
        {
            cout<<"Stack Overflow";
        }

        newnode->next=head;
        head=newnode;
    }

    void pop()
    {
        if(this->isempty())
        {
            cout<<"stack underflow";
        }else{
            Node *temp=head;
            head=head->next;

            delete temp;
        }
    }

    int peek()
    {
        if(!isempty())
        {
            return head->data;
        }else{
            cout<<"stack is empty"<<endl;
            return INT_MIN;
        }
    }
};
int main()
{
    // Creating a stack
    Stack st;

    // Push elements onto the stack
    st.push(11);
    st.push(22);
    st.push(33);
    st.push(44);

    // Print top element of the stack
    cout << "Top element is " << st.peek() << endl;

    // removing two elemements from the top
      cout << "Removing two elements..." << endl;
    st.pop();
    st.pop();

    // Print top element of the stack
    cout << "Top element is " << st.peek() << endl;
}