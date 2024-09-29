#include<bits/stdc++.h>
using namespace std;

void subarray(int arr[],int n){
    int max=INT_MIN;
    int min=INT_MAX;
    int ts=0;
    for(int i=0;i<n;i++) // to find start
    {
        for (int j=i;j<n;j++)
        {
            int total =0;
            for(int k=i;k<=j;k++)
            {
        
                total+=arr[k];
                
                
                if (max<total)
                {
                    max=total;
                }
                 if(min>total)
                 {
                    min=total;
                 }
                
            
            }
            ts++;
            cout<<"Subarray sum :"<<total<<endl;
            
            

            
        }
        
    }
    cout<<"Total subarray :"<<ts<<endl;
    cout<<" Max number : "<<max<<endl;
    cout<<"Min number : "<<min<<endl;


}



int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
subarray(arr,n);





}
