//include library
#include<iostream>
using namespace std;

					//function
/*(b)
(by reference) the function that adds the numbers should be void, and takes a third, pass by reference parameter, then puts the sum in that.
*/

					//the function that adds the numbers should be void
void add(int a, int b, int &c){
	
	c = a+b;
}


int main(){
	int x,y,sum;			
					//ask the values
	cout <<"write the values :\n";
					//take the values
	cin>>x;
	cin>>y;
					//call the function with sum go to veriable
	add(x, y, sum);
					//tell the user sum
	cout << "The sum of given numbers is: "<<sum<<endl;
return 0;
}
