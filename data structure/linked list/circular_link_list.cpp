#include<bits/stdc++.h>
using namespace std;

//single linked list

class Node
{
    public :
    int value;
    Node * next;

    Node(int val)
    {
        value= val;
        next=NULL;
    }
};

// universel head;

Node * head=NULL;

void insertion_at_head(int x)
{
    Node * newnode=new Node(x);
    newnode->next=head;
    head=newnode;
}

//circular linked list
void insertion_at_tail(int x)
{
    Node * newnode=new Node(x);
    Node* temp=head;

    if(head==NULL)
    {
        head= newnode;
        head->next=head;    //circle making

    }
    else
    {
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=head;
    }


}
// display
void display()
{
    Node *temp=head->next;
    cout<<head->value<<" ";
    while(temp->value!=head->value)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
bool circle_detection()
{
    Node * fast= head;
    Node * slow=head;

    while(true && fast!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            return true;
        }
    }
    return false;
}

bool circle_remove()
{

    Node *  fast=head;
    Node * slow= head;

    do
    {
        fast=fast->next->next;
        slow=slow->next;

    }while(slow!=fast);

    //now fast will be head;
    fast= head;

    while(fast->next!=slow->next)
    {
        fast=fast->next;
        slow=slow->next;
    }

    slow->next= NULL;

    return true;

}

void deletion_at_head()
{
    Node * temp=head;
    Node * delnode=head;

    while(temp->next!=head)
    {
        temp=temp->next;
    }
    head= head->next;
    temp->next=head;
    delete delnode;


    cout<<"successfully done"<<endl;

}

void deletion_at_tail()
{
    Node * temp=head;
    while(temp->next->next!=head)
    {
        temp=temp->next;
    }
    Node * delnode=temp->next->next;
    temp->next=head;

    delete delnode;

    cout<<"successfully done"<<endl;
}



int main ()
{
     cout<<"1.Insertion at tail "<<endl;
    cout<<"2.Insertion at head "<<endl;
    cout<<"3.is it a circular linked list ?"<<endl;
    cout<<"4.Display the linked list "<<endl;
    cout<<"5.circle break-down"<<endl;
    cout<<"6.deletion at head "<<endl;
    cout<<"7.deletion at tail "<<endl;

    bool flag =true;
    while(flag)
    {
    cout<<"enter your option"<<endl;
    int x;
    cin>>x;
    switch(x)
    {
    case 1 :
        {
            cout<<"Enter a value "<<endl;
            int a;
            cin>>a;
            insertion_at_tail(a);
            break;
        }
    case 2:
        {
            cout<<"Enter a head value "<<endl;
            int b;
            cin>>b;
            insertion_at_head(b);
            break;
        }
    case 3 :
        {
            if(circle_detection())
            {
                cout<<"yes ! it's a circle"<<endl;
            }
            else
            {
                cout<<"NO ! It's not a circle"<<endl;
            }
         break;
        }
    case 4 :
        {
            display();

            break;
        }

    case 5 :
        {
          if(circle_detection())
          {
              cout<<circle_remove()<<endl;
          }
          else
          {
              cout<<"no circle here !"<<endl;
          }

            break;

        }
    case 6 :
        {
            deletion_at_head();
            break;
        }
    case 7 :
        {
            deletion_at_tail();
            break;
        }

        default :
        {
            flag =false;
            break;
        }
    }//switch

    if(!flag) break;

    }//while

    return 0;
}
