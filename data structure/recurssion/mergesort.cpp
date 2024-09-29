
#include<bits/stdc++.h>
using namespace std;

void sorting(int arr[],int st,int mid,int ed)
{

int a=mid-st+1;
int b=ed-mid;
int arr1[a];
int arr2[b];

for(int i =0;i<a;i++)
{
    arr1[i]=arr[st+i];
}

for(int i =0;i<b;i++)
{
    arr2[i]=arr[mid+1+i];
}
int i=0;
int j=0;
int k=st;
while(i<a && j<b)
{
    if(arr1[i]<arr2[j])
    {
        arr[k++]=arr1[i++];
    }
    else
    {
        arr[k++]=arr2[j++];
    }

}
while(i<a)
{
    arr[k++]=arr1[i++];
}
while(j<b)
{
    arr[k++]=arr2[j++];
}

}

void mergesort(int arr[],int st,int ed)
{
if(st>=ed)
{
    return;
}
int mid=st + (ed-st) /2;
mergesort(arr,st,mid);
mergesort(arr,mid+1,ed);
sorting(arr,st,mid,ed);

}



int main()
{
    int x;
    cin>>x;
    int arr[x];
    for(int i =0;i<x;i++)
    {
        cin>>arr[i];
    }

    int st=0;
    int ed=x-1;
    mergesort(arr,st,ed);

    for(int i =0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}

/*
#include<bits/stdc++.h>
using namespace std;

void sorting(int arr[], int st, int mid, int ed) {
    int a = mid - st + 1;
    int b = ed - mid;
    int arr1[a];
    int arr2[b];

    for (int i = 0; i < a; i++) {
        arr1[i] = arr[st + i];
    }

    for (int i = 0; i < b; i++) {
        arr2[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = st;
    while (i < a && j < b) {
        if (arr1[i] <= arr2[j]) {
            arr[k++] = arr1[i++];
        } else {
            arr[k++] = arr2[j++];
        }
    }

    while (i < a) {
        arr[k++] = arr1[i++];
    }
    while (j < b) {  // This should be j instead of i
        arr[k++] = arr2[j++];
    }
}

void mergesort(int arr[], int st, int ed) {
    if (st >= ed) {
        return;
    }
    int mid = st + (ed - st) / 2; // This ensures no overflow
    mergesort(arr, st, mid);
    mergesort(arr, mid + 1, ed);
    sorting(arr, st, mid, ed);
}

int main() {
    int x;
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }

    int st = 0;
    int ed = x - 1; // end should be x-1 to be inclusive
    mergesort(arr, st, ed);

    for (int i = 0; i < x; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
*/
