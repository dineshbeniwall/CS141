
//include library
#include<iostream>
using namespace std;

					//function
/*(a)
(By Reference) Goal is the same as above, but this time, the function that finds the minimum  of the numbers should be void, and takes a third, pass by reference parameter; then puts the minimum  in that.

*/

					//the function that give minimum of two numbers
void min(float a, float b, float &c){
	
	if (a>b){ c=b; }
	else { c=a; }
	
}

int main(){
	float x,y,z;
					//ask two numbers
	cout << "write two ramdom numbers: "<<endl;
	cin>>x>>y;

					//call the function 
	min(x,y,z);
	cout<< "minimum between two numbers is: "<<z<<endl;
return 0; 

}
