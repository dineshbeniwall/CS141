#include <iostream>
using namespace std;

		// ********************************************************************
		//  Declaration of class Point
		// ********************************************************************

		// class Point represents a two-dimensional point
class Point{
	int X;
	int Y;
	public:
		/*so actually what we did, first point is 0,0 second point my rendom point then shift by dx and dy so i find third and fourth point. for this first rectangular is first class then findout that i need one more class point which contains all my points, so in point class point(0,0), point(rendoms), move point,get x and y form privet, then these privet x and y goes to rendom x and y. we do all these stuff outside the class point because we want class less bigger.*/
  		// default class constructor (with no arguments):
	Point(); 

  		// class constructor that sets the coordinates x, y to the values x1,y1;
	Point(int x1, int y1);

		// member function for moving a point by dx, dy:
	void Move(int dx, int dy);

		// member functions for getting values of x, y:
	int Get_X() const;
	int Get_Y() const;

		// member functions for setting x, y to x1, y1 respectively  
	void Set_X(int x1);
	void Set_Y(int y1);

		//Lab 7 exercise 4.1. Add declaration of member function Print here:
	
	void print();
		// private data members x, y represent coordinates of the point:
	
};  


// ********************************************************************
//  Methods for class Point
// ********************************************************************

// class constructor sets X, Y to zero when no values are specified:
Point::Point(){
  X = 0;
  Y = 0;
}

// class constructor sets X, Y to given values x1, y1:
Point::Point(int x1, int y1)
{
  X = x1;
  Y = y1;
}

// member function Move: increases the x coordinate by dx and the y
// coordinate by dy.
void Point::Move(int dx, int dy){
  X += dx;
  Y += dy;
}

// Get_X returns the value of the X coordinate
int Point::Get_X() const{
  return X;
}

// Get_Y returns the value of the Y coordinate
int Point::Get_Y() const{
  return Y;
}

// Set_X sets the value of X coordinate to x1
void Point::Set_X(int x1){
  X = x1;
} 

// Set_Y sets the value of Y coordinate to y1
void Point::Set_Y(int y1){
  Y = y1;
}   

//Lab 7 exercise 4.1. Add definition of member function print:
//print the points
void Point::print(){
	cout<<"("<<X<<", "<<Y<<")";
}

// ********************************************************************
//  Declaration of class Rectangle
// ********************************************************************
class Rectangle{
//Lab 7 exercise 4.2, 4.3: Add class Rectangle declaration HERE: 
	/*The private data members of the class include all 4 corner points of the rectangle. 
*/
	Point bottomleft;
	Point bottomright;
	Point topleft;
	Point topright;
	/*There are two constructors: one takes two points as arguments and creates a rectangle with the first point as the bottom left corner and the second as the top right corner, the other (default) constructor creates a rectangle with the corners (0,0), (1,0), (0,1), (1,1). 
*/
	public:
 	Rectangle(){
		bottomleft.Set_X(0);
		bottomleft.Set_Y(0);
		topright.Set_X(1);
		topright.Set_Y(1);
		topleft.Set_X(0);
		topleft.Set_Y(1);
		bottomright.Set_X(1);
		bottomright.Set_Y(0);
	}
	//another rectangular with random points
	Rectangle(Point p1,Point p2){
		bottomleft.Set_X(p1.Get_X());
		bottomleft.Set_Y(p1.Get_Y());
		topright.Set_X(p2.Get_X());
		topright.Set_Y(p2.Get_Y());
		topleft.Set_X(p1.Get_X());
		topleft.Set_Y(p2.Get_Y());
		bottomright.Set_X(p2.Get_X());
		bottomright.Set_Y(p1.Get_Y());
	}
	/*The print member function prints all 4 corners of the rectangle, using the member function print of the class Point. 
*/
	void print(){
		cout<<"the four corners of the rectangle formed are \n";
		bottomleft.print();
		cout<<", ";
		bottomright.print();
		cout<<", ";
		topleft.print();
		cout<<", ";
		topright.print();
		
	}
	/*Add two private member functions side1, side2 to the class Rectangle to compute the lengths of the two sides. Using this function, write a public member function to compute the area of the rectangle. */
	private:
		int side1(){
			int X1=bottomleft.Get_X();
			int X2=bottomright.Get_X();
			return X2-X1;	
		}
		int side2(){
			int Y1=bottomleft.Get_Y();
			int Y2=topleft.Get_Y();
			return Y2-Y1;
		}
	public:
		int area(){
			int s1=side1();
			int s2=side2();
			return s1*s2;
		}
};



// ********************************************************************
//  Methods for class Rectangle
// ********************************************************************

//Lab 7 exercise 4.2, 4.3. Add class Rectangle methods HERE: 



// ********************************************************************
//  main() function for testing classes Point and Rectangle
// ********************************************************************



// Testing classes Point and Rectangle
int main()
{
// Declaring a point using default class constructor (x = y = 0):
  Point p1;
  cout<< "The x value for p1 is " << p1.Get_X() << endl;
  cout<< "The y value for p1 is " << p1.Get_Y() << endl;

// Declaring a point with coordinates X = 2, Y = 3:
  Point p2(2, 3);
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

// Moving point p2 by (1, -1):
  p2.Move(1, -1);
  cout<< "After the move:" << endl;
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

//Lab 7 exercise 4.1. Test member function print on points p1, p2:
  cout<<"Point p1 is ";
  p1.print();
  cout<<endl;
  cout<<"Point p2 is ";
  p2.print();
  cout<<endl;

//Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:  
  Rectangle rect1;
	rect1.print();
	cout<<endl;
	cout<<"Area of the rectangle is "<<rect1.area()<<" square units\n";
  Rectangle rect2(p1,p2);
	rect2.print();
	cout<<endl;
	cout<<"Area of the rectangle is "<<rect2.area()<<" square units\n";

  return 0;
}

//---------------------- point.cpp ------------------------------------//


