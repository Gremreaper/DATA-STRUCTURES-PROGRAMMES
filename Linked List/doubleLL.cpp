#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void print(Node *&head)
    {
        Node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }

        cout<<endl;

    }

void insertathead(int d,Node *&head)
{
    Node *temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}


void insertattail(int d,Node *&tail)
{
    Node *curr=new Node(d);
    tail->next=curr;
    curr->prev=tail;
    tail=curr;
}

void insertatpos(int position,int d,Node *&head,Node *&tail)
{
    if(position==1)
    {

        insertathead(d,head);
        return;
    }
    Node *curr=new Node(d);
    Node *temp=head;
    int count=1;
    while(count<position-1)
    {
        temp=temp->next;
        count++;
    }

    curr->next=temp->next;
    temp->next->prev=curr;
    //3rd node's prev is pointing to adding node
    temp->next=curr;
    curr->prev=temp;
}

void deleteatpos(int position,Node *&head)
{
    if(position==1)
    {
        Node *temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;

        delete(temp);

    }

    //delete for the position

    Node *curr=head;
    Node *curr2=NULL;

    int cnt=1;
    while(cnt<position)
    {
        curr2=curr;
        curr=curr->next;

        cnt++;
    }

    curr2->next=curr->next;
    curr->prev=NULL;
    curr->next=NULL;

    delete(curr);
}
//to get the length of dll
int getlength(Node *&head)
{
    Node *temp=head;
    int len=0;

    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }

    return len;
}

int main()
{
    Node *node1=new Node(10);
    Node *head=node1;
    Node *tail=node1;

    print(head);

    cout<<getlength(head)<<endl;

    insertathead(12,head);
    print(head);

    insertattail(25,tail);
    print(head);

    insertatpos(1,19,head,tail);
    print(head);

    deleteatpos(1,head);
    print(head);
}