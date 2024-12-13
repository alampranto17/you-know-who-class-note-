#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
// const int xm =1000;
// int arrive[xm];
// int down[xm];
// int store[xm];
class treenode
{
public :
    int value;
    treenode* left;
    treenode* right;

    treenode(int val )
    {
        value=val;
        left=NULL;
        right=NULL;

    }

};

treenode* MakeBTS(treenode* root,int value)
{
    treenode* newnode = new treenode(value);
    if(root==NULL)
    {
        root=newnode;
        return root;
    }
    if(value<root->value)
    {
        root->left=MakeBTS(root->left,value);
    }
    else if (value>root->value)
    {
        root->right= MakeBTS(root->right,value);
    }


    return root;
}

void InorderTraversal(treenode* root)
{
    if(root==NULL)
    {
        return ;
    }
    InorderTraversal(root->left);
    cout<<root->value<<" ";
    InorderTraversal(root->right);
}
//
//// binary search
treenode* SearchInBst(treenode* root,int key)
{
    if(root==NULL)
    {
        return root;
    }

    if(root->value==key)
    {
        cout<<root->value;
        return root;
    }

    else if(root->value>key)
    {
        cout<<root->value<<"->";
        SearchInBst(root->left,key);
    }
    else
    {
        cout<<root->value<<"->";
        SearchInBst(root->right,key);
    }
}

//inoerder successer
treenode* Inordersucc(treenode* root)
{
    treenode *curr =root;
    while(curr->left!=NULL)
    {
        curr=curr->left;
    }
    return curr;
}

treenode* DeleteNode(treenode* root,int key)
{
    if(root->value>key)
    {
        root->left=DeleteNode(root->left,key);
    }
    else if (root->value<key)
    {
        root->right=DeleteNode(root->right,key);
    }
    else
    {
        if(root->left==NULL)
        {
            treenode* temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL)
        {
            treenode* temp=root->left;
            delete root;
            return temp;
        }
        else
        {
            treenode* temp=Inordersucc(root->right);
            root->value=temp->value;
            root->right=DeleteNode(root->right,temp->value);

            return root;

        }
    }
    return root;
}

void zigzagTraversel(treenode* root)
{
    stack<treenode*>currentLevel;
    stack<treenode*>nextlevel;
    currentLevel.push(root);
    bool flag=true;

    while(!currentLevel.empty())
    {
        treenode* s= currentLevel.top();
        currentLevel.pop();
        cout<<s->value<<" ";
        if(flag)
        {
            if(s->left!=NULL)
            {
                nextlevel.push(s->left);
            }
            if(s->right!=NULL){
            nextlevel.push(s->right);
            }
        }else
        {
            if(s->right!=NULL)
            {
                nextlevel.push(s->right);
            }
            if(s->left!=NULL)
            {
                nextlevel.push(s->left);
            }

        }
        if(currentLevel.empty())
        {
            flag=false;
            swap(currentLevel,nextlevel);
        }

    }

}



int main()
{
   optimize();
   int n;
   cin>>n;
   treenode * root=NULL;
   for(int i =0;i<n;i++)
   {

   int value;
   cin>>value;

   root=MakeBTS(root,value);

   }


    InorderTraversal(root);
    cout<<endl;

//    int key ;
//    cin>>key;
//
//    if(SearchInBst(root,key)==NULL)
//    {
//        cout<<endl<<"NOT FOUND"<<endl;
//    }
//    else
//    {
//        cout<<endl<<"DATA IS FOUND "<<endl;
//    }
//
//    DeleteNode(root,key);
//    InorderTraversal(root);

zigzagTraversel(root);



}

/*
10
11 5 9 43 34 1 2 7 8 21  */





