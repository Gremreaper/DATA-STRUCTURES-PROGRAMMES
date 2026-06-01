#include<iostream>
using namespace std;
class Queue
{
    public:
    int *arr;
    int size;
    int front;
    int rear;
   
   Queue(int size)
   {
       this->size=size;
       arr=new int[size];
       front=rear=-1;
   }
   
   void enque(int elem)
   {
       if(rear==size-1)
       {
           return;
       }else
       {
          rear++;
           arr[rear]=elem;
       }
   }
   
   int deque()
   {
       if(front==rear)
       {
           return -1;
       }else
       {
            front++;
           int x=arr[front];
           return x;
           arr[front]=-1;
           
           if(front==rear)
           {
               front=rear=0;
           }
       }
   }
   
   int front1()
   {
       if(front==rear)
       {
           return -1;
       }else
       {
           return arr[front];
       }
   }
   
   bool isempty()
   {
       if(front==rear)
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
    Queue q(5);
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.deque();
    q.front1();
}