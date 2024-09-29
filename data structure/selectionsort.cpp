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

void selectionsort (int arr[],int size)
{
    for(int i =0;i<size-1;i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;
            }
        }

        if(min!=i)
        {
            swap(arr[i],arr[min]);
        }
    }

}

void binarysearch(int arr[],int size,int value)
{
    int start=0;
    int end= size-1;
    while(start<end)
    {
        int mid = end-start/2;
        if(arr[mid]==value)
        {
            cout<<"value found and index is "<<mid<<endl;
                break;
        }
        else if(arr[mid]<value)
        {
            start=mid+1;
        }
        else if (arr[mid]>value)
        {
            end=mid-1;
        }

    }
}


int main()
{
   optimize();

   int arr[]={50,60,44,222,15,24,63,57,59,88};

   int size=sizeof(arr)/sizeof(int);

   cout<<"Size of the array "<<size<<endl;

   selectionsort(arr,size);

    cout<<"print array "<<endl;
    printarray(arr,size);

    int value =63;
    cout<<" value is "<<value<<endl;

    binarysearch(arr,size,value);




     }

