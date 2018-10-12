//including librery
#include<iostream>
using namespace std;

			//first when you stuck in recrusion than make a while loop and convert into recrusion//
			//second write all recrusion steps and than make programme;;
			//if you smart than do directly;;


/*     
			C++ program to find power of any number using recursion.
/*
while(i=n){
	z=x*x;
	i++;
}
*/
			//now simply convert this while loop into recrusion
int pow(int n, int x){
	int z;
	if(n==1){return x;}
	z=pow(n-1,x)*x;
	return z;
}

int main(){
	int n,x;
	cout<<" first write any number than it's power \n";
	cin>>x>>n;
	cout<<pow(n,x)<<endl;
return 0;
}
