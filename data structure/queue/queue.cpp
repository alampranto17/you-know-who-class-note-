#include<bits/stdc++.h>
using namespace std;

class linked_list
{
public :
    int value;
    linked_list * next;



    linked_list(int val)
    {
        value=val;
        next=NULL;
    }




};

class Queue
{

    linked_list* first=NULL;

    linked_list* rear=NULL;

    int count=0;

    public :

              bool  enqueue(int t)
    {
        linked_list * newnode= new linked_list(t);
        if(first == NULL && rear == NULL)
        {
            first=rear=newnode;
            count++;
            return true ;
        }
        else
        {
            rear->next=newnode;
            rear=newnode;
            count++;
            return true;

        }
    }

    int dequeue()
    {
        if(first ==NULL )
        {
            cout<<"Queue is underflow"<<endl;
            return -1;
        }
        else if(first == rear)
        {
            linked_list * delnode=first;
            rear=NULL;
            first=NULL;
            count--;
            int p=delnode->value;
            delete delnode;
            return p;

        }
        else
        {
            linked_list * delnode=first;
            first=first->next;
            count--;
            int p=delnode->value;
            delete delnode;
            return p;



        }
    }

   int peck()
   {
       if(first==NULL)
       {
           cout<<"The queue is underflow"<<endl;
           return -1;
       }
       else
       {
           return first->value;
       }
   }

   bool empty()
   {
       if(first==NULL && rear==NULL && count==0)
       {
           return true;
       }
       else
       {
           return false;
       }
   }

   int size()
   {
       return count;
   }




};

int main()
{
    Queue q;
    q.enqueue(8);
    q.enqueue(7);
    while(! q.empty())
    {
        cout<<q.dequeue()<<endl;
    }
    return 0;
}
