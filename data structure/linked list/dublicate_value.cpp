#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
// const int xm =1000;
// int arrive[xm];
// int down[xm];
// int store[xm];

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* value(Node* head,int n)
{
    Node * temp =head;
    for(int i =0; i<n; i++)
    {
        int p;
        cin>>p;
        Node * newnode = new Node(p);

        if(head==NULL)
        {
            head=newnode;
            temp=head;

        }
        else
        {
            temp->next=newnode;
            temp=temp->next;
        }
    }

    return head;

}

//Node* removeDuplicates(Node* head) {
//
//        // your code here
//        Node * temp=head;
//
//        while(temp!=NULL)
//        {
//            Node * fast=temp->next;
//            while(fast!=NULL && temp->data==fast->data)
//            {
//                    Node * deletenode =fast;
//                    fast=fast->next;
//                    delete deletenode;
//            }
//            temp->next=fast;
//            temp=temp->next;
//        }
//
//        return head;
//
//    }

Node * mergeTwoLists(Node* list1, Node* list2) {

        Node* temp=list1;
        Node* newlist=NULL;
        Node* newlisthead=NULL;
        Node* temp2=list2;

        while(temp!=NULL && temp2!=NULL)
        {
                Node* addnode;
        if(temp->data>=temp2->data)
        {

            addnode=temp2;
            temp2=temp2->next;




        }
        else
        {

            addnode=temp;
            temp=temp->next;




        }

        if(newlisthead==NULL)
        {
            newlisthead=addnode;
            newlist=newlisthead;

        }
        else
        {
            newlist->next=addnode;
            newlist=newlist->next;

        }

        }

        if(temp!=NULL)
        {
            newlist->next=temp;
        }
        if(temp2!=NULL)
        {
            newlist->next=temp2;

        }

        return newlisthead;


    }

//int solve(Node* head){
//
//    Node* temp=head;
//    Node*future=head->next;
//    Node* pre=NULL;
//    int sum=0;
//
//    while(future!=NULL)
//    {
//     if(pre!=NULL)
//     {
//         if((pre->data>temp->data && future->data>temp->data))
//         {
//             sum++;
//         }else if (pre->data<temp->data && future->data<temp->data)
//         {
//             sum++;
//         }
//     }
//     pre=temp;
//     temp=temp->next;
//     future=future->next;
//    }
//
//
//return sum;
//}


int main()
{
    optimize();

    int n;
    cin>>n;
    Node *head =NULL;
    Node *head2=NULL;

    head =value(head,n);
    cout<<"input second list"<<endl;
    head2=value(head2,n);







//   head = removeDuplicates(head);
//   temp=head;
//   cout<<"after removing value "<<endl;
//   while(temp!=NULL)
//    {
//        cout<<temp->data<<" ";
//        temp=temp->next;
//    }

//cout<<solve(head)<<endl;

Node* a= mergeTwoLists(head,head2);
while(a!=NULL)
   {
       cout<<a->data<<" ";
        a=a->next;
    }






}

