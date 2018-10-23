#include<iostream>
using namespace std;

/*Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)
*/
			//do all stuff for a single arr so i think define a globle arr
//int billy[] = {5,7,3,2,6,9,4,22,15};
			//first largest function
int largest(int *billy,int n){
			// Storing first array element in "largest" variable
	int max = billy[0];
			 /*We are comparing largest variable with every element
        			of array. If there is an element which is greater than
       				largest variable value then we are copying that variable
       				to largest, this way we have the largest element copied
        			to the variable named "largest" at the end of the loop */
       
       
	for(int i=1; i<n; i++){
		if(max<billy[i]){max = billy[i];}
	}
return max;	
}
			//now smallest
int smallest(int *billy,int n){
	int min = billy[0];
	for(int i=1; i<n; i++){
		if(min>billy[i]){min = billy[i];}
	}
return min;
}
			//now mean = 1+2+3+.....+n/n
float mean(int *billy,int n){
	float mean, sum;
	for(int i=0;i<n;i++){sum = sum+billy[i];}
	return mean = sum/n;
}
			//now median for odd {(n+1)/2} for even two numbers [{n/2+(n/2+1)}/2] so define odd and even also arrenge them in incresing order
float median(int *billy,int n){
	for (int i = 0; i < n; i++) {
		for (int j =i+1; j < n; j++) {
			int lan;
			if (billy[i] > billy[j]) {
			/*billy[i]=lan;
			  billy[i] = billy[j];
			  billy[j] = lan;..........why it's not running*/
				lan = billy[i];
				billy[i] = billy[j];
				billy[j] = lan;
			}
		}
	}
	for (int i = 0; i < n; i++) {
	cout<< billy[i]<<",";
	}
	cout<<endl;
	if (n%2==0){int c = {(billy[n/2]+billy[n/2+1])};
		float s=c/2;
		return s;}
	else{int d = billy[n/2];
		return d;}
}
int ewhf(int *billy,int n){
	int x=0,count=1,max=0,maxcount,mostf=billy[0];
	for (int i=0;i<n;i++){
		maxcount=0;
		x=billy[i];
		maxcount++;  
		for(int j=i+1;j<n;j++){		
		    if(billy[j] == x){		    
		        maxcount++;
		        if(maxcount > count){
		            mostf = x;
		            count = maxcount;
		        }
		    }
		}
         }
return mostf;	
}

			
int main(){
	int n,billy[50];
	cout<<"How many elements you want to enter \n";
	cin>>n;
	cout<<"enter the numbers \n";
	for(int i=0;i<n;i++){
	cin>>billy[i];
}
	cout<<"largest number is: "<<largest(billy,n)<<endl;
	cout<<"smallest number is: "<<smallest(billy,n)<<endl;
	cout<<"mean of numbers is: "<<mean(billy,n)<<endl;
	cout<<"median of numbers is: "<<median(billy,n)<<endl;
	cout<<"element with highest frequency is: "<<ewhf(billy,n)<<endl;
return 0;
}
