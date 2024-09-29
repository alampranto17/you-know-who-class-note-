/*
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
// const int xm =1000;
// int arrive[xm];
// int down[xm];
// int store[xm];

int findpivot(int arr[],int st,int ed)
{
    int pivot=arr[st];
    int low =st;
    int high =ed;

while(low <high)
{
    while(arr[low]<=pivot && low<high)
    {
        low++;
    }
    while(arr[high]>pivot && high>low)
          {
              high--;
          }

          if(low<high)
            {
                swap(arr[low],arr[high]);
            }

}

swap(arr[st],arr[high]);

return high ;

}




void quicksort(int arr[],int st,int ed)
{
    if(st>=ed)
    {
        return;
    }

int p=findpivot(arr,st,ed);
findpivot(arr,st,p-1);
findpivot(arr,p+1,ed);


}


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

   quicksort(arr,0,x-1);
   for(int i =0;i<x;i++)
   {
       cout<<arr[i]<<" ";
   }

     }*/

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int findpivot(int arr[], int st, int ed)
{
    int pivot = arr[st];
    int low = st + 1;
    int high = ed;

    while (low <= high)
    {
        while (low <= high && arr[low] <= pivot)
        {
            low++;
        }
        while (low <= high && arr[high] > pivot)
        {
            high--;
        }
        if (low < high)
        {
            swap(arr[low], arr[high]);
        }
    }

    swap(arr[st], arr[high]);
    return high;
}

void quicksort(int arr[], int st, int ed)
{
    if (st < ed)
    {
        int p = findpivot(arr, st, ed);
        quicksort(arr, st, p - 1);
        quicksort(arr, p + 1, ed);
    }
}

int main()
{
    optimize();
    int x;
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    quicksort(arr, 0, x - 1);

    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

