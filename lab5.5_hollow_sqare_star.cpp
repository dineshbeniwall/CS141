#include <iostream>
using namespace std;
			/* *****
			   *   *
			   *   *
			   *   *
			   *****
			*/
int main(){
	int n;
	cout << "write numbers of rows: \n";
	cin>>n;
	for (int i=0; i<n;i++){
					//print n stars in first row and last row
					//otherwise print some stars and space
					//seems like if else
		if (i == 0 || i == n-1){ 
			for (int j=0; j<n;j++){
			cout<<"*";
			}
		}
		else {
					//print 2 stars 
			cout << "*";
					//n-2 spaces
			for (int k=0; k<n-2;k++){

				cout << " ";
			}
			cout << "*";
			
		}		
					//go to next line
		cout <<endl;
	}
return 0;
}









