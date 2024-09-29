#include<bits/stdc++.h>
using namespace std;

// int deleted(int arr[],int n,int value)
// {
//     int index=-1;
//     for(int i =0;i<n;i++)
//     {
//         if(arr[i]==value)
//         {
//             index=i;
//             break;
//         }
//     }
//     if(index!=-1)
//     {
//         for(int i =index;i<n-1;i++)
//         {
//             arr[i]=arr[i+1];
//         }

//     }


//         return n-1;

// }

// int main()
// {

// int n;
// cin>>n;
// int arr[n];
// for(int i =0;i<n;i++)
// {
//     cin>>arr[i];

// }
// cout<<"how many value you want to delete?"<<endl;
// int t,size;
// cin>>t;
// while(t--)
// {


// cout<<"which value you want to delete ?"<<endl;
// int value;
// cin>>value;

//  size=deleted(arr,n,value);
// }

// for(int i =0;i<size;i++)
// {
//     cout<<arr[i]<<" ";
// }



// }

void insertvalue(int n,int arr[],int pos,int value)
{
    int i;
    n++;
    for(i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    

}

int mian(){
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

     size--;
}
size-=1;

    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" "<<endl; 
    }
}


