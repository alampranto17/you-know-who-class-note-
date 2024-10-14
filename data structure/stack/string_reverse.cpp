#include<bits/stdc++.h>
#include"stackusinglist.h"
using namespace std;

void reverse_string(string s)
{
    Stack<string>st;
    int i =0;
    string word="";
    while(i<s.size())
    {
        if(s[i]!=' ')
        {
            word+=s[i];
        }
        else if(s[i]==' ')
        {
            st.push(word);
            word="";
        }
        i++;
    }
    if(word!="")
    {
        st.push(word);
    }

    while(!st.empty())
    {
        cout<<st.pop()<<" ";
    }

}

int main()
{
    string s="alam pranto is good boy";


    reverse_string(s);
}
