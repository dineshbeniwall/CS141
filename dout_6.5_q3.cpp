//including librery
//also include math librery
#include<iostream>
#include<cmath>
using namespace std;

/*The integer 36 has a peculiar property: it is a perfect square, and is also the sum of the integers from 1 through 8. The next such number is 1225 which is 352, and the sum of the integers from 1 through 49. Find the next number (or numbers) that is a perfect square and also the sum of a series 1...n. This next number may be greater than 32767 (range of int, so use long). You may use library functions that you know of, (or mathematical formulas) to make your program run faster. (Note: depending on your machine and your program, it can take quite a while to find this number.)*/

int main(){
	float sum,y,z;
	for(float x=1;x<=36;x++)
	{
		z=pow(x,0.5);
		//y=(z*10)%10.0;
		if(y==0)
		{					
		 	for(float i=0;i<9;i++)
			{
		
			sum = sum + i;	
			}
			//cout << sum << endl;
			if(x==sum)
			{
					cout<<x<<endl;			
			}
				     
			
			
		}
	
	}	                                                     
	                     
return 0;	

} 
