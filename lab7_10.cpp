//including librery
#include<iostream>
using namespace std;

			//first when you stuck in recrusion than make a while loop and convert into recrusion//
			//second write all recrusion steps and than make programme;;
			//if you smart than do directly;;


/*     
			C++ program to generate nth Fibonacci term using recursion.
/*
the Fibonacci numbers are the numbers in the following integer sequence
    1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 , 89 , 144 , … 

    F n = F n − 1 + F n − 2 , 
    F 1 = 1 , F 2 = 1
    F 0 = 0 , F 1 = 1		//seource wiki
*/
			//till now i become smart so directly
int fibo(int n){
	int z;
	if(n==1){return 1;}
	if(n==2){return 1;}
	z=fibo(n-1)+fibo(n-2);
	return z;
}
int main(){
	int n;
	cout<<"write which term of Fibonacci series you want \n";
	cin>>n;
	cout<<fibo(n);
return 0;
}
