#include <iostream>
using namespace std;

/* Write a function that returns a pointer to the maximum value of an array of double's.  If the array is empty, return NULL. */

double* maximum(double* x, int size){
	if(size!=0){
		int y;
					//sort array in *descending* order for this run two loops
		for(int i=0;i<size;i++){
			for(int j=i+1;j<size;j++){
					//using condition to show maximum.
			if(*(x+i)<*(x+j)){
				y=*(x+i);
				*(x+i)=*(x+j);
				*(x+j)=y;
			}
			}
		}
	return x;
	}
	else{
		return NULL;
	}
}

int main(){
	int size;
	cout<<"Enter size of the array"<<endl;
	cin>>size;
	
					//using conditionals
					//I CAN put values of array directly outside of if but in that condation for else there is value for p is abcent to insialize and I DO NOT KNOW HOW DO MAKE FUNCTION IN OTHER WAY
	if(size!=0){
		double billy[size];
		cout<<"Enter input to array \n";
		for(int i=0;i<size;i++){
			cin>>billy[i];
		}
		double* p=&billy[0];
		cout<<"Maximum value of array is: "<<*maximum(p,size)<<endl;
	}
	else{
	cout<<"Maximum value of array is: "<<NULL<<endl;
	}
return 0;
}
