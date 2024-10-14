#include<bits/stdc++.h>
using namespace std;

template<typename t>class linked_list
{
public :
    t value;
    linked_list * next;



    linked_list(t val)
    {
        value=val;
        next=NULL;
    }




};

template<typename Q>class Queue
{

    linked_list<Q>* first=NULL;

    linked_list<Q>* rear=NULL;

    int count=0;

    public :

              bool  enqueue(int t)
    {
        linked_list<Q> * newnode= new linked_list<Q>(t);
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

    Q dequeue()
    {
        if(first ==NULL )
        {
            cout<<"Queue is underflow"<<endl;
            return -1;
        }
        else if(first == rear)
        {
            linked_list<Q> * delnode=first;
            rear=NULL;
            first=NULL;
            count--;
            Q p=delnode->value;
            delete delnode;
            return p;

        }
        else
        {
            linked_list<Q> * delnode=first;
            first=first->next;
            count--;
            Q p=delnode->value;
            delete delnode;
            return p;



        }
    }

   Q fornt()
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

   Q back()
   {
    if(rear==NULL)
    {
        cout<<"The queue is underflow"<<endl;
        return -1;
    }
    return rear->value;

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

