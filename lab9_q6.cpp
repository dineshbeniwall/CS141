#include <iostream>
using namespace std;

/* Write a function countEven(int*, int) which receives an integer array and its size, and returns the number of even numbers in the array.   */
				//simple using function just took array and count even numbers
int countEven(int *p, int size){
	int count=0;
	for(int i=0;i<size;i++){
		if(*(p+i)%2==0){
		count++;
		}
	}
return count;
}

int main(){
				//now make an array
	int size;
	cout<<"Enter size of the array \n";
	cin>>size;
	int arr[size];
	cout<<"Enter values in array \n";
	for(int i=0;i<size;i++){
	cin>>arr[i];
	}
	int* p=&arr[0];
				//now call function
	cout<<"No. of even numbers:"<<countEven(p,size)<<endl;
return 0;
}
