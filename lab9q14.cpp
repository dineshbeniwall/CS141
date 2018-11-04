#include <iostream>
using namespace std;
int main()
{
    char str[20];
    cout<<"Enter your name:";
    cin>>str;
    //using the normal index method
    cout<<"using normal index method"<<endl;
    int i;
    for( i=0; i<20; i++) 
    { 
        cout<<str[i]; 
    } 
    
    cout<<endl;
    
    char *p;
    p = str;
    cout<<" using pointer method"<<endl;
     while( *p != '\0')
    {
        cout<<*p; 
        p++; 
    }
    
  return 0;
}
