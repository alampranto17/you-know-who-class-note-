#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
// const int xm =1000;
// int arrive[xm];
// int down[xm];
// int store[xm];

int n,call=0;
int arr[100];
int pos;
bool is_taken[100];

void recursion(int pos)
{

if(pos>n)
{

    for(int i =1;i<=n;i++)
    {
        if(is_taken[i])
        {
            cout<<arr[i]<<" ";
        }
    }
    call++;
    cout<<endl;

    return;
}

is_taken[pos]=false;
recursion(pos+1);
//cout<<"false complete"<<pos<<endl;

is_taken[pos]=true;
recursion(pos+1);

//cout<<"true complete"<<pos<<endl;

}


int main()
{
   optimize();


   cin>>n;

   for(int i =1;i<=n;i++)
   {
       cin>>arr[i];
   }

   cout<<"printing array" <<endl;
    for(int i =1;i<=n;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;





   recursion(1);

   cout<<call<<endl;


     }

