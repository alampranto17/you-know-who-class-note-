// 2's power
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
// const int xm =1000;
// int arrive[xm];
// int down[xm];
// int store[xm];
int call=0;
int m[100];
int power(int n)
{
    call++;
    if(n==0)
    {
        return 1;
    }
    if(m[n] != -1)
    {

        return m[n];
    }
    m[n] = power(n-1)+power(n-1);
    return m[n];
}

int main()
{
   optimize();

   for(int i =0;i<100;i++)
    {
        m[i]=-1;
    }

    cout<<"power of 10 "<<power(10)<<endl;

    cout<<"memoization array "<<endl;


     for(int i =0;i<100;i++)
    {
            cout<<m[i]<<" ";
    }
    cout<<endl;
    cout<<"how many time the function called ?"<<endl;
   cout<<call<<endl;





     }

