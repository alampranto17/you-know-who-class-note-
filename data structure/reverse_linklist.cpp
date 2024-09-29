#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
//class of linked list
class node
{
public :
    int val;
    node *next;
    node(int value)
    {
        val=value;
        next=NULL;
    }
};

//i want to return a array that why i want to create a array of structure
struct test
{
    int position[1000];
};

//doubly link list class
class doubly
{

public :
    int value;
    doubly * next;
    doubly * pre;

    doubly(int val)
    {
        value=val;
        next=NULL;
        pre=NULL;
    }



};

//insertion
void insertion(node * &head,int val)
{
    node *newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;



}
//head input
void headinput(node * &head,int val)
{
    node *newnode =new node(val);
    {
        node *temp=head;
        head=newnode;
        head->next=temp;
    }
}

int sizeoflist(node * &head)
{
    node*temp=head;
    int p=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        p++;
    }
    return p;
}

void positionadd(node * &head,int val,int position)
{
    node * temp=head;
    node * newnode= new node(val);
    int p=1;
    if(p<=sizeoflist(head))
    {
        if(position==1)
        {
            newnode->next=head;
            head=newnode;

        }
        else
        {



            while(p!=position-1)
            {
                temp=temp->next;
                p++;
            }
            newnode->next=temp->next;
            temp->next=newnode;

        }


    }
    else
    {
        cout<<"ERROR : position is out of bounce "<<endl;
        return ;
    }


}

//display function
void display(node * n)
{
    while(n!=NULL)
    {
        cout<<n->val<<" ";
        n=n->next;
    }
    cout<<endl;

}

//doubly link lisr view
void display(doubly * n)
{
    while(n!=NULL)
    {
        cout<<n->value<<" ";
        n=n->next;
    }
    cout<<endl;

}

void delete_position (node* &head,int pos)
{
    node *temp=head->next;
    node*pre_node=head;
    int t=1;
    if(pos==1)
    {
        head=temp;
    }
    else
    {
        while(t!=pos-1)
        {
            temp=temp->next;
            pre_node=pre_node->next;
            t++;
        }
        pre_node->next=temp->next;


    }
    cout<<"Delete successfully....!!!!"<<endl;
}

//sorting ....................................................

void sorting(node * &head)
{
    node *temp=head;

    int i=0;
    while(temp!=NULL)
    {
        node *temp2=temp->next;
        while(temp2 != NULL)
        {

            if(temp->val>temp2->val)
            {
                swap(temp->val,temp2->val);
            }
            temp2=temp2->next;


        }

        temp=temp->next;


    }
    cout<<"Sorting successful"<<endl;
}




//searching value ////////////////////////////////////////////////////////////////////////

int searching(node * &head,int value)
{
    int i=1;
    node * temp=head;
    bool flag=false;
    while(temp!=NULL)
    {
        if(temp->val==value)
        {
            flag=true;
            break;
        }
        i++;
        temp=temp->next;
    }
    if(flag)
    {
        return i;
    }
    else
    {
        return 0;
    }
}


// duplicate value finding //////////////////////////////


test dublicate_value(node * &head,int key)
{
    node *temp=head;
    test t;
    int k=0;


    int cont=0;

    while(temp!=NULL)
    {
        if(temp->val==key)
        {
            t.position[++k]=cont;

        }

        cont++;
        temp=temp->next;

    }

    t.position[0]=k;

    return t;


}



// reverse this list

void reverselist(node * &head)
{
    node * current=head;
    node * pre=NULL;
    node * future= head->next;
    while(true)
    {
        current->next=pre;
        pre=current;
        current=future;
        if(current==NULL)
        {
            break;
        }
        future=future->next;
    }
    head=pre;


}

node * recersive_reverse(node * &head)
{
    if(head->next==NULL)
    {
        return head;
    }

    node * newhead= recersive_reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}




void  doubly_create(doubly* &dhead,int x)
{
    doubly * temp=dhead;
    doubly *newnode= new doubly(x);
    if(dhead==NULL)
    {
        dhead=newnode;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->pre=temp;



    }
}

//display reversely

void r_display(doubly *n)
{
    while(n->next!=NULL)
    {
        n=n->next;
    }

    while(n!=NULL)
    {
        cout<<n->value;
        if(n->pre!=NULL)
        {
            cout<<"->";
        }
         n=n->pre;
    }
    cout<<endl;
}













