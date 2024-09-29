#include<bits/stdc++.h>
using namespace std;

class Node{

public :
    int value;
    Node * next;

    //constructer create for user input
     Node(int val)
     {
        value=val;
        next=NULL;
     }

};

// Node * Head =NULL;// declear as gobal variable

// display full linked list
void display(Node* n)
{
    cout<<"Display the full linked list"<<endl;
    while(n!=NULL )
    {
        cout<<n -> value<<" ";
        n= n->next;
    }
    cout<<endl;
}

void insertAtHead(Node * &Head,int value)
{
    Node * newnode=new Node(value);
    newnode->next=Head;
    Head=newnode;
}

void insertionatTail(Node * &Head,int value)
{
    Node * newnode=new Node(value);
    if(Head==NULL)
    {
        Head= newnode;
        return;
    }

    Node * temp= Head;
    while(temp->next != NULL)
{
    temp=temp->next;
}

temp->next=newnode;



}

int count(Node * &Head)
{
     Node *temp=Head;
     int count=0;
     while(temp!=NULL)
     {
        count++;
        temp=temp->next;
     }

     return count;
}



//postion insertion
void insertValuePostion(Node * & Head,int pos,int val)
{
    if(pos>count(Head) )
    {
        cout<<"invalid position !!!"<<endl;
        return;
    }
    else
    {
            Node * newnode= new Node(val);
            int i =1;
            Node *temp=Head;
            while(i<pos)
            {
                temp=temp->next;
                i++;
            }

            newnode->next=temp->next;
            temp->next=newnode;

    }

    cout<<"After insertion at position "<<pos<<" the linked list is :"<<endl;

    display(Head);



}


// search a unique value in linked list

int seachquiquevalue(Node* &Head,int value)
{
    Node * temp= Head;
    int count=1;
   if(temp==NULL)
   {
    cout<<"Please create the listed first"<<endl;
    return -1;
   }

while(temp->value!=value)
{
    if(temp->next==NULL)
    {
        cout<<"NOT found the value !!!"<<endl;
        return -1;

    }

    count++;
    temp=temp->next;
}

cout<<"postion of "<<value<<" is "<< count<<endl;
return count;
}


void dublicatevalue(Node * &Head,int key)
{
    Node * temp= Head;
    int size= count(Head);
    int position[size+1];
    int k=1;

    bool flag=true;

    int count =1;

        cout<<"Position of the value are ";
    while(temp!=NULL)
    {
        if(temp->value==key)
        {
            position[k]=count;
            flag=false;
            k++;
        }
        count++;
        temp=temp->next;
    }

    if(flag)
    {
        cout<<"the value which is not found in his list"<<endl;
    }
    else
    {
        position[0]=k;
        for(int i =1;i<position[0];i++)
        {
            cout<<position[i];
            if(i!=position[0]-1)
            {
                cout<<",";
            }
        }
    }
}

// delete data at beginning stage
void deletebeginning( Node * &Head)
{
 Node * temp=Head;

Head=temp->next;
delete temp;
cout<<"It's deleted";

}

//delete data at end
 void deleteatend(Node * & Head)
 {
    Node * temp= Head;
    Node * preNode=NULL;
    while(temp->next!=NULL)
    {
        preNode=temp;
        temp=temp->next;
    }
       preNode->next=temp->next;

    delete temp;

    cout<<"Last value deleted!!!"<<endl;
 }

 //any position of want to delete

 void deleteatposition(Node * &Head,int position)
 {
        Node* temp=Head;
        int i=1;
        Node* pre;

        while(i<position)
        {
                pre=temp;
                temp=temp->next;
                i++;
        }

         pre->next=temp->next;

    delete temp;

    cout<<"delete"<<endl;

 }

 void sorting(Node * &Head)
{
    Node * i=Head;

    while(i->next!=NULL)
    { Node* j=i->next;

    while(j!=NULL)
    {
        if(i->value>j->value)
        {
            swap(i->value,j->value);
        }
        j=j->next;
    }

        i=i->next;
    }



}

void insertataftervalue(Node* &Head,int value,int n)
{
    int position =seachquiquevalue(Head,value);
    insertValuePostion(Head,position,n);

}


void reverse(Node * &Head)
{
    Node * current=Head;
    Node * start=NULL;
    Node * future= Head->next;
    bool flag= true;

    while(flag)
    {
       
        if(future!=NULL)
        {
            current->next=start;
            start=current;
            current=future;
            future=future->next;
        }
        else{
            current->next=start;
            Head=current;
            break;

        }
    }


}











