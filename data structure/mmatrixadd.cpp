#include <bits/stdc++.h>
using namespace std;


int main()
{
    int m=3;
    int n=3;
        int matrix1[m][n];
        int matrix2[m][n];
        int sum [3][3];

         for(int i =0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>matrix1[i][j];
            }
        }
cout<<"2nd matrix"<<endl;
          for(int i =0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>matrix2[i][j];
            }
        }


        for(int i =0;i<3;i++)
        {       for(int j =0;j<3;j++)

        {
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
        }
            
        }


        for(int i =0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<sum[i][j]<<endl;;
            }
        }






}