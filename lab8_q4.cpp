//includong library
#include<iostream>
using namespace std;

//to merge 2 arrays

void merg(int arr1[], int arr2[], int totarr[]){
	cout <<"Merged array: [";
	for (int n=0;n<15;n++){
		if (n<7){
			totarr[n]=arr1[n];
			cout<<totarr[n]<<", ";
		}
		else {
			totarr[n]=arr2[n-7];
			cout <<totarr[n];
			if (n<14) {
				cout <<", ";
			}
		}
	}
	cout <<"]"<<endl;
}

//to find the max of the array elements

int maxf(int arr[]){
	int max=arr[0];
	for (int i=0;i<15;i++){
		if (arr[i]>=max)
			max=arr[i];
	}
	return max;
}

//to find the min of the array elements

int minf(int arr[]){
	int min=arr[0];
	for (int i=0;i<15;i++){
		if (arr[i]<=min)
			min=arr[i];
	}
	return min;
}

                  //main fn
int main(){
int arr1[7]={1, 3, 4, 2, 5, 8, 6}, arr2[8]={10 , 11 , 12 , 13, 14 ,15 ,16, 17}, totarr[15];
	cout <<"Array 1: [1, 3, 4, 2, 5, 8, 6]"<<endl;
	cout <<"Array 2:[10 , 11 , 12 , 13, 14 ,15 ,16, 17]"<<endl;
	merg(arr1, arr2, totarr);
	cout <<"Maximum number of merged array: "<<maxf(totarr)<<endl;
	cout <<"Minimum number of merged array: "<<minf(totarr)<<endl;
	return 1;
}
