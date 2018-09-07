#include <iostream>
using namespace std;
		/*          *
			   ***
			  *****
			 *******
			*********

		*/


int main(){				//input
	int n;
	cout << "write number of row of a pyramid: \n";
	cin>>n;
					//print some star and some spaces
					//my numbers of rows is N and nth row is i
	for (int i=1; i<=n;i++){
                                        //for diffrent lines there is diffrent stars and spaces
					//thinking way
					////for first row n-1 space 1 star and n-1 space
					//for second row n-2 space 3 star and n-2 space
					//for thied row n-3 space 5 star and n-3 space
					//for fifth row n-5 space 10 star and n-5 space 
					//my working formula
					//for ith row n-i space  and (2i -1)star and n-i space
					//for ith row 
					//n-i space 
		for (int j=1;j<=(n-i);j++){
			cout<<" ";
		}
					//(2i -1)star
		
		for (int z=1; z<=(2*i-1);z++ ){
			cout<<"*";
		}

					//n-i space
		for (int k=1; k<=(n-i);k++){
			cout<<" ";
		}
						//may be this time do not go to next line or may be yp!
	cout << endl;			
					
	}
	
	
return 0;
}					
