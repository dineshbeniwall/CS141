#include <iostream>
using namespace std;
//using function
int countEven(int* p,int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(*(p+i)%2==0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int size;
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter input to array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int* p=&arr[0];
    cout<<"No. of even numbers:"<<countEven(p,size)<<endl;
}
