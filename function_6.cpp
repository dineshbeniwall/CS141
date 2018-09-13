
//include library
#include<iostream>
#include<cmath>
using namespace std;

					//function
/*1 Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined  	function called sumEvenNumbers(). Use call-by-value
2 Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined 		function called sumOddNumbers(). Use call-by-value
3 Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create 	a user-defined function called sumSquareOddNumbers(). Use Call-by-Value. 
4 Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create 	a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value. 
5 Write a main program. 
  	1 Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning 		  function. Use sumEven to hold a returned value.
  	2 Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function.  	    Use sumOdd to hold a returned value.
  	3 Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value 	   returning function. Use sumSquareEven to hold a returned value.
  	4 Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value 		  returning function. Use sumSquareOdd to hold a returned value.
  	5 Then display the values

*/
	
				//Write a function that outputs the sum of all even numbers between firstNum and secondNum. 			        	//	loop); create a user-defined function called sumEvenNumbers().
/*{1}*/ int sumEvenNumbers(int a, int b){
		int sum=0;
					//sum all even number..first check my given numbers is odd or even than add only even
					//for this if a is odd i=a+1 and b is even i<=b otherwise i<b type
					//method 2 it should chek every element wether it is even or add if even than add else 						//leave
	
		for(int i=a; i<=b ; i++){
			if (i%2==0){sum = sum +i;}
		}
	return sum;
	}
				// Write a function that outputs the sum of all odd numbers between firstNum and secondNum. 					//(use loop); create a user-defined function called sumOddNumbers()
/*{2}*/	int sumOddNumbers(int a, int b){
		int sum=0;
					//almost same as above
	
		for(int i=a; i<=b ; i++){
			if (i%2!=0){sum = sum +i;}
		}
	return sum;
	}
				// Write a function that outputs the sum of the square of the odd numbers between firstNum and 					//secondNum. (use while loop); create a user-defined function called sumSquareOddNumbers().
/*{3}*/	int sumSquareOddNumbers(int a, int b){
		int sum=0;
					//write a loop which add square of add
		for(int i=a; i<=b ; i++){
			if (i%2!=0){sum = sum +pow(i, 2);}
		}
	return sum;
	}
				//Write a function that outputs the sum of the square of the odd numbers between firstNum and 					//secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers().

/*{4}*/	int sumSquareEvenNumbers(int a, int b){
		int sum=0;
					//write a loop which add square of even
		for(int i=a; i<=b ; i++){
			if (i%2==0){sum = sum +pow(i, 2);}
		}
	return sum;
	}

int main(){
	int x,y,sumEven,sumOdd,sumSquareEven,sumSquareOdd;
	cout << "write two rendom numbers: \n";
	cin>>x>>y;
	sumEven = sumEvenNumbers(x,y);
	sumOdd = sumOddNumbers(x,y);
	sumSquareEven = sumSquareEvenNumbers(x,y);
	sumSquareOdd = sumSquareOddNumbers(x,y);
	cout <<"sum of Even numbers: "<<sumEven<<endl<<"sum of Odd numbers: "<<sumOdd<<endl<<"sum of square of Even numbers: "<<sumSquareEven<<endl<<"sum of square of Odd numbers: "<<sumSquareOdd<<endl;
return 0;


}
