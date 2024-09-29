#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
// const int xm =1000;
// int arrive[xm];
// int down[xm];
// int store[xm];

//and operation
int andop(int x,int y)
{
    return x&y;
}

//or operation

int OR_op(int x,int y)
{
    return x|y;
}

//xor operation
int Xor_op(int x,int y)
{
    return x^y;
}

//bit on or off

int bitcheck(int x,int k)
{
    return (x>>k)&1;
}

//showing all one bits
void onbitsnum(int n)
{
    for(int i=0;i<32;i++)
    {
        if(bitcheck(n,i))
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

//all the offbits

void offbitsnum(int n)
{

     for(int i=0;i<32;i++)
    {
        if(!bitcheck(n,i))
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;

}

//even or odd
int evenodd(int n)
{
    if(n&1)
    {
        return 1;
    }
    return 0;
}
//turn on bits
int biton(int n,int k)
{
   if((n>>k)&1)
   {
       return n;
   }
   else{

    return (n^(1<<k));
   }

}

//2's power or not

bool power(int n)
{
    for(int i =1;i<32;i++)
    {
        if((2<<i)==n)
        {
            return true;
        }

    }
    return false;
}



int main()
{
   optimize();

   cout<<andop(5,7)<<endl;
   cout<<OR_op(5,7)<<endl;
   cout<<Xor_op(5,7)<<endl;
   cout<<~8<<endl;
   cout<<(7<<1)<<endl; //left  shift it
   cout<<(7>>1)<<endl; // right shift it
    cout<<"checking bit on or off"<<endl;
   cout<<bitcheck(2,0)<<endl;
   cout<<endl<<"all the on bits of  number 10"<<endl;
   onbitsnum(10);
  cout<<endl<<"all the off bits of  number 10"<<endl;
  offbitsnum(10);
  cout<<endl<<"number 10 is even or odd ?"<<endl;
  if(evenodd(10))
  {
      cout<<"odd"<<endl;
  }
  else
  {
      cout<<"even"<<endl;
  }

  cout<<biton(10,2)<<" turn on 10 number 2 number's bit"<<endl;

  cout<<"toggleing "<<(10^(1<<1))<<endl;

  cout<<"number is 2's power or not"<<endl;

  cout<<"16 "<<power(16)<<endl;










     }
