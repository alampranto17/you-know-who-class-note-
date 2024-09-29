#include<bits/stdc++.h>
using namespace std;

// const int xm =1000;
// int arrive[xm];
// int down[xm];
// int store[xm];
void printarray(int arr[],int size)
{
    for(int i =0;i<size;i++)
   {
       cout<<arr[i]<<" " ;
   }
}


int main()
{


   int arr[]={50,60,44,222,15,24,63,57,59,88};
   int size=sizeof(arr)/sizeof(int);
    cout<<"before sorting "<<endl;
     for(int i =0;i<size;i++)
   {
       cout<<arr[i]<<" " ;
   }

   cout<<"\n"<<endl;

cout<<"sorting start"<<endl;
   for(int i=1;i<size;i++)
   {
       int key =arr[i];
       cout<<"key value : "<<key<<endl;

       int j=i-1;
       while(arr[j]>key && j>=0)
       {
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]=key;
       printarray(arr,size);
       cout<<endl<<endl;


   }

   cout<<endl<<"after sorting :"<<endl;
   for(int i =0;i<size;i++)
   {
       cout<<arr[i]<<" " ;
   }

     }

