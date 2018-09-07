#include <iostream>
using namespace std;
		/*          *
			   * *
			  *   *
			 *     *
			*********

		*/


int main(){				//input
	int n;
	cout << "write number of row of a hollow pyramid: \n";
	cin>>n;
					//print some star and some spaces
					//my numbers of rows is N and nth row is i
					
	
	for (int i=1; i<=n;i++){
   							//first row is diffrent form others....leave it
			//for first row...n-1 space star n-1 space
		if (i==1){
			for (int y=1; y<n;y++){
				cout<< " ";
			}
			cout <<"*";
			for (int y=1; y<n;y++){
				cout<< " ";
			}
		}
	                                    
							//first row n-1 space, 1 star, 0 space, n-4 space
					
							//my number of rows is and nth row is i but for middle stars
							//second row n-2 space, star, 1 space, star, n-2 space
							//third row n-3 space, star,  3 space, star, n-3 space
							//forth row n-4 space, star, 5 space, star, n-4 space
							//fifth row n-5 space, star, 7 space, star, n-5 space
							//mid spaces increas by 2
			//for i th row 

					 
		if (n>i && i>1){
						//n-i space,
			for (int j=1;j<=(n-i);j++){
				cout<<" ";
			}
						//star,
			cout<<"*"; 
						//a+(n-1)d====1+(j-1)*2 {j=i-1} space
			
			for (int z=1; z<=(1+(i-2)*2); z++){
				cout <<" ";
			}
						//star
			cout<<"*";
						//n-i space,
			for (int k=1; k<=(n-i);k++){
				cout<<" ";
			}
		}
			//for nth row
		if (i==n){
			for (int w=1;w<=(2*n-1);w++){
				cout<<"*";
			}
		}

				//may be this time do not go to next line or may be yp!
		cout << endl;
	}
return 0;
}			