int main()
{
    // Node * head = new Node();
    // Node * second = new Node();
    // Node * third = new Node();
    // Node * fourth = new Node();

    // head ->value =1;
    // second ->value=2;
    // third ->value=3;
    // fourth ->value=4;

    // head ->next=second;
    // second ->next=third;
    // third -> next=fourth;
    // fourth -> next= NULL;


Node * Head =NULL;




// insertionatTail(head,9);

// insertionatTail(head,7);

// insertionatTail(head,1);

// insertionatTail(head,2);

// insertionatTail(head,4);

// int n;

// int con= 1;

// while(con == 1 || con == 2 || con==3 || con == 4 || con ==5 || con==6 || con==7 || con==8 || con==9 || con==10){


//     if(con==1)
//     {
//         cout<<"Enter a number to add linked list"<<endl;
//     cin>>n;
//     insertionatTail(Head,n);
//     }
//     else if(con ==2)
//     {
//         cout<<"Enter a number to add linked list"<<endl;
//     cin>>n;
//         insertAtHead(Head,n);
//     }
//     else if(con==3)

//     { int pos;
//         cout<<"Enter a number to add linked list"<<endl;
//          cin>>n;
//          cout<<"Enter position "<<endl;
//          cin>>pos;
//          insertValuePostion(Head,pos,n);
//     }

//     else if (con == 4)
//     {
//         display(Head);
//     }
//     else if (con ==5)
//     {
//         cout<<"Enter a number to search linked list"<<endl;
//          cin>>n;
//         seachquiquevalue(Head,n);
//     }
//     else if (con ==6)
//     {
//         cout<<"Enter a number to search linked list"<<endl;
//          cin>>n;
//         dublicatevalue(Head,n);
//     }
//     else if(con==7)
//     {
//             deletebeginning(Head);
//     }
//      else if(con==8)
//     {
//             deleteatend(Head);
//     }
//     else if (con==9)
//     {
//         int pos;
//          cout<<"Enter position "<<endl;
//          cin>>pos;
//          deleteatposition(Head,pos);
//     }
//      else if (con==10)
//     {
//         sorting(Head);
//         cout<<"assanding order sorting "<<endl;
//         display(Head);
//     }





// cout<<endl<<endl;
// cout<<"WELCOME LINKED LIST"<<endl;
//     cout<<" Do you want to continue this insertion ?(like : 1/2/3)"<<endl;
//     cout<<"1. Tail insertion "<<endl;
//     cout<<"2. Head insertion "<<endl;

//     cout<<"3. position insertion "<<endl;
//     cout<<"4. display the full linked list "<<endl;
//     cout<<"5. search unique value in linked list "<<endl;
//     cout<<"6. search dublicate value in linked list"<<endl;
//     cout<<"7. Delete a data in beginning!!! "<<endl;
//     cout<<"8. delete a data in last place!!! "<<endl;
//     cout<<"9. specific position delete !!! "<<endl;
//     cout<<"10. sorting of linklist"<<endl;


//     cout<<"11. Exited"<<endl;

//     cin>>con;
// }
cout<<endl;

bool flag = true;

cout<<endl<<endl;
cout<<"WELCOME LINKED LIST"<<endl;
    cout<<" Do you want to continue this insertion ?(like : 1/2/3)"<<endl;
    cout<<"1. Tail insertion "<<endl;
    cout<<"2. Head insertion "<<endl;

    cout<<"3. position insertion "<<endl;
    cout<<"4. display the full linked list "<<endl;
    cout<<"5. search unique value in linked list "<<endl;
    cout<<"6. search dublicate value in linked list"<<endl;
    cout<<"7. Delete a data in beginning!!! "<<endl;
    cout<<"8. delete a data in last place!!! "<<endl;
    cout<<"9. specific position delete !!! "<<endl;
    cout<<"10. sorting of linklist"<<endl;
    cout<<"11. Insert after a specific value (unique linked list )"<<endl;
    cout<<"12. reverse a linklist"<<endl;

    cout<<"12. Exited"<<endl;

while(flag)
{
int x ;
cout<<" Choice : ";
cin>>x;
switch(x)
{
case 1 :

    int n;
    if(Head==NULL)
    {
        cout<<"first value :";
    }
    else
    {
        cout<<"Next value :";
    }
    cin>>n;

    insertionatTail(Head,n);
    break;

case 2 :


    cout<<"Head value :";
    cin>>n;
        insertAtHead(Head,n);
        break;

case 3 :

    int pos;
        cout<<"Enter a number to add linked list"<<endl;
         cin>>n;
         cout<<"Enter position "<<endl;
         cin>>pos;
         insertValuePostion(Head,pos,n);
         break;

         case 4:


         display(Head);
         break;

         case 5 :

            cout<<"Enter a number to search linked list"<<endl;
         cin>>n;
        seachquiquevalue(Head,n);
        break;
        case 6 :

        cout<<"Enter a number to search linked list"<<endl;
         cin>>n;
        dublicatevalue(Head,n);
        break;
        case 7 :
        deletebeginning(Head);
        break;
        case 8 :
        deleteatend(Head);
        break;
        case 9 :


         cout<<"Enter position "<<endl;
         cin>>pos;
         deleteatposition(Head,pos);
         break;

         case 10 :
          sorting(Head);
        cout<<"assanding order sorting "<<endl;
        display(Head);
        break;
        case 11 :
            int value;
        cout<<"Enter linked list  a value :";
        cin>>value;
        cout<<endl;
        cout<<"Enter the value you want to insert "<<endl;
        cin>>n;
        insertataftervalue(Head,value,n);
        break;
        case 12: 
            reverse(Head);
        break;
        
        default :
        cout<<"you are pressing wrong key "<<endl;
        flag=false;
}

}




    return 0;
}
