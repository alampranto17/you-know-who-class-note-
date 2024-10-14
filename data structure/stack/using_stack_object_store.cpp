#include<bits/stdc++.h>
#include"stackusinglist.h"
using namespace std;

int GLOBAL_id=100;
class person
{
string name;
float salary;
int ID;


public :
person()
{
    name= "";
    salary = -1.0;
}

void setname(string name)
{
    this->name=name;
}

void setsalary(float salary)
{
    this->salary=salary;
}

person(string name,float salary)
{
setname(name);

setsalary(salary);

this->ID=GLOBAL_id;
GLOBAL_id++;
}


string getname()
{
    return name;
}

int getID()
{
    return ID;
}

float getsalary()
{
    return salary;
}



};

int main ()
{
        Stack<person>st;
        person a("alam pranto",400.00);
        person b("akhil",100.00);
        st.push(a);
        st.push(b);

        while(!st.empty())
        {
            person obj;

            obj=st.pop();
            cout<<"Name   : "<<obj.getname()<<endl;
            cout<<"ID     : "<<obj.getID()<<endl;
            cout<<"Salary :"<<obj.getsalary()<<endl;
        }


    return 0;
}
