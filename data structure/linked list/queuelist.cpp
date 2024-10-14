#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
// const int xm =1000;
// int arrive[xm];
// int down[xm];
// int store[xm];
class node{

public :
    int value;
    node * next;

    //constructer create for user input
     node(int val)
     {
        value=val;
        next=NULL;
     }

};

node * front=NULL;
node *tail=NULL;

void enqueue(int x)
{
    node * newnode= new node(x);
    if(front==NULL)
    {
        front=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;

}
void dequeue()
{
    node * temp=front;
    front=front->next;
    delete temp;

}
void display()
{
    node * temp=front;
    while(temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main()
{

   enqueue(7);
   enqueue(8);
   enqueue(6);

   display();

   dequeue();
   display();


     }

