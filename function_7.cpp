
//include library
#include<iostream>
using namespace std;

					//function
/*UpperCase and LowerCase
	Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.
	Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
	Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa. 
*/


				//Write a user-defined function toUpper() that returns the uppercase 					of the inputChar received. Use call-by-value

				//for this type google and find that A...Z is between 65 to 90 and
				//a....z is between 97 to 122 for more details run asie_print.cpp
				//from github and google again to understand concept
				//this means zeros and one for 65 is same for A we just tell computer
				//that A is char and 65 is int.....
	char toUpper(char ch){
		char chr;		
		chr = ch-32;
	return chr;
	}

				//Write a user-defined function toLower() that returns the lowercase 					of the inputChar received. Use call-by-value.
	char toLower(char ch){
		char chr;		
		chr = ch+32;
	return chr;
	}

				//Write a main program, that calls the above function based on the 					input of the user
int main(){
	char charctor;
				//ask the user a charctor and take a value
	cout<<"write a rendom single charector: \n";
	cin>>charctor;
			
				//If the user enters a lower case character, it should automatically 					detect it and call toUpper() and display the upper case value
	if(65<=charctor && charctor<=90){
		cout<<toLower(charctor)<<endl;
	}
	else{
		 cout<<toUpper(charctor)<<endl;
	}
return 0;

}
