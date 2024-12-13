#include<bits/stdc++.h>
using namespace std;

struct node
{
public :
    int val;
    node * left;
    node * right;

    node (int value)
    {
        val=value;
        left=NULL;
        right=NULL;
    }

};
void print(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->val<<" ";
    print(root->left);
    print(root->right);
}

int totalNode (node* root,set<int>&s)
{
    if(root==NULL)
    {
        return 0;
    }
    s.insert(root->val);
    return totalNode(root->left,s)+ totalNode(root->right,s) +1;

}

bool uniquetree(node* root)
{

set<int>s;
cout<<totalNode(root,s)<<endl;
}

int main()
{
    int n;
    cin>>n;
    node* arr[n];

    for(int i =0;i<n;i++)
    {
        arr[i]=new node(-1);
    }

    for(int i =0;i<n;i++)
    {
        int data,left,right;
        cin>>data>>left>>right;
        arr[i]->val=data;
        if(left!=-1)
        {
            arr[i]->left=arr[left];
        }
        if(right!=-1)
        {
            arr[i]->right=arr[right];
        }

    }

    print(arr[0]);

    cout<<uniquetree(arr[0])<<endl;


    return 0;
}
