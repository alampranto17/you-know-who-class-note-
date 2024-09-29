#include<bits/stdc++.h>
using namespace std;
class node{

public :
    int value;
    node * next;
    node * pre;

    node(int val)
    {
        value=val;
        next=NULL;
        pre= NULL;
    }




};

void display(node *n)
{
    cout<<"Double linked list : "<<endl;
    while(n!=NULL)
    {
        cout<<n->value<<" ";
        n=n->next;
    }

}

void createlist(node * &head,int value)
{
    node * wnode= new node(value);

    if(head==NULL)
    {
        head=wnode;
        return;
    }
    node * temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    wnode->next=temp->next;
    (*temp).next=wnode;
    wnode->pre=temp;
}





int main()
{
    node * head=NULL;

    int x;
    cin>>x;
    cout<<"enter "<<x<<" value"<<endl;
    while(x--)
    {
       int t;
       cin>>t;
       createlist(head,t);
    }

    display(head);
}
