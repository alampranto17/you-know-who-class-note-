//using recursion finding factorial
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
// const int xm =1000;
// int arrive[xm];
// int down[xm];
// int store[xm];

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int sum   =factorial(n-1)*n;
    return sum;

}

int main()
{
   optimize();

   int n;
   cin>>n;
   cout<<factorial(n)<<endl;


     }

