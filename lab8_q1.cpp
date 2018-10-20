#include<iostream>
using namespace std;

int sum(int *billy,int n){
	int add;
	for(int i=0;i<n;i++){
		add = add + billy[i];
	}
return add;
}

int main(){
	int n,billy[50];
	cout<<"How many elements you want to enter \n";
	cin>>n;
	cout<<"enter the numbers \n";
	for(int i=0;i<n;i++){
	cin>>billy[i];
	}
	cout<<"sum of all elements of arrey: "<<sum(billy,n)<<endl;
return 0;
}

