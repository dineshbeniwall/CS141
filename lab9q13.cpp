#include<iostream>
using namespace std;
int main()
{
   int arr[10]={1,2,3,4,5,6,7,8,9,0};
   cout<<"using the normal index method"<<endl;
    for (int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}   
	cout<<endl;
    int *x = arr;
    cout<<"using the pointer method"<<endl;
    for(int i = 0; i<10; i++)
    {
        cout<<*x<<" ";
        x++;
    }
   return 0;
}
