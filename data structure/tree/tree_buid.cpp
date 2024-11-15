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
void postorder(node* root,string & chk)
{
    if(root==NULL)
    {
        return;
    }

    preorder(root->left_child,chk); //left
    preorder(root->right_child,chk); // right
     chk+=to_string(root->value);   //root
}


// level order traversal

int LevelOrderTraversal(node* root)
{
    if(root==NULL)
    {
        return -1;
    }
    int level=0;

    queue<node*>q;
    int maxval=root->value;
    cout<<"level : "<<level<<endl;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node * chk=q.front();
        q.pop();
        if(chk!=NULL)
        {
            cout<<chk->value<<" ";
            maxval=max(chk->value,maxval);

            if(chk->left_child!=NULL)
            {
                q.push(chk->left_child);
            }
            if(chk->right_child!=NULL)
            {
                q.push(chk->right_child);
            }
        }
        else if(!q.empty())
        {
            cout<<endl;
            q.push(NULL);
            cout<<"level : "<<++level<<endl;

        }

    }
    cout<<endl;0

    return maxval;
}
// printing those
void  LeftNonLeaves(node* root)
{
    if(root==NULL)
    {
        return ;
    }

    if(root->left_child !=NULL )
      {

        cout<<root->value<<" ";
        LeftNonLeaves(root->left_child);
    }
    else if(root->right_child!=NULL)
    {
            cout<<root->value<<" ";
            LeftNonLeaves(root->right_child);
    }


}

//print leave Node
void PrintLeave(node * root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left_child==NULL && root->right_child==NULL)
    {
        cout<<root->value<<" ";
        return;
    }
    PrintLeave(root->left_child);
    PrintLeave(root->right_child);

}

//right leaves
void rightNonleaves(node* root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->right_child!=NULL)
    {
        cout<<root->value<<" ";
    rightNonleaves(root->right_child);

    }else if(root->left_child!=NULL)
    {
        cout<<root->value<<" ";
        rightNonleaves(root->left_child);
    }
}





//printing boundary tree

void BoundaryTreePrint(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->value<<" ";
    //lb print-non leave
  LeftNonLeaves(root->left_child);
    //Print leaves
    PrintLeave(root);
    //rb non-leave

    rightNonleaves(root->right_child);

}

// find the height of tree

int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int l=height(root->left_child);
    int r=height(root->right_child);

    return max(l,r)+1;
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
    {  int val,left,right;
        cin>>val>>left>>right;

        arr[i]->value=val;
        if(left!=-1)
        {
            arr[i]->left_child=arr[left]; //index number of left
        }

        if(right!=-1)
        {
            arr[i]->right_child=arr[right]; //right index number
        }
    }

    treeprint(arr[0],0);
//    string s="";
//
//    inorder(arr[0],s);
//
//    cout<<"in order : "<<s<<endl;
//
//    string p="";
//    preorder(arr[0],p);
//    cout<<"pre order :"<<p<<endl;
//
//    string a="";
//    postorder(arr[0],a);
//    cout<<"post order "<<a<<endl;
//
//    cout<<"level Order traversal : "<<endl;
//cout<<"max value of tree : " <<LevelOrderTraversal(arr[0])<<endl;

 //BoundaryTreePrint(arr[0]);

 cout<<"Height of tree "<<height(arr[0])<<endl;

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
