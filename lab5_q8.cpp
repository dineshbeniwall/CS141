//include librery
#include <iostream>
using namespace std;




int main(){

					//written carector is either vowal or consonant				
	char vowal, consonant;
					//vowal is veriavle
					// vowal = a....no sence, vowal == a....no sence because a is nothing
					// 'a' is a alphabete a and == does it has velue of a ..
	cout << "write any alphabet \n";
	cin >> vowal;
					// or can be written as || , and can be written as &&
	if (vowal == 'a' or vowal == 'A' or vowal == 'e' or vowal == 'E' or vowal == 'i'or vowal == 'I' or vowal == 'o'or vowal == 'O' or vowal == 'u' or vowal == 'U'){
	cout << "written alphabet is an vowal \n";
}
	
	else{
	cout <<"written alphabet is a constant \n"; 
}

return 0;
}
