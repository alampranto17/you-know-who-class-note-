#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
// const int xm =1000;
// int arrive[xm];
// int down[xm];
// int store[xm];

void convert_b(int n)
{
    if(n/2==0&& n>=0)
    {
        cout<<1;
        return ;
    }
    int p=n%2;
    n=n/2;
    convert_b(n);
       cout<<p;

}


int main()
{
   optimize();
int t;
cin>>t;
while(t--)
{


   int n;
   cin>>n;

   convert_b(n);
   cout<<endl;

}


     }

