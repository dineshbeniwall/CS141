//add librery
#include<iostream>
using namespace std;



int main()
{						//i understand define all in single float
						
	float centL,metL,kilometL;
						//float for get velue in desimal 
						//now ask me lenght in cm which i want to convert in meter and kilometer
	
	cout << "please enter lenght in cm : \n";
						//i put velue which is save in centL
	cin >> centL;
						//now convert formula once you put veriable
						//both do together for less work and escape from do same thing for twise
	metL = centL/100;
	kilometL = centL/1000;
	cout << "your lenght in meter is : "<<metL<<endl;
	cout << "your lenght in kilometer is : "<<kilometL<<endl;	
					
return 0;
	 
}
