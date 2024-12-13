#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
// const int xm =1000;
// int arrive[xm];
// int down[xm];
// int store[xm];

void heapify(int arr[],int n,int i)
{
    int largest=i;
    int left= i*2+1;
    int right=i*2+2;
    if(left<n &&arr[largest]<arr[left])
    {
        largest=left;
    }

    if(right<n &&arr[largest]<arr[right])
    {
        largest=right;
    }

    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
void print(int arr[],int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
   optimize();

   int n;
   cin>>n;
   int arr[n];
   for (int i =0;i<n;i++)
   {
       cin>>arr[i];
   }
   int nonleaf=n/2-1;

   for(int i =nonleaf;i>=0;i--)
   {
       heapify(arr,n,i);
   }
   print(arr,n);


     }

