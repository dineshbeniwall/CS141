
//include library
#include<iostream>
using namespace std;

					//function
/*(a)
(By Reference) Goal is the same as above, but this time, the function that finds the maximum should be void, and takes a third, pass by reference parameter; then puts the maximum in that.
*/

					//the function that give maximum of two numbers,must be void
void max (float a, float b, float &c){
	if (a>b){ c=a; }
	else { c= b; }
	
}

int main(){
	float x,y,z;
					//ask two numbers
	cout << "write two ramdom numbers: "<<endl;
	cin>>x>>y;

					//call the function ...because the function in void and take by refrence so when i call the function it call veriable c than in x,y,z z took the value of c and still be veriable.....now if i <<c then..it print c
	max(x, y, z);
	cout<< "maximum between two numbers is: "<<z<<endl;
return 0; 

}
