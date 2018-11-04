#include <iostream>
using namespace std;
//using the function
int myStrLen(char* p)
{
    int count=0;
    for(int i=0;*(p+i)!='\0';i++)
    {
        *(p+i);
        count++;
    }
    return count;
}
int main()
{
    char ar[100];
    cout<<"Enter the string:"<<ar;
    cin.getline(ar,100);//getting a string line
    char* p=&ar[0];
    cout<<"Length of the string:"<<myStrLen(p)<<endl;
    return 0;
}
