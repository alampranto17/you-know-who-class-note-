#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
// const int xm =1000;
// int arrive[xm];
// int down[xm];
// int store[xm];


int main()
{
   optimize();

   int n;
   cin>>n;
   int arr[n];
   for(int i =0;i<n;i++)
   {
       cin>>arr[i];

   }

   for(int i=0;i<n;i++)
   {
       for(int j=i;j<n;j++)
       {
           for(int r=i;r<=j;r++)
           {
               cout<<arr[r]<<" ";
           }
           cout<<endl;
       }
   }


     }

