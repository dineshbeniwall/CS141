//including librery
#include<iostream>
using namespace std;

			//first when you stuck in recrusion than make a while loop and convert into recrusion//
			//second write all recrusion steps and than make programme;;
			//if you smart than do directly;;


/*     
			C++ program to find factorial of any number using recursion.
/*while(){
	fac=fac*n;
	n=n-1;
}
*/
			//now simply convert this while loop into recrusion

int fac(int n){
	int x;
	if(n==1){return 1;}
	else{x=fac(n-1)*n;}
return x;
}

int main(){
	int n;
	cout<<"write a number which factorial you want \n";
	cin>>n;
	cout<<fac(n)<<endl;
return 0;
}
