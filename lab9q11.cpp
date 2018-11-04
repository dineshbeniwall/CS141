#include<iostream>
using namespace std;
int main()
{
	int i,*i1;char c,*c1;float f,*f1;double d,*d1;bool b,*b1;
	i=1;c='c';f=3.1415;d=3.141592;b=0;
	i1=&i;
	c1=&c;
	f1=&f;
	d1=&d;
	b1=&b;
	
	cout<<"Sizes character variable and pointer "<<sizeof(c)<<" and "<<sizeof(c1)<<endl;
	cout<<"Sizes integer variable and pointer "<<sizeof(i)<<" and "<<sizeof(i1)<<endl;
	cout<<"Sizes floating point variable and pointer "<<sizeof(f)<<" and "<<sizeof(f1)<<endl;
	cout<<"Sizes double variable and pointer "<<sizeof(d)<<" and "<<sizeof(d1)<<endl;
	cout<<"Sizes bool variable and pointer "<<sizeof(b)<<" and "<<sizeof(b1)<<endl;
	return 0;
}
