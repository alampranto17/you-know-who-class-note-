#include<iostream>
#include"Queue1.h"

int main ()
{
    Queue<char> q;
    q.enqueue('a');
    q.enqueue('b');
    cout<<q.fornt()<<endl;
    cout<<q.back()<<endl;
}
