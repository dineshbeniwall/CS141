#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int *p;
    //Point p to a. 
    p=&a;
    b=*p;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"*p = "<<*p<<endl;
    
    cout <<endl;
    //Assign values a=2 and b = 3. Print the values of a, b and *p. 
    a=2;
    b=3;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"*p = "<<*p<<endl;
    
    cout <<endl;
    //Now point p to b.
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"*p = "<<*p<<endl;
    
    cout <<endl;
}
