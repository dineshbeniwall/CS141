 //include librery
#include <iostream>
using namespace std;


		//program to print multiplication table of any number. 
			
int main(){
			
	int i=1,z,n;
			
	cout << "write a number which multiplication table i have to print: \n";
	cin >>n;
			//while condition
			//almost same as sum , something like z = z*i and i++ 
	while (i<=10){	//stop when i = 10
			

	z = n*i;
	cout <<z<< endl;
	i++;
	
}			//may be everything is fine

/*	#method 2
	i=0
	cin>>z	
	while (i<=10){
	z=z+i;
	i+=z/////////////////////////////type*/






return 0;
}
