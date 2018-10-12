//including librery
#include<iostream>
using namespace std;

			//first when you stuck in recrusion than make a while loop and convert into recrusion//
			//second write all recrusion steps and than make programme;;
			//if you smart than do directly;;


/*      C++ program to check whether a number is palindrome or not using recursion.
*/
			//simply revers a number [if] this equal to same than we done [else].
/*int n;
while(n=0)
{z=n%10;
cout<<z;//no endl
n=n/10;
}
*/
			//now simply convert this while loop into recrusion
int reverse(int n, int x){
			//when facing difficulties in write programme use notebook and pen
	
	int z;	
	if(0<=n and n<10){return (x=x*10+n);}
	
	else{
		z=n%10;	
		x=x*10+z;
		return reverse(n/10,x);
		
	}
}
int main(){
	int n;
	cout<<"enter a number which you want to check it is palindrome or not \n";
	cin>>n;
	cout<<reverse(n,0)<<endl;
	if (reverse(n,0)== n){
		cout<<"provided number is a palindrome number\n";	
	}
	else { cout<<"provided number is not palindrome number \n";
	}
return 0;
}
