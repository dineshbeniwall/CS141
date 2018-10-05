//including librery
#include<iostream>
using namespace std;

			//first when you stuck in recrusion than make a while loop and convert into recrusion//
			//second write all recrusion steps and than make programme;;
			//if you smart than do directly;;


/*  Write a C++ program to print all even or odd numbers in given range using recursion.
*/

int printeven(int i, int n){
	if(n%2==0){
		if(i==n+2){return 1;}
		else{
			cout<<i<<endl;
			i=i+2;
			printeven(i,n);
		}
	}
	else{
		if(i==n+1){return 1;}
		else{
			cout<<i<<endl;
			i=i+2;
			printeven(i,n);
		}

	}
return 0;
}
int printodd(int i, int n){
	if(n%2==0){
		if(i==n+1){return 1;}
		else{
			cout<<i<<endl;
			i=i+2;
			printodd(i,n);
		}
	}
	else{
		if(i==n+2){return 1;}
		else{
			cout<<i<<endl;
			i=i+2;
			printodd(i,n);
		}

	}
return 0;
}
int main(){
	int n;
	cout<<"give a range in which you want print even and odd numbers \n";
	cin>>n;
	cout<<"even numbers between \n";
	printeven(2,n);
	cout<<"odd numbers between \n";
	printodd(1,n);
return 0;
}
