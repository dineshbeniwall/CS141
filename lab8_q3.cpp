#include<iostream>
using namespace std;

/*Write a program for kth largest, kth smallest element of an array. (Use functions : e.g. klarge (int array[], int size, int k), similarly for smallest)*/
					//we go through this way....arrenge in incresing order.......than nth element is 1st largest number.....than n-kth element is n-(n-k)th kth element 
					//visaversa for smallest			





int klargest(int *billy,int size,int k){
											//arrenge them in incresing order
	for (int i = 0; i < size; i++) {
		for (int j =i+1; j < size; j++) {
			int lan;
			if (billy[i] > billy[j]) {
				lan = billy[i];
				billy[i] = billy[j];
				billy[j] = lan;
			}
		}
	}
	for (int i = 0; i < size; i++) {
	cout<< billy[i]<<",";
	}
	cout<<endl;

	int arr[size],j=1;
	arr[0]=billy[0];
        for(int i=0;i<size-1;i++)
	if(billy[i]!=billy[i+1])
	arr[j++]=billy[i+1];
										//now n-kth term is kth largest term
return arr[(j-k)];
}
int ksmallest(int *billy,int size,int k){
											//arrenge them in incresing order
	for (int i = 0; i < size; i++) {
		for (int j =i+1; j < size; j++) {
			int lan;
			if (billy[i] > billy[j]) {
				lan = billy[i];
				billy[i] = billy[j];
				billy[j] = lan;
			}
		}
	}
	int arr[size],j=1;
	arr[0]=billy[0];
        for(int i=0;i<size-1;i++)
	if(billy[i]!=billy[i+1])
	arr[j++]=billy[i+1];
		
	for (int i = 0; i < size; i++) {
	cout<< billy[i]<<",";
	}
	cout<<endl;
										//now n-kth term is kth largest term
return arr[(k-1)];
}
int main(){
	int size,billy[50],k;
	cout<<"How many elements you want to enter \n";
	cin>>size;
	cout<<"enter the numbers \n";
	for(int i=0;i<size;i++){
	cin>>billy[i];
	}
	cout<<"write which largest number you want\n";
	cin>>k;
	cout<<"kth largest number is: \n"<<klargest(billy,size,k)<<endl;
	cout<<"write which smallest number you want\n";
	cin>>k;
	cout<<"kth smallest number is: \n"<<ksmallest(billy,size,k)<<endl;
return 0;
}
