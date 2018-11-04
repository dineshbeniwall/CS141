#include <iostream>
using namespace std;
int main()
{
    char arr[20];char* p;
    cout<<"Input about 10 characters of string"<<endl;
    cin>>arr;
    p=&arr[0];
    for(int i=9;i>=0;i--)
    {
        for(int j=i;j<10;j++)
        {
            cout<<*(p+j);
        }
        cout<<endl;
    }
    return 0;
}
