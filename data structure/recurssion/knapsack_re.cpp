#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
// const int xm =1000;
// int arrive[xm];
// int down[xm];
// int store[xm];

int n,w,value[100],weight[100],max_value;

void knapsack(int i,int total_weight,int total_value)
{

     cout<<i<<endl;
    cout<<total_weight<<" "<<total_value<<endl;
     if(i>n)
    {

        if(total_weight<=w)
        {

            max_value=max(max_value,total_value);

        }
        return ;
    }
    cout<<"function 1"<<endl;
    knapsack(i+1,total_weight,total_value);

    cout<<endl;
    cout<<"function 2"<<endl;
    cout<<" value :"<<i<<" "<<total_weight<<" "<<weight[i]<<endl;

    knapsack(i+1,total_weight+weight[i],total_value+value[i]);






}



int main()
{
   optimize();

   cin>>n>>w;

   for(int i =1;i<=n;i++)
   {
           cin>>weight[i]>>value[i];
   }

   max_value=0;
   knapsack(1,0,0);

   cout<<"max value "<<max_value<<endl;



     }

