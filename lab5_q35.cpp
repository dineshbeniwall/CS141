 //include librery
#include <iostream>
using namespace std;


		                                                       // program to calculate sum of digits of any number.
			
int main(){
		                                                      //define some integers that i know later not now 	
	int x,sum;
		                                                          //write a number which digites sum we need and give it to computer
	cout << "write a number \n";
	cin >>x;
									//it's time to use for not while condition
									// divide by ten reminder is last number 
									//put reminder into sum
									//now divide by ten due to integer it remove last term
									//again reminder goes into sum so loops begain
									//let's do it
	 for(int i=x%10;x != 0;i=x%10){
		
									//do step by step ( 1; 2; 3)
									//we complete 1
									//now i goes into sum and x become one digit less number
									//now for go to 3 so what we want again ....reminder so 3=1
									//now for go to 2 , we do not know leave and do further and further 
									//finally found that loop add sum + 0 that make no sence so 
									//we will stop when x become zero/.........oh now fine

		sum = sum + i;	
		x = x/10;
	}
	cout << sum << endl;
/*	x = sum;							//that's if wanna do it again
	sum =0;
	for(int i=x%10;x != 0;i=x%10){
		
									//do step by step ( 1; 2; 3)
									//we complete 1
									//now i goes into sum and x become one digit less number
									//now for go to 3 so what we want again ....reminder so 3=1
									//now for go to 2 , we do not know leave and do further and further 
									//finally found that loop add sum + 0 that make no sence so 
									//we will stop when x become zero/.........oh now fine

		sum = sum + i;	
		x = x/10;
	}
	
	cout << sum << endl;
*/
			                                  //if i put cout inside for it reapeat but now it's outside print it once...fine i it		
return 0;	

}			                                  //may be everything is fine
