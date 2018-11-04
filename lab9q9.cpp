#include <iostream>
using namespace std;
// using function
bool contains(char* p,char c)
{
    char t='\0';
    for(int i=0;*(p+i)!='\0';i++)
    {
        if(*(p+i)==c)
        t=*(p+i);
    }
    if(t!='\0')
    return true;
    else
    return false;
}

int main()
{
    int size;
    cout<<"Enter max size of array"<<endl;
    cin>>size;
    char arr[size];
    cout<<"Enter input to array"<<endl;
    cin>>arr;
    char c;
    cout<<"Enter the input you want to find in the array"<<endl;
    cin>>c;
    char* p=&arr[0];
    cout<<contains(p,c);
}
