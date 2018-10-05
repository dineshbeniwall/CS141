//including librery
#include<iostream>
using namespace std;

			//first when you stuck in recrusion than make a while loop and convert into recrusion//
			//second write all recrusion steps and than make programme;;
			//if you smart than do directly;;


/*    Write a C++ program to find sum of all even or odd numbers in given range using recursion.
*/
/*
int i=1;
while(i<n+1){
sum = sum +i;
i+=2;
}
cout <<sum<<endl;
*/
			//convert this while into recrution
			//all remain process accordingly q4+q3

	
int sumeven(int i, int z, int n){
	if(n%2==0){
		if(i==n+2){
			cout<<z<<endl;
			return 1;
		}
		else{
			z=z+i;
			i=i+2;
			sumeven(i,z,n);
		}
	}
	else{
		if(i==n+1){
			cout<<z<<endl;
			return 1;
		}
		else{
			z=z+i;
			i=i+2;
			sumeven(i,z,n);
		}

	}
return 1;
}
int sumodd(int i, int z, int n){
	if(n%2==0){
		if(i==n+1){
			cout<<z<<endl;		
			return 1;
		}
		else{
			z=z+i;
			i=i+2;
			sumodd(i,z,n);
		}
	}
	else{
		if(i==n+2){
			cout<<z<<endl;
			return 1;
		}
		else{
			z=z+i;
			i=i+2;
			sumodd(i,z,n);
		}

	}
return 0;
}
int main(){
	int n;
	cout<<"enter a number till where you would like to sum of all even numbers \n";
	cin>>n;
	cout<<"sum of even numbers \n";
	sumeven(2,0,n);
	cout<<"sum of odd numbers \n";
	sumodd(1,0,n);
return 0;
}

