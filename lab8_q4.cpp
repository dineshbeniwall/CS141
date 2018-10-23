//includong library
#include<iostream>
using namespace std;

/*Write a program to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. (Use functions for each)*/


void merg(int *billy1, int *billy2,int x, int y){
	int BILLY[x+y];
	cout <<"Merged array: [";
	for (int n=0;n<(x+y);n++){
		if (n<x){
			BILLY[n]=billy1[n];
			cout<<BILLY[n]<<", ";
		}
		else {
			BILLY[n]=billy2[n-x];
			cout <<BILLY[n];
			if (n<(x+y)) {
				cout <<", ";
			}
		}
	}
	cout <<"]"<<endl;
}

				//to find the max of the array elements

int maxf(int BILLY, int x, int y){
	int max=BILLY[0];
	for (int i=0;i<(x+y);i++){
		if (BILLY[i]>=max)
			max=BILLY[i];
	}
	return max;
}

				//to find the min of the array elements

int minf(int BILLY, int x, int y){
	int min=BILLY[0];
	for (int i=0;i<(x+y);i++){
		if (BILLY[i]<=min)
			min=BILLY[i];
	}
	return min;
}

                  		//main fn
int main(){
	int x,y,billy1[x],billy2[y],z;
	cout<<"size of first arry \n";
	cin>>x;
	cout<<"put the values in first arry \n";
	for (int i=0;i<x;i++){
		cin>>billy1[i];
	}
	
	cout<<"size of second arry \n";
	cin>>y;
	cout<<"put the values in second arry \n";
	for (int j=0;j<y;j++){
		cin>>billy2[j];
	}
/*int arr1[7]={1, 3, 4, 2, 5, 8, 6}, arr2[8]={10 , 11 , 12 , 13, 14 ,15 ,16, 17}, totarr[15];
	cout <<"Array 1: [1, 3, 4, 2, 5, 8, 6]"<<endl;
	cout <<"Array 2:[10 , 11 , 12 , 13, 14 ,15 ,16, 17]"<<endl;*/
	z=merg(billy1, billy2,x,y);
	cout <<"Maximum number of merged array: "<<maxf(z,x,y)<<endl;
	cout <<"Minimum number of merged array: "<<minf(z,x,y)<<endl;
return 0;
}
