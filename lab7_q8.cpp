//including librery
#include<iostream>
using namespace std;

			//first when you stuck in recrusion than make a while loop and convert into recrusion//
			//second write all recrusion steps and than make programme;;
			//if you smart than do directly;;


/*     
			C++ program to find sum of digits of a given number using recursion.
/*while(){
	z=n%10;
	sum =sum + z;
	n=n/10;
}
*/
			//now simply convert this while loop into recrusion

int sumdigit(int n){
	int z,sum=0;
	if(0<=n and n<10){return n;}
	else {
		z=n%10;				// the real meaning of recurtion
		sum=sumdigit(n/10)+z;
	}
return sum;
}

int main(){
	int  n;
	cout<<"write a number which sum of digit you want-\n";
	cin>>n;
	cout<<sumdigit(n)<<endl;
return 0;
}
