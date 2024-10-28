#include<bits/stdc++.h>
using namespace std;


// tree node class

class typenode{
public :
    int value;
    typenode* left_c;
    typenode* right_c;

    typenode(int v)
    {
        value=v;
        left_c=NULL;
        right_c=NULL;
    }

};

// for beauty

void space(int level)
{
    for(int i =0;i<level;i++)
    {
        cout<<"   ";
    }
}


// prrorder tree print

void print(typenode * root,int level)
{

    if(root==NULL)
    {
        return;
    }
    if(root->left_c==NULL && root->right_c==NULL)
    {

    cout<<" : "<<root->value<<endl;
    }
    else
    {
        cout<<endl;
    space(level);
    cout<<"Root : "<<root->value<<endl;
    }


    if(root->left_c!=NULL)
    {
        space(level);
         cout<<"left ";
        print(root->left_c,level+1);
    }


    if(root->right_c!=NULL)
    {
        space(level);
        cout<<"right ";
        print(root->right_c,level+1);
    }


}




int main ()
{
    int n;
    cout<<"Enter node number"<<endl;
    cin>>n;

    typenode* arr[n];
    for(int i =0;i<n;i++)
    {
        arr[i]= new typenode(-1);
    }

    for(int i =0;i<n;i++)
    {
        int m,left,right;
        cin>>m>>left>>right;

        arr[i]->value=m;

        if(left!=-1)
        {
            arr[i]->left_c=arr[left];
        }
        if(right!=-1)
        {
            arr[i]->right_c=arr[right];
        }

    }

    print(arr[0],0);




    return 0;
}
