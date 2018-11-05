#include <iostream>
using namespace std;

/* Write a function myStrLen(char*) which returns the length of the parameter cstring.  Write the function without using the C++ function strlen. */
			//create own unique function 
			//use for loop and stop when we get \0 value 
int myStrLen(char* p){
	int count=0;
	for(int i=0; *(p+i)!='\0'; i++){
		*(p+i);
		count++;
	}
return count;
}

int main(){
	char billy[100];
	cout<<"Enter the string:"<<billy;
			//get a string line
	cin.getline(billy,100);
	char* p=&billy[0];
	cout<<"Length of the string is:"<<myStrLen(p)<<endl;
return 0;
}
