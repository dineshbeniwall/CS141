//including librery
#include <iostream>
using namespace std;

/* Write a piece of code which prints the characters in a cstring in a reverse order. */

int main(){
	char s[10] ="abcde";
				//defineing the char pointer and inicilliging it
	char* cptr;
	cptr=s;
		   		//using the loops
	for(int i=10; i>=0; i--){
		cout<<*(cptr+i);//pointer took first address but we add 10 into it's address
	}
	cout<<endl;
return 0;
}

