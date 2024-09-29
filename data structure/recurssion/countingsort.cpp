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
   int x;
   cin>>x;
   int arr[x];
   for(int i =0;i<x;i++)
   {
       cin>>arr[i];
   }

   int m=INT_MIN;
   for(int i =0;i<x;i++)
   {
       if(arr[i]>m)
       {
           m=arr[i];
       }
   }

   cout<<"MAX value of the array : "<<m<<endl;

   int cont[m+1]={0};

   for(int i =0;i<x;i++)
   {
       cont[arr[i]]++;
   }
cout<<"frequency array : "<<endl;
for(int i =0;i<m+1;i++)
{
    cout<<cont[i]<<" ";
}
cout<<endl;

for(int i =1;i<m+1;i++)
{
    cont[i]=cont[i]+cont[i-1];
}
cout<<"frequency convert in to pre-fixed array : "<<endl;
for(int i =0;i<m+1;i++)
{
    cout<<cont[i]<<" ";
}
cout<<endl;
int farr[x];
for(int i =x-1;i>=0;i--)
{
    int k=arr[i];
    farr[--cont[k]]=arr[i];

}

cout<<"final array "<<endl;

for(int i =0;i<x;i++)
   {
      cout<<farr[i]<<" "<<endl;
   }





     }

