#include<iostream>
using namespace std;
class DEqueue
{ 
    public:
    int *arr;
    int front;
    int rear;
    int size;


    DEqueue(int size)
    {
        this->size=size;
        front=rear=-1;
        arr=new int[size];
    }

    void push_front(int elem)
   {
    //full conditions
    if((front==0 && rear==(size-1))||(rear==(front-1)%(size-1)))
    {
        return;
    }else if(front==-1)
    {
        front=rear=0;
    }else if(front==0 && rear!=(size-1))
    {
        front=(size-1);
    }else{
        front--;
    }
    arr[front]=elem;
   }
    

    void push_rear(int elem)
    {
         if((front==0 && rear==(size-1))||(rear==(front-1)%(size-1)))
    {
        return;
    }else if(front==-1)
    {
        front=rear=0;
    }else if(front!=0 && rear==(size-1))
    {
        rear=0;
    }else{
        rear++;
    }
    arr[rear]=elem;
   }
    
    int pop_front()
    {
        if(front==-1)
        {
            return -1;
        }

        int ans=arr[front];
        arr[front]=-1;
        if(front==rear)
        {
            front=rear=-1;
        }else if(front==(size-1))
        {
            front=0;
        }else{
            front++;
        }

        return ans;
    }

    int pop_rear()
    {
        if(front==-1)
        {
            return -1;
        }

        int ans=arr[front];
        arr[front]=-1;

        if(front==rear)
        {
            front=rear=-1;
        }else if(rear==0)
        {
            rear=(size-1);
        }else{
            rear--;
        }

        return ans;
    }
};

int main()
{
    DEqueue q(5);
    q.push_front(1);
    q.push_front(2);
    q.push_rear(3);
    q.pop_front();
}