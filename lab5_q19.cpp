//include librery


				//finally i got it.....cin>>a;
				//		       cin>>b;
				//can be written as cin >>a>>b;
#include <iostream>
using namespace std;




int main(){

				//now we give greds to overself 
				//subjects- phy, chy, math, bio, computer
				//tell me marks than i convert into persantege and by persentege i will decide grede
				//step 1 tell me marks
	float physics, chemistry, biology, math, computer, percentage, total;
	cout << " all the marks are out of hundred.\n";
		
	cout << " tell me the marks in physics: \n";
	cin >> physics;
	cout << " tell me the marks in chemistry: \n";
	cin >> chemistry;
	cout << " tell me the marks in math: \n";
	cin >> math;
	cout << " tell me the marks in biology: \n";
	cin >> biology;
	cout << " tell me the marks in computer: \n";
	cin >> computer;	
	
	
				//make sure that marks not fill more than 100
	if (physics > 101 or chemistry > 101 or math > 101 or biology > 101 or computer > 101){
		cout << "somthing went wrong marks must be within zero to hundred.\n";

	
}				//step 2 convert into persentege		
				//marks already in persantege
				//so finally total persantege
		total = (physics +chemistry + math + biology + computer);
		percentage = ((total)/500)*100;
		cout << "your persentage marks is : "<<percentage<<"%"<<endl;
				//step 3 deside grede
				//step 4 show gredes
		if (percentage >=90){
			cout << "Congratulations! you obtain A grade.\n";
}				
		else if (percentage >=80){
			cout << "Congratulations! you obtain B grade.\n";
}
		else if (percentage >=70){
			cout << "You obtain C grade.\n";
}
		else if (percentage >=60){
			cout << "You obtain D grade.\n";
}
		else if (percentage >=40){
			cout << "You obtain E grade.\n";
}
		else {
			cout << "May be you do some hard work you obtain F grade.\n";
}

return 0;
}	





		
				

