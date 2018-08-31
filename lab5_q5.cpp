//include librery
#include <iostream>
using namespace std;




int main(){
			// a number is even or odd
			//how can i do this.....1. divisble by 2
			//2. end on 0,2,6,8,4  
			//n= 2*q + p if p = 0 even else odd

			// number % 2 =0 means even....i forget about this

	int n,q,p;
	cout << "write any number \n";
	cin >> n;
			//i have to told him that which formula a have to be gonna use 
			
	if (n % 2 == 0){
			// 2=3 means i am telling him that 2 is equl to 3 
			//if 2==3 check 2 is equal to three or not
			//n==2 i am wanna that he check n is equal to 2 and n=2 means i tell him that n is equl to 2
		cout <<n<< " is an even number\n";
}
	else {
		cout <<n<< " is a odd number\n";
}

return 0;


}
