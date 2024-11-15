#include<bits/stdc++.h>
using namespace std;

struct node {
public :
int val;
node* left;
node* right;

node(int value)
{
    val=value;
    left=NULL;
    right=NULL;
}

};

int sum=0;
int kth_levelSum(node* root,int k)
{
    if(root==NULL)
    {
        return 0;
    }
    int level =0;
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {

        node * chk = q.front();
        q.pop();
        if(chk!=NULL)
        {
                if(k==level)
                {
                    sum+=chk->val;
                }

       if(chk->left!=NULL)
       {
           q.push(chk->left);
       }

        if(chk->right!=NULL)
        {
            q.push(chk->right);
        }
        }
        else
        {   if(!q.empty())
        {
            q.push(NULL);
        }
            level++;
        }
    }


    return sum;


}



int main ()
{
    int n;
    cin>>n;
    node* arr [n];
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

    int level=1;

    cout<<kth_levelSum(arr[0],2)<<endl;


    return 0;
}
