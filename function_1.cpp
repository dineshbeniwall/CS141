				//first read or try question 2,,3,4,5,6,7    than come to this

//include library
#include<iostream>
using namespace std;

					//function-Tax rate calculatation
/*Sales tax = Units * Unit Cost * rate
Total = sales tax + (units * unit cost)*/
/*Tax Rate Calculation using Functions 
	Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. Choose an appropriate name for this function.
	Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.
	Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. Choose an appropriate name for this function.
	Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. Your program should call the functions listed above.
	Pseudocode and Indentation must be present. 
*/
					//Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. 
	int returnvalue(int &a, int &b,int &c){
 	 	
			 cout<< "enter the units = "<<endl;
			 cin>>a;
	 		 cout<< "enter the unitCst = "<<endl;
	 		 cin>>b;
	 		 cout<< "enter the taxRt = "<<endl;
			 cin>>c;
 	 }
					//Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. 	 
 	 void sat(int& a, int& b,int& c){
 	 	
	 	int sat = a*b*c;
	 	cout<< "salesTx = "<< sat <<endl;
 	 }
 	 void tot(int& a, int& b,int& c){
 	 	
	 	int tot = (a*b*c) + (a*b);
	 	cout<< "totDue = "<< tot <<endl;
 	 }
					//Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. 	 	
	 int read(int& a, int& b,int& c){
	 	  
	 	cout<< "The unit cost over the object is " <<b<< ". "<<endl<<"The number of units are "<<a<<". "<<endl<<"The tax rate is "<<c<<". "<<endl<<"the sales tax is "<<(a*b*c)<<". "<<endl<<"The total is "<<(a*b*c)+ (a*b)<<endl; 
	 }
					//Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue.
					//driver function
int main(){
	 	
					//call by reference
	 	  	int a,b,c;
			returnvalue(a,b,c);
	 	  	sat(a,b,c);
	 	  	tot(a,b,c);
	 	  	read(a,b,c);

	 	  	return 0;
}
