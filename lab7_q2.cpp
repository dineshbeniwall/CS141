//including librery
#include<iostream>
using namespace std;

			//first when you stuck in recrusion than make a while loop and convert into recrusion//
			//second write all recrusion steps and than make programme;;
			//if you smart than do directly;;


/*  Write a C++ program to print all natural numbers between 1 to n using recursion.
*/

int print(int i, int n){
	if (i==n+1){
		return 1;	
	}
	else {
		cout<<i<<endl;
		i++;
		print(i, n);
	}
return 0;
}

int  main(){
	int n;
	cout <<"write a number till i print all natural number \n";
	cin>>n;
	print(1,n);
	return 0;
}


