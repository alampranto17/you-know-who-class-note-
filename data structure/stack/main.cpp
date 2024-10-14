#include<bits/stdc++.h>
#include"stackusinglist.h"
using namespace std;

int main()
{
       // -------------------------------pair-------------------------
    // Stack <pair<char,int>> st;
    // st.push(make_pair('c',2));
    // st.push(make_pair('g',9));
    // st.push(make_pair('q',0));
    // cout<<"size "<<st.size()<<endl;

    
    // while(!st.empty())
    // {
    // pair<char,int>chk;
    // chk=st.pop();
    // cout<<chk.first<<" | "<<chk.second<<endl;


    Stack <string> st;
    st.push("alam pranto");
    st.push("abid");
    st.push("aysha");
    
    cout<<"size "<<st.size()<<endl;

    
    while(!st.empty())
    {
    cout<<st.pop()<<endl;
    




}
    return 0;
}

