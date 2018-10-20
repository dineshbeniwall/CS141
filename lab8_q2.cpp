#include<iostream>
using namespace std;

/*Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)
*/
			//do all stuff for a single arr so i think define a globle arr
int billy[] = {5,7,3,2,6,9,4,22,15};
			//first largest function
int largest(){
			// Storing first array element in "largest" variable
	int max = billy[0];
			 /*We are comparing largest variable with every element
        			of array. If there is an element which is greater than
       				largest variable value then we are copying that variable
       				to largest, this way we have the largest element copied
        			to the variable named "largest" at the end of the loop */
       
       
	for(int i=1; i<9; i++){
		if(max<billy[i]){max = billy[i];}
	}
return max;	
}
			//now smallest
int smallest(){
	int min = billy[0];
	for(int i=1; i<9; i++){
		if(min>billy[i]){min = billy[i];}
	}
return min;
}
			//now mean = 1+2+3+.....+n/n
float mean(){
	float mean, sum;
	for(int i=0;i<9;i++){sum = sum+billy[i];}
	return mean = sum/9;
}
			//now median for odd {(n+1)/2} for even two numbers [{n/2+(n/2+1)}/2] so define odd and even also arrenge them in incresing order
float median(int z){
	for (int i = 0; i < z; i++) {
		for (int j =i+1; j < z; j++) {
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
	for (int i = 0; i < z; i++) {
	cout<< billy[i]<<",";
	}
	cout<<endl;
	if (z%2==0){int c = {(billy[z/2]+billy[z/2+1])};
		float s=c/2;
		return s;}
	else{int d = billy[z/2];
		return d;}
}
int ewhf(){
	int x,count=0,max=0,mostf=billy[0];
	for (int i=0;i<9;i++){
		billy[i]=x;  
		for(int j=i+1;j<9;j++){		
		    if(billy[j] == x){		    
		        count++;
		        if(count > max){
		            mostf = x;
		            max = count;
		        }
		    }
		}
         }
return mostf;	
}

			
int main(){
	cout<<"largest number is: "<<largest()<<endl;
	cout<<"smallest number is: "<<smallest()<<endl;
	cout<<"mean of numbers is: "<<mean()<<endl;
	cout<<"median of numbers is: "<<median(9)<<endl;
	cout<<"element with highest frequency is: "<<ewhf()<<endl;
return 0;
}
