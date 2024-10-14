#include<bits/stdc++.h>
using namespace std;


template<typename T>
T mymax(T a,T b)
{
    return a>b ? a : b;
}

int main()
{

        //function name <data type > (parameter)
        cout<<mymax<int>(1,3)<<endl;
        cout<<mymax<char>('a','c')<<endl;
        cout<<mymax<string>("alam","pranto")<<endl;

    return 0;
}