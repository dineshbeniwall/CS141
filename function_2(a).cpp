//include library
#include<iostream>
using namespace std;

		//function
/*(a)
(by value) write a programme with a function that takes two int parameters, adds them together, then returns the sum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum.
*/

		//function that takes two int parameters, adds them together, then returns the sum.
int additation(int x, int y){
	int r;
	r = x+y;
	return r;
}

		
int main(){
	int a, b, c;
		//The program should ask the user for two numbers,
	cout <<"write two numbers: \n";
	cin>>a;
	cin>>b;
		//then call the function with the numbers as arguments
	c = additation(a, b);
	
		//tell the user the sum.
	cout<<"the sum of given numbers is :"<<c<<endl;

return 0;

}



