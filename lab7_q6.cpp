//including librery
#include<iostream>
using namespace std;

			//first when you stuck in recrusion than make a while loop and convert into recrusion//
			//second write all recrusion steps and than make programme;;
			//if you smart than do directly;;


/*     Write a C++ program to find reverse of any number using recursion.
*/
/*int n;
while(n=0)
{z=n%10;
cout<<z;//no endl
n=n/10;
}
*/
			//now simply convert this while loop into recrusion
int reverse(int n){
			//when facing difficulties in write programme use notebook and pen
	int z=n%10;	
	if(0<=n and n<10){
		cout<<n<<endl;
		return 1;
	}
	else {	
		cout<<z;
		n=n/10;
		reverse(n);
	}
return 0;
}
int main(){
	int n;
	cout<<"enter a number which reverse you want \n";
	cin>>n;
	reverse(n);
return 0;
}
