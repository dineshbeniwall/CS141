 //include librery
#include <iostream>
using namespace std;



			//program to find sum of all even numbers between 1 to n
int main(){
			//define integers may be no now i gonna to use for loop not while
			//for (define; condition; increase or decrese)
			//may be while is batter
	int i=0,n,sum;
			//write a number for which all the numbers will added
	cout << "write a number: \n";
	cin >>n;

	while (i<=n){
			//now somthing like sum = sum + i and increase i++ and done
			//concept of loop is took i put in sum and again sum which is i + i++ and put them in sum , now again increase i by one and so on....yeah... i am able to understand

	sum = sum + i;
	cout << sum << endl;
	i+=2;

}
return 0;
}
