#include<bits/stdc++.h>
using namespace std;

class node
{

public :
    int value;
    node* left_child;
    node* right_child;
    node(int val)
    {
        value=val;
        left_child=NULL;
        right_child=NULL;
    }


};
int x=0;

void spaceprint(int level)
{
    for(int i=0; i<level; i++)
    {
        cout<<"   ";
    }
}

//normal tree print
void treeprint(node * root,int level)
{

    if(root==NULL)
    {
        return;
    }

    if(root->left_child==NULL && root->right_child==NULL)
    {

        cout<<" : "<<root->value<<endl;
        return;
    }
    else
    {
        cout<<endl;
        spaceprint(level);

        cout<<"root : "<<root->value<<endl;


    }
    if(root->left_child!=NULL)
    {

        spaceprint(level);
        cout<<"left";
        treeprint(root->left_child,level+1);
    }

    if(root->right_child!=NULL)
    {


    spaceprint(level);
    cout<<"right";
    treeprint(root->right_child,level+1);

    }




}

//inorder taversal

void inorder(node* root,string& chk)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left_child,chk); //left
    chk+=to_string(root->value);     //root
    inorder(root->right_child,chk);  //right
}

//preorder
void preorder(node* root,string& chk)
{
    if(root==NULL)
    {
        return;
    }
    chk+=to_string(root->value); //root
    preorder(root->left_child,chk); //left
    preorder(root->right_child,chk); //right
}

//post-order
void preorder(node* root,string& chk)
{
    if(root==NULL)
    {
        return;
    }

    preorder(root->left_child,chk); //left
    preorder(root->right_child,chk); // right
     chk+=to_string(root->value);   //root
}



int main ()
{

    int n;
    cout<<"Enter your nodes"<<endl;
    cin>>n;
    node* arr[n];

    for(int i =0; i<n; i++)
    {
        arr[i]= new node(-1);
    }



    for(int i =0; i<n; i++)
    {
        int val,left,right;
        cin>>val>>left>>right;
        arr[i]->value=val;
        if(left!=-1)
        {
            arr[i]->left_child=arr[left];
        }

        if(right!=-1)
        {
            arr[i]->right_child=arr[right];
        }
    }

    treeprint(arr[0],0);
    string s="";

    inorder(arr[0],s);

    cout<<"inorder : "s<<endl;

    string p="";
    preorder(arr[0],p);
    cout<<"pre-order "<<p<<endl;

    string a="";
    postorder(arr[0],a);
    cout<<"post_order "<<a<<endl;



    return 0;
}
/*
9
0 1 2
1 3 4
2 5 6
3 -1 -1
4 -1 -1
5 7 8
6 -1 -1
7 -1 -1
8 -1 -1
*/
