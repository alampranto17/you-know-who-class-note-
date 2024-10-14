#include<bits/stdc++.h>
using namespace std;

class node
{
    public :
    int value;
    node * next;
    node * pre;

    node(int x)
    {
        value=x;
        next=NULL;
        pre=NULL;
    }



};

class stacked
{
    node * head=NULL;
    node * top=NULL;
    int count=0;

    public :
    //push
    bool push(int x)
    {
      node * newnode= new node(x);
      if(head==NULL)
      {
          head=newnode;
          top=newnode;
          count++;
        return true;
      }
      newnode->pre=top;
      top->next=newnode;
      top=newnode;
      count++;

     return true;
    }



    //pop
    int pop()
    {
        node * del=top;
        int chk=del->value;
        if(head==NULL)
        {
            cout<<"stack is underflow"<<endl;
            return -1;
        }

        if(head=top)
        {
            head=top=NULL;

        }
        else
        {
        top=top->pre;
        top->next=NULL;

        }
        delete del;
        count--;
        return chk;

    }




    //top
    int Top()
    {
        if(top==NULL)
        {
            cout<<"stack is underflow"<<endl;
            return 0;
        }
        return top->value;
    }


    //size
    int size()
    {
        return count;
    }
    //empty
    bool empty()
    {
        if(head==NULL)
        {
            return true;
        }
        return false;
    }




};

