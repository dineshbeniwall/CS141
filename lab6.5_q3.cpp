//including librery
//also include math librery
#include<iostream>
//#include<cmath>
using namespace std;

/*The integer 36 has a peculiar property: it is a perfect square, and is also the sum of the integers from 1 through 8. The next such number is 1225 which is 352, and the sum of the integers from 1 through 49. Find the next number (or numbers) that is a perfect square and also the sum of a series 1...n. This next number may be greater than 32767 (range of int, so use long). You may use library functions that you know of, (or mathematical formulas) to make your program run faster. (Note: depending on your machine and your program, it can take quite a while to find this number.)*/

int main(){
				//how we will going to do this is first sum all numbers by either for loop or by maths formula
				
				

		for(long i=0;i<=3000000;i++)
		{ long k;
			k=(i*(i+1))/2;

				//second for loop and check j*j or by pow function
			for(long j=0;j<=3000000;j++)
				{

				//than condition sum == j*j and break becoz no need to go too long once get perfect square
				//breack idia is not mine this is computer master type people's idia

					if(k==j*j)
					{cout<<k<<endl;

						break;

					}


				}





		}



return 5;


}
