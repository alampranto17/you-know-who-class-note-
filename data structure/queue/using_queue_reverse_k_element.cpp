#include<bits/stdc++.h>
#include"Queue1.h"
#include<stack>
using namespace std;
Queue<int> reverse_k_th_element(Queue<int>&a,int position)
{
    int size=a.size();
   int de=size/position;
   int y=size%position;
    stack<int>st;

    while(de>0)
    {

    int i =0;

    while(i<position)
{
st.push(a.dequeue());
i++;

}
while(!st.empty())
{
    a.enqueue(st.top());
    st.pop();
}
de--;
    }


    while(y>0)
    {
        st.push(a.dequeue());

        while(!st.empty())
        {
            a.enqueue(st.top());
            st.pop();
        }
        y--;

    }

    while(!a.empty())
    {
        cout<<a.dequeue()<<" ";
    }
    cout<<endl;





    return a;

}

int main()
{
    Queue<int>qu;
    int x;
    cin>>x;
    for(int i =0;i<x;i++)
    {
        int p;
        cin>>p;
        qu.enqueue(p);
    }

    cout<<"which position u want to reverse ?"<<endl;
    int pos;
    cin>>pos;

    reverse_k_th_element(qu,pos);
}
