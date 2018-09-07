#include <iostream>
using namespace std;

		/*      +
			+
			+
			+
		    +++++++++
			+
			+
			+
			+	
		*/


int main(){				//input
	int n;
	cout<<"write any number i will convert into + sign: \n";
	cin>>n;
	for (int i=0; i<(2*n-1); i++){
					//for blow condition i feel like if else
					//for n th row
		if (i == n-1){		//2n plus
			for (int j=0; j< 2*n; j++){
			cout <<"+";
			}
		}
		else {			//n-1 space
			for (int k=0; k<n-1; k++){
				cout <<" ";
			}
					//one plus
			cout <<"+";
					//n-1 space
			 for (int x=0; x<n-1; x++){
				cout <<" ";
			} 
					
					//again n-1 space , one plus , n-1 space
					//for n-1 times
			
		
		}		//for n-1 times same as
				//go to next line
		cout <<endl;
	}
return 0;
}
