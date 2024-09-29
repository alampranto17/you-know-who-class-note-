#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
// const int xm =1000;
// int arrive[xm];
// int down[xm];
// int store[xm];

bool cmp(const pair<int,int>&p1,const pair<int,int>&p2)
{
    if(p1.first>p2.first)
    {
        return true;
    }
    else if(p1.first==p2.first)
    {
        return (p1.second<p2.second);
    }
    return false;

}


int main()
{
   optimize();


   vector<pair<int,int>>a ={{1,2},{2,3},{7,6},{2,1}};

   sort(a.begin(),a.end(),cmp);
   for(auto u: a)
   {
       cout<<u.first <<" "<<u.second<<endl;
   }





     }

