#include <bits/stdc++.h>
using namespace std;

//int string float pain double

template<typename N>class node
{
public:
    N value;
    node *next;
    node *pre;

    node(N x)
    {
        value = x;
        next = NULL;
        pre = NULL;
    }
};

template<typename T>class Stack
{
    node <T>*head = NULL;
    node <T> *top = NULL;
    int count = 0;

public:
    // push
    bool push(T x)
    {
        node <T> *newnode = new node<T>(x);
        if (head == NULL)
        {
            head = newnode;
            top = newnode;
            count++;
            return true;
        }
        newnode->pre = top;
        top->next = newnode;
        top = newnode;
        count++;

        return true;
    }

    // pop
    T pop()
    {
        node <T> *del = top;
        T chk ;
        if (head == NULL)
        {
            cout << "stack is underflow" << endl;
            return  chk ;
        }

        if (head == top)
        {
            head = top = NULL;
        }
        else
        {
            top = top->pre;
            top->next = NULL;
        }

        chk=del->value;
        delete del;
        
        count--;
        return chk;
    }

    // top
    T Top()
    {
        if (top == NULL)
        {
            cout << "stack is underflow" << endl;
            return 0;
        }
        return top->value;
    }

    // size
    int size()
    {
        return count;
    }
    // empty
    bool empty()
    {
        if (head == NULL)
        {
            return true;
        }
        return false;
    }
};
