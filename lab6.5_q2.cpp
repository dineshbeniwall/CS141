//including librery
#include<iostream>
using namespace std;

/*You are a salesperson of Bata shoe company, where each shoe is Rs 225. Company gave you three options for the salary.
1. Just a salary of Rs 600 per week;
2. A salary of Rs7.00 per hour plus a 10% commission on sales; (Assume you work 40 hours a week)
3. No salary, but 20% commissions and Rs20 for each pair of shoes sold
Write a program to help decide the best choice of compensation. You ask the user for input (Write a function for this). Then write other functions for each of the options. Write a driver program to use the 4 functions and decide the best option for yourself. (Of course, the weekly sales - the number of shoes sold per week has to be given by the user) 
*/
			//let's start write functions
			
			//the number of shoes sold per week has to be given by the user. Ask the user for input (Write a function for this)
int soldpair(){
	int a;
	cout<<"write number of pairs of shoes you can sell in one week \n";
	cin>>a;
	return a;
}
			//***** type name(write which you want call), never do like no needed y and type int y, y is in return******// 
			//option 1
int op1(){
	int x;
	 x = 600;
	return x;
	
}
			//option 2 A salary of Rs7.00 per hour plus a 10% commission on sales; (Assume you work 40 hours a week)
int op2(int a){
	int y;
	
	y = 40*7 + a*(225*10/100);
	return y;
}
			//No salary, but 20% commissions and Rs20 for each pair of shoes sold
int op3(int a){
	int z;
	z = a*20 + a*(225*20/100);
	return z;
}
			//a driver program to use the 4 functions and decide the best option
int main(){
	int a;
	a=soldpair();
	//op1(p,a);
	//op2(q,a);
	//op3(r,a);
	if (op1()>op2(a) and op1()>op3(a)){
		cout<<"for you option 1 is batter, you can get salary of Rs "<<op1()<<endl;		
	}
	else if (op2(a)>op1() and op2(a)>op3(a)){
		cout<<"for you option 2 is batter, you can get salary of Rs "<<op2(a)<<endl;		
	}
	else{
		cout<<"for you option 3 is batter, you can get salary of Rs "<<op3(a)<<endl;		
	}
        return 0;
}
