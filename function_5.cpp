
//include library
#include<iostream>
using namespace std;

					//function
/*(a)
Write a program that includes the above three (2,3,4) functions. Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output. 

*/
						//function that takes two int parameters, adds them together, then returns the sum.
	float add(float a, float b){
		float r;
		r = a+b;
		return r;
	}
						//the function that give minimum of two numbers
	float min(float a, float b){
		float c;	
		if (a>b){ c=b; }
		else { c=a; }
		return c;
	}
						//the function that give maximum of two numbers

	float max(float a, float b){
		float c;
		if (a>b){c=a;}
		else {c=b;}
		return c;
	}
	
int main(){
	float x,y;
	char z;
					//ask two numbers
	cout << "write two ramdom numbers: "<<endl;
	cin>>x>>y;
					//give optaions
	cout << "what can i do for you choose any one option: \n"<<"(A) sum of given numbers.\n"<<"(B) maximum of given numbers.\n"<<"(C) minimum of given numbers.\n"<<"write A or B or C in capital\n";
					//get options
	cin>>z;
					//define get optain we put any value goes into z and than we apply conditions
					//call all the function according to the demand of user
	if (z=='A' ){ cout <<"addition of given numbers: "<< add(x,y)<<endl;}
	else if (z=='B' ) { cout<<"maximum of given numbers: " << max(x,y)<<endl;}
	else { cout<<"minimum of given numbers: "<<min(x,y)<<endl; } 
	
return 0; 

}
