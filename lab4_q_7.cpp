#include <iostream>
#include <cmath>		//it's another librery for underroot 3 
				//it understand command pow which means power
				//it's work like pow(base, power )
using namespace std;



int main(){


	float side,area;	//ok class..CLASS today we find out the area of equilateral triangle
	

	cout << "what is side of equilateral tringle which's area you want to find out : \n";

	cin >> side;
				//formula with twist of pow command 
	
	area = (pow(3, 0.5)/4)*(pow(side, 2));

	cout << "area of your triangle is : "<< area << endl;
return 0;



}
