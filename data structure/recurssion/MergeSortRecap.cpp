#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int>&v,int low,int mid,int high)
{
    vector<int>arr;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high)
    {
        if(v[left]<=v[right])
        {
            arr.push_back(v[left]);
            left++;
        }
        else
        {
            arr.push_back(v[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        arr.push_back(v[left]);
        left++;
    }
    while(right<=high)
    {
        arr.push_back(v[right]);
        right++;
    }
    for(int i=0;i<arr.size();i++)
    {
        v[low+i]=arr[i];
    }

}

void MergeSort(vector<int>&v,int left,int right)
{
    if(left==right)
    {

        return;
    }
    int mid=(left+right)/2;
    MergeSort(v,left,mid);
    MergeSort(v,mid+1,right);

    Merge(v,left,mid,right);


}

int main ()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i =0;i<n;i++)
    {
        cin>>v[i];
    }
    int left =0;
    int right= v.size()-1;

    MergeSort(v,left,right);

    for(auto u : v)
    {
        cout<<u<<" ";
    }
    cout<<endl;


    return 0;
}
