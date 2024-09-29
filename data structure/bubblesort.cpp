#include<bits/stdc++.h>
using namespace std;

// void sorting(vector<int>&v)
// {
     ///this is array sorting 


    //  cout<<"size of vector : "<<v.size()<<endl;

    // for(int turn=0;turn<v.size();turn++)
    // {  //cout<<"it working turn"<<endl;
    //     for(int j=0;j<v.size()-1;j++)
    //     {  //cout<<"working swap"<<endl;
    //         if (v[j]>v[j+1])
    //         {
    //             swap(v[j],v[j+1]);// swap function used
    //         }
    //         //cout<<"done swap"<<endl;
    //     }
    // }

    // cout<<endl<<"sorting vector"<<endl;

    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<endl;
    // }

/// now vector sorting 

// vector<int> ::iterator it; // printing vector

//  sort(v.begin(),v.end());// power of vector 

// for (it=v.begin();it<v.end();it++)
// {

//     cout<<*it<<endl;
// }
// cout<<"reverse oder printing"<<endl;

// // sort(v.begin(),v.end(),greater<int>());// power of vector (one way)
// sort(v.rbegin(),v.rend());


// for (it=v.begin();it<v.end();it++)
// {

//     cout<<*it<<endl;
// }




// }

void sorting (int arr[],int n)
{
    for(int turn =0;turn<n;turn++)
    {
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                
            }
        }
    }

cout<<endl<<"printing sorting array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}



int main ()
{
    int n;
    cin>>n;
    // vector<int>v(n);
    // for(int i=0;i<n;i++)
    // {
    //     cin>>v[i];

    // }
    // sorting(v);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sorting(arr,n);


 return 0;
}


