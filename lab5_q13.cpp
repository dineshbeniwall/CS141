//include librery
#include <iostream>
using namespace std;




int main(){
					//numbers of notes in given amount
					//10, 20, 50, 100, 500, 2000, notes but i wanna make it complicated if amout like 53
					//first make simple programme
	int x,a,b,c,d,e,f;
	cout << "write your amount here: \n";
	cin >> x;

	if ( x % 10 == 0 or x % 2000 == 0 or x % 500 == 0 or x % 20 == 0 or x % 50 == 0){
					//so divisible by 10 now formula and output value is number of notes of 10
					//do same for all others
		a = x / 10 ;
		c = x / 2000;
		d = x / 500;
		e = x / 20;
		f = x / 50; 
		cout << "number of notes of ten is "<<a<<endl;
		cout << "number of notes of two thousend is "<<c<<endl;
		cout << "number of notes of five hundred is "<<d<<endl;
		cout << "number of notes of twenty is "<<e<<endl;
		cout << "number of notes of fifty is "<<f<<endl; 

}	
	

	if (x % 100 == 0){
		b= x/100;
		cout << "number of notes of hundred is "<<b<<endl;
}


return 0;
}
