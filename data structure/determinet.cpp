#include<bits/stdc++.h>
using namespace std;



int main()
{

   int def=0;
  int arr[3][3];

  for(int i =0;i<3;i++)
  {
      for(int j=0;j<3;j++)
      {
          cin>>arr[i][j];

      }

  }

for(int i =0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
      if(i==0 && j==0)
      {
          def+=arr[0][0]*((arr[1][1]*arr[2][2])-(arr[1][2]*arr[2][1]));
      }
      else if(i==0` && j==1)
      {
           def+=arr[0][1]*((arr[2][0]*arr[2][2])-(arr[1][2]*arr[3][2]));
      }
    }

    break;

}


  }

