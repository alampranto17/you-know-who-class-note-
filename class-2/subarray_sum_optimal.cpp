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
   long long arr[n];
   for(int i =0;i<n;i++)
   {
       cin>>arr[i];
   }

   long long max_main= arr[0];
   long long max_far = arr[0];

   for(int i =1;i<n;i++)
   {
       max_far=max(arr[i],max_far+arr[i]);
       cout<<i<<" . "<<max_far<<endl;
       max_main=max(max_far,max_main);
       cout<<i<<" . "<<max_main<<endl;
   }

   cout<<max_main<<endl;




     }

