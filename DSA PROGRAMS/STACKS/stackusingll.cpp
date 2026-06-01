#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *next;
    int data;

    Node(int data)
    {
        this->next=NULL;
        this->data=data;
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
        Node *root=new Node(new_data);
        if(!root)
        {
            cout<<"condition overflow"<<endl;
        }else{
            root->next=head;
            head=root;
        }
    }

    void pop()
    {
        if(this->isempty())
        {
            cout<<"condition underflow";
        }else{
            Node *temp=head;
            head=head->next;
            delete(temp);
        }
    }

    int peek()
    {
        if(!isempty())
        {
            return head->data;
        }else{
            return -1;
            cout<<"No peek element present";
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