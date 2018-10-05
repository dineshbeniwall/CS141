//including librery
#include<iostream>
using namespace std;

			//first when you stuck in recrusion than make a while loop and convert into recrusion//
			//second write all recrusion steps and than make programme;;
			//if you smart than do directly;;


/*   Write a C++ program to find sum of all natural numbers between 1 to n using recursion.
*/
/*
int i=1;
while(i<n+1){
sum = sum +i;
i++;
}
cout <<sum<<endl;
*/
			//convert this while into recrution
int sum(int i,int z, int n){
	
	if (i==n+1){	//i took till n+1 becoz z is one after my wish so do yourself
		cout<<z<<endl;
		return 1;	
	}
	else {
		z=z+i;
		i++;
		sum(i,z,n);	
	}
return 0;
}
int main(){
	int n;
	cout<<"enter a number till where you would like to sum \n";
	cin>>n;
	sum(1,0,n);
return 0;
}
