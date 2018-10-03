//including librery
#include<iostream>
using namespace std;

/* (Loops): Apples cost Re1 each, mangoes cost Rs3 each, and 1 banana is only Rs0.50. You bought 100 fruits for Rs100, How many of each fruit did you buy?
*/


				//lx apple = 1; my mango = 3; nz banana = 0.5
int main(){

	float z=0.50;
	int y=3,x=1,l,m,n,i;

	for(l=0;l<=100;l++){	//we know n = 2i,m= if condition, l = i
				//above condition does not work, you know reasons
				//now we try for(l) inside for(M) inside for(N) inside if . in this case n goes 1 to 100 
				//than m goes 1 to 100 and so on
				//than if l+m+n and total rupees 100 print , so loop start and took both conditions
		for(m=0;m<=100;m++){
			for(n=0;n<=100;n++){
				//in this case we want that it check l+m+n is 100 or not so == otherwise = 
				if (l+m+n==100 and l*x+m*y+n*z==100){
				cout<<"your apples are "<<l<<", "<<"mangoes are "<<m<<" and "<<"bananas are "<<n<<", \n";
				cout<<"OR \n";
				}
			}
		}
	}
		
return 0;
}
