//include library
#include <iostream>
using namespace std;




				//we are going to write all natural numbers using while
				//simply define a integer n and while (condition){stetmaent}
int main (){
	int a=1, n;
	cout << "write last natural number 'n' \n";
	cin >> n;
	
				//we tell computer that natural number start form 1
				//now in while n++ increase every interger and reapet
				//it will endless because while (n>0) no stopping condation
	
	while (a<=n){
		cout <<a<< ", \n";
		++a;
}
	

return 0;

}
