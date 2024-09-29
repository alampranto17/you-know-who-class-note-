#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
// const int xm =1000;
// int arrive[xm];
// int down[xm];
// int store[xm];

class node
{
public :
    int value;
    node * next;
    node(int val)
    {
        value=val;
        next=NULL;
    }
};

 node * top=NULL;

void push(int x)
{
    node * newnode=new node(x);
    newnode->next=top;
    top=newnode;

}



bool isempty()
{
    if(top==NULL)
    {
        return true;
    }
   return false;
}

void size()
{
    node *temp=top;
    int cont=0;
    while(temp!=NULL)
    {
        cont++;
        temp=temp->next;
    }
    cout<< cont<<endl;
}

void peack()
{
    if(isempty())
    {
        cout<<"stack is empty "<<endl;
        return;
    }

    cout<<top->value<<endl;
}
void pop()
{
    node *temp=top;
    top=top->next;
    delete temp;

}




void display()
{
    node*temp=top;
    while(temp!=NULL)
    {


  cout<<temp->value<<" ";
  temp=temp->next;

    }
    cout<<endl;
}


int main()
{

    push(5);
    push(7);
    push(8);
    display();
    size();
    peack();
    pop();
    display();

    size();
    peack();








     }

