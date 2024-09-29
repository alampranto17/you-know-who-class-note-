#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
// const int xm =1000;
// int arrive[xm];
// int down[xm];
// int store[xm];

void printarray(int arr[],int size)
{
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
   optimize();

   int arr[]={9,8,5,2,1};
   int size=sizeof(arr)/sizeof(int);
   cout<<"before sorting array : "<<endl;
   printarray(arr,size);

   cout<<"\n"<<endl;

   for(int i =0;i<size;i++)         //row controling
   {
       bool flag =false;
       for(int j=0;j<size-i-1;j++)    // column  controling
       {
           if(arr[j]>arr[j+1])
           {
               swap(arr[j],arr[j+1]);
               flag=true;

           }
           printarray(arr,size);



       }

       cout<<endl;

       if(!flag)
       {
           break;
       }
   }
   cout<<"\n"<<endl;
   cout<<"after sorting array : "<<endl;
   printarray(arr,size);


     }

