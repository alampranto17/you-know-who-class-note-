#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n<=3)
    { 
        return n;

    }
    return fibo(n-1)+fibo(n-2)+fibo(n-3);
}

int main ()
{
    int x;
    cin>>x;
    cout<<fibo(x)<<endl;


    return 0;

}