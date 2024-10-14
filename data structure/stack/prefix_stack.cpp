#include<bits/stdc++.h>
#include"stackusinglist.h"

//infix to prefix  convertion

int precedence(char s)
{
    if(s== '+' || s== '-')
    {
        return 1;
    }
   else  if(s=='*' || s=='/')
    {
        return 2;
    }
    else if (s=='^')
    {
        return 3;
    }
    else
    {
        return -1;
    }
}

string infix_to_prefix_convertion(string s)
{

    reverse(s.begin(),s.end());
    string p;

    Stack<char>st;

    for(int i =0;i<s.size();i++)
    {
        if(s[i]>= '0' && s[i]<='9')
        {
            p+=s[i];
        }
        else if(s[i]==')')
        {
            st.push(s[i]);
        }
        else if(s[i]=='(')
        {
            while(!st.empty() && st.Top()!=')')
            {
                p+=st.pop();
            }
            st.pop();
        }
        else //case of operator
        {
            if(!st.empty()  &&  precedence(s[i])>=precedence(st.Top()))
            {
                st.push(s[i]);
            }
            else
            {
                while(! st.empty() &&!(precedence(s[i])<=precedence(st.Top()) ))
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

        s=p;
        reverse(s.begin(),s.end());


    return s;
}



// prefix answer finding

int prefix_evaluation(string s)
{
    Stack<int>st;

   for(int i =s.size()-1;i>=0;i--)
   {
       if(s[i]-'0'>=0 && s[i]-'0'<=9)
       {
           st.push(s[i]-'0');




       }
       else
       {
           char chk =s[i]; // capture the opretor
           int a=st.pop();

           int b=st.pop();
           //cout<<"a "<<a<<" "<<chk<<" "<<" b "<<b<<endl;
           switch(chk)
           {
           case '+' :
            {
                st.push(a+b);
                break;
            }

            case '-' :
            {
                st.push(a-b);
                break;
            }
            case '*' :
            {
                st.push(a*b);
                break;
            }
            case '/' :
            {
                st.push((a/b));
                break;
            }
            case '^' :
            {
                st.push(pow(a,b));
                break;
            }
            case '%' :
            {
                st.push((a%b));
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



int main ()
{
    string s;
    cin>>s;


string p=infix_to_prefix_convertion(s);
cout<<p<<endl;

cout<<prefix_evaluation(p)<<endl;


    return 0;
}
