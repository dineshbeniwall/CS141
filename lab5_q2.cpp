//include librery
#include <iostream>
using namespace std;




int main(){
					//we will go to find maximum number among given numbers
					//we will us if ,else if and else because conditions more than 2
					//define integers or desimals numbers and apply conditions one by one
	float a,c,b;
	cout << "write theree numbers \n";
	cin >>a;
	cin >>b;
	cin >>c;

	if (a>b and a>c){
					//so a is greater among given numbers so let's print in terminal
		cout << a<< " is maximum number among given numbers \n"; 
}
	else if (b>c and b>a){
		cout << b<< " is maximum number among given numbers \n"; 
}
	else {
		cout <<c<< " is maximum number among given numbers \n"; 
}

return 0;
}
