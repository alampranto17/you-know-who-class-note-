#include<bits/stdc++.h>
#include"stackusinglist.h"

//check precedence
int precedence(char s)
{
    if(s=='+' || s=='-')
    {
        return 1;
    }
    else if(s=='*'|| s=='/')
    {
        return 2;
    }
    else if(s=='^')
    {
        return 3;
    }
    else
    {
        return -1;
    }
}

//implementation of infix to postfix converter

string postfix_converter(string s)
{
    Stack<char>st;
    string p;
    for(int i =0;i<s.size();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            p+=s[i];
        }
        else if(s[i]=='(')
        {
            st.push(s[i]);
        }
        else if (s[i]==')')
        {
            while(!st.empty() && st.Top()!='(')
            {
                p+=st.pop();
            }
            st.pop();
        }
        else
        {
           if(!st.empty() && precedence(s[i]>=precedence(st.Top())))
           {
               st.push(s[i]);
           }
           else
           {
               while(!st.empty() && !(precedence(s[i]>=precedence(st.Top()))))
               {
                   p+=st.pop();
               }
               st.push(s[i]);
           }

        }
    }

    while(!st.empty())
    {
        p+=st.pop();
    }


    return p;


}





//calculation of postfixed

int calculate_postfix(string s)
{
    Stack<int>st;
    for(int i =0;i<s.size();i++)
    {
        if(s[i]>= '0' && s[i]<='9')
        {
            st.push(s[i]-'0');
        }
        else
        {
            char ck=s[i];
           int  a=st.pop();
           int  b=st.pop();
            switch(ck)
            {
            case '+' :
                {
                    st.push(a+b);
                    break;
                }
            case '-' :
                {
                    st.push(b-a);
                    break;
                }
                case '*' :
                {
                    st.push(a*b);
                    break;
                }
                case '/' :
                {
                    st.push(a/b);
                    break;
                }
                case '^' :
                {
                    st.push(pow(a,b));
                    break;
                }
                default :
                    {
                        break;
                    }
            }
        }
    }

    return st.Top();

}




int main()
{

    string s;
    cin>>s;

   string p=postfix_converter(s);

   cout<<p<<endl;

    cout<<calculate_postfix(p)<<endl;


    return 0;
}
