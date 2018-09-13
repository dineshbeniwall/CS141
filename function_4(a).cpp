
//include library
#include<iostream>
using namespace std;

					//function
/*(a)
(By Value) Write a program with a function that takes two int parameters, finds the min, then returns the minimum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the minimum.

*/

					//the function that give minimum of two numbers
float min(float a, float b){
	float c;	
	if (a>b){ c=b; }
	else { c=a; }
return c;
	
}

int main(){
	float x,y;
					//ask two numbers
	cout << "write two ramdom numbers: "<<endl;
	cin>>x>>y;

					//call the function 
	cout<< "minimum between two numbers is: "<<min(x,y)<<endl;
return 0; 

}
