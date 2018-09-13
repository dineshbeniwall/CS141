//include library
#include<iostream>
using namespace std;

					//function
/*(a)
((By Value) Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum.

*/

					//the function that give maximum of two numbers

float max(float a, float b){
					//functin that find maximum
	float c;
	if (a>b){
		c=a;	
	}
	else {
		c=b;
	}
					//return the maximum
return c;
}



int main(){

					//ask the values
	float x,y;
	cout <<"write two rendom numbers :"<<endl;
	cin>>x>>y;
	

					//call the function
	cout<<"maximum in provided numbers: "<<max(x,y)<<endl;
	
return 0;
}