int main()
{
    optimize();
    //head object node create korsi.....
    node *head=NULL;
    doubly *dhead=NULL;


    cout<<"1.Do you want to create linked list ?"<<endl;
    cout<<"2.Do you want to see link list?"<<endl;
    cout<<"3.which position you want to add value?"<<endl;
    cout<<"4.Do you want to see size of link list ?"<<endl;
    cout<<"5.Do you want delete value at which  position ?"<<endl;
    cout<<"6.Do you want to sort this linklist?"<<endl;
    cout<<"7.Do you want to search any from  linklist?"<<endl;
    cout<<"8.Do you want to find duplicate value in the list?"<<endl;
    cout<<"9.Do you want to reverse link list ?"<<endl;
    cout<<"10.Do you want to create doubly link list ?"<<endl;


    cout<<"close this program enter \"P\" key "<<endl;
    cout<<endl;


    bool flag=true;
    while(flag)
    {
        cout<<"enter your option : "<<endl;
        int x;
        cin>>x;
        cin.ignore();

        cout<<endl;
        bool flag=true;

        switch(x)
        {
        case 1 :
        {

            cout<<" Option : 1. inserting value "<<endl;

            cout<<"Enter the size of the link list"<<endl;
            int n;
            cin>>n;
            cout<<"Enter value of linklist"<<endl;
            for(int i =0; i<n; i++)
            {
                int x;
                cin>>x;
                insertion(head,x);
            }
            break;
        }
        case 2:
        {
            cout<<"Option 2 : showing link list"<<endl;

            cout<<"Linklist is here "<<endl;
            if(sizeoflist>0)
            {
                display(head);
            }
            else
            {
                cout<<"ERROR : You don't create any kind of linked list"<<endl;
            }
            break;
        }
        case 3:
        {
            cout<<"option 3: value add at any option "<<endl;
            cout<<"position add "<<endl;
            int pos,val;
            cin>>pos;
            cout<<"enter value"<<endl;
            cin>>val;
            positionadd(head,val,pos);
            break;
        }
        case 4:
        {
            cout<<"option 4: size of  the list  "<<endl;

            cout<<sizeoflist(head)<<endl;
            break;
        }
        case 5:
        {
            cout<<"Option 5 : deleting value at any position "<<endl;
            cout<<"Enter your position"<<endl;
            int pos;
            cin>>pos;
            if(pos<=sizeoflist(head))
            {
                delete_position(head,pos);
            }
            else
            {
                cout<<"ERROR : position out of bounce"<<endl;
            }
            break;
        }

        case 6 :
        {
            cout<<"Option 6 : Sorting "<<endl;
            sorting(head);
            break;
        }
        case 7 :
        {
            cout<<"Option 7 : Searching value "<<endl;

            cout<<"Enter value "<<endl;
            int x;
            cin>>x;

            if(searching(head,x))
            {
                cout<<"Position of the value is "<<searching(head,x)<<endl;
            }
            else
            {
                cout<<"Not Found"<<endl;
            }

            break;


        }
        case 8 :
        {
            cout<<"Enter your searching value "<<endl;
            int key;
            cin>>key;

            test T;
            T=dublicate_value(head,key);

            if(T.position[0]==0)
            {
                cout<<"The value is not found "<<endl;
            }
            else
            {
                for(int i =1; i<=T.position[0]; i++)
                {
                    cout<<T.position[i];
                    if(i!=T.position[0])
                    {
                        cout<<"->";
                    }
                }
            }
            cout<<endl;

            break;
        }
        case 9 :
        {

            //reverselist(head);
            head= recersive_reverse(head);//head have to be receive this new haed.

            break;
        }
        case 10 :
        {
            cout<<"how much value you want to insert ?"<<endl;
            int x;
            cin>>x;
            cout<<"enter you value"<<endl;
            for(int i=0; i<x; i++)
            {
                int p;
                cin>>p;
                doubly_create(dhead,p);
            }
            display(dhead);
            r_display(dhead);

            break;
        }


        default :
        {

            flag=false;
            break;
        }


        }//switch
        if(!flag)
        {
            break;
        }


    }//while


}//main

