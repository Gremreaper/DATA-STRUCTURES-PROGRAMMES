#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        //initialized first node
        this->data=data;
        this->next=NULL;
    }

    //insert at start
};
     void insertathead(Node *&head,int d)
    {
        Node *temp=new Node(d);
        temp->next=head;
        head=temp;
    }
    void insertattail(Node *&tail,int d)
    {
        Node *temp=new Node(d);
        tail->next=temp;
        tail=tail->next;
    }
    
    void insertatpos(Node *&head,int d,int pos)
    {
        int cnt=1;
        Node *temp=head;
        while(cnt<pos-1)
        {
            temp=temp->next;
            cnt++;
        }

        //creating our position node
        Node *insert=new Node(d);
        insert->next=temp->next;
        temp->next=insert;
    }

    void deleteNode(int position,Node *&head)
     {
        if(position==1)
        {
            //delete first node
            Node *temp=head; 
            head=head->next;
            temp->next=NULL;
            delete(temp);


        }else{
            //delete any middle node

            Node *del=head;
            Node *prev=NULL;

            int cnt=1;
            while(cnt<position)
            {
                prev=del;
                del=del->next;
                cnt++;
            }

            //now we have one position behind and del one

            prev->next=del->next;
            delete(del);
        }
     }

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


int main()
{
    Node *node1=new Node(10);
    /*cout<<node1->data<<endl;
    cout<<node1->next<<endl;*/
    //head pointed to node1
    Node *head=node1;
    Node *tail=node1;
    insertathead(head,12);
    print(head);
    insertathead(head,16);
    print(head);
    insertattail(tail,15);
    print(head);
    insertattail(tail,20);
    print(head);
    insertatpos(head,22,3);
    print(head);
    deleteNode(0,head);
    print(head);
}