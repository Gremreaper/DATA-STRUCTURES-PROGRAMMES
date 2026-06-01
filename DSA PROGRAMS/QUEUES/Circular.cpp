#include<iostream>
using namespace std;
class CQ
{
    public:
    int size;
    int front;
    int rear;
    int *arr;

    CQ(int size)
    {
        this->size=size;
        arr=new int[size];
        front=rear=-1;
    }

    bool isfull()
    {
        if((front==0 && rear==size-1)||(rear==(front-1)%(size-1)))
        {
           return true;
        }else
        {
            return false;
        }
    }

    void enque(int elem)
    {
        if(front==0 && rear==size-1)
        {
            return;
        }else if(front==0 && rear!=(size-1))
        {
            rear++;
            arr[rear]=elem;
        
        }else if(front!=0 && rear==(size-1))
        {
            rear=0;
            arr[rear]=elem;
        }
    }

    int deque()
    {
         if(front==-1)
         {
            return -1;
         } 

         int ans=arr[front];
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
};

int main()
{
    CQ c(5);
    c.enque(1);
    c.enque(2);
    c.deque();
}