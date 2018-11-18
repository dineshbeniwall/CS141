#include<iostream>
using namespace std;

/*Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter(). Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth. Compare the areas and perimeter of the those rectangles.
*/
	//define class
class rectangle{
	public:			//make it private
	double length;		//length of rectangle
	double breadth;		//breadth of rectangle

	double area(void);	//function of area
	double perimeter(void);	//function of perimeter
};
				//define functions
double rectangle::area(void){return length*breadth;}
double rectangle::perimeter(void){return (2*length+2*breadth);}

int main(){
	double x,y,p,q,area1,area2,peri1,peri2;
	rectangle rec1;
	rectangle rec2;
	cout<<"put the length and breadth for first rectangle \n";
	cin>>x>>y;
	rec1.length=x;
	rec1.breadth=y;
	area1=rec1.area();
	peri1=rec1.perimeter();
	cout<<"put the length and breadth for second rectangle \n";
	cin>>p>>q;
	rec2.length=p;
	rec2.breadth=q;
	area2=rec2.area();
	peri2=rec2.perimeter();
	cout<<"area of first rectangle- "<<area1<<endl;
	cout<<"perimeter of first rectangle- "<<peri1<<endl;
	cout<<"area of second rectangle- "<<area2<<endl;
	cout<<"perimeter of second rectangle- "<<peri2<<endl;
	if(area1>area2){
		cout<<"Area of the first reactangle is greater than the second rectangle\n";
	}
	else if(area1<area2){
		cout<<"Area of the second reactangle is greater than the first rectangle\n";
	}
	else{
		cout<<"Both the rectangles have the same area\n";
	}
	if(peri1>peri2){
		cout<<"Perimeter of the first reactangle is greater than the second rectangle\n";
	}
	else if(peri1<peri2){
		cout<<"Perimeter of the second reactangle is greater than the first rectangle\n";
	}
	else{
		cout<<"Both the rectangles have the same perimeter.\n";
	}
return 0;
}


