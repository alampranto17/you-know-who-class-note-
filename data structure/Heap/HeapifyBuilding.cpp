#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int n,int largest)
{
    int current =largest;
    int left=2*current+1;
    int right=2*current+2;
    if(left<n && arr[current]<arr[left])
    {
        current=left;
    }
    if(right<n && arr[current]<arr[right])
    {
        current=right;
    }
    if(current!=largest)
    {
        swap(arr[current],arr[largest]);
        heapify(arr,n,current);
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

void heapsort(int arr[],int n)
{
    for(int i =n-1;i>=0;i--)
    {
        swap(arr[i],arr[0]);
        print(arr,n);
        heapify(arr,i,0);
    }

}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    print(arr,n);
    int nonleaf=n/2-1;
    for(int i =nonleaf;i>=0;i--)
    {

    heapify(arr,n,i);
    }
    cout<<"before sorting"<<endl;
    print(arr,n);

    heapsort(arr,n);
    cout<<"after sorting"<<endl;
    print(arr,n);

    return 0;
}
/*
9
2 10 1 5 4 8 3 8 7
*/
