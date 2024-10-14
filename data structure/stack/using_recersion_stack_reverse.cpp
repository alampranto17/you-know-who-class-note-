#include<bits/stdc++.h>
#include"stackusinglist.h"

using namespace std;

void insetatbottom(Stack<int>&st,int x)
{
    if(st.empty())
    {
        st.push(x);
        return;
    }
    int p=st.pop();
    insetatbottom(st,x);
    st.push(p);
}

void stack_reverse(Stack<int>&st)
{   int p;
    if(st.empty())
    {
        return;
    }
    else
    {
        p=st.pop();
    }

    stack_reverse(st);
    insetatbottom(st,p);
}




int main()
{ Stack<int>ck;
    int x;
    cin>>x;
    for(int i =0;i<x;i++)
    {
        int p;
        cin>>p;
        ck.push(p);
    }
    stack_reverse(ck);

    while(!ck.empty())
    {
        cout<<ck.pop()<<" ";
    }

}
