#include<bits/stdc++.h>
using namespace std;
void insertvalue(int n,int arr[],int pos,int value)
{
    int i;
    n++;
    for(i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=value;

}




int main()
{
    int n,size;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     size=sizeof(arr)/sizeof(int)+1;
    cout<<"How many value you want to input?"<<endl;
    int t;
    cin>>t;
   for(int i=0;i<t;i++) {
    cout<<"enter a position of array"<<endl;
    int pos;
    cin>>pos;
    cout<<"enter a value you want to input in array"<<endl;
    int value;
    cin>>value;
    insertvalue(n,arr,pos,value);

     size++;
}
size-=1;

    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" "<<endl; 
    }
}