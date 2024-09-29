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
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}


int main()
{
  int arr[]={10,4,6,2,7,1,9,8};
  int size=sizeof(arr)/sizeof(int);
  int maxvalue= INT_MIN;
  for(int i =0;i<size;i++)
  {
      if(maxvalue<arr[i])
      {
          maxvalue=arr[i];
      }
  }
  cout<<"MAX VALUE : "<<maxvalue<<endl;
int size2=maxvalue+1;
  int countarray[size2]={0};
  printarray(countarray,size2);
  cout<<endl;
  for(int i =0;i<size;i++)
  {

      countarray[arr[i]]++;
  }

  cout<<"frequency array"<<endl;

  printarray(countarray,size2);
  cout<<endl;

  for(int i=1;i<size2;i++)
  {
      countarray[i]+=countarray[i-1];
  }

  cout<<"sum of prefix array"<<endl;

  printarray(countarray,size2);


  int finalarray[size];

  for(int i =size-1;i>=0;i--)
  {
    //countarray[arr[i]]--;
    int k=--countarray[arr[i]];
      finalarray[k]=arr[i];

  }

  cout<<"increasing order sorting "<<endl;

  printarray(finalarray,size);


     }
