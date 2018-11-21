#include <iostream>
using namespace std;

/*The ZooAnimal class definition below is missing a prototype for
the Create function.  It should have parameters so that a character
string and three integer values (in that order) can be provided when
it is called for a ZooAnimal object.*/
class ZooAnimal{
	private:
        char *name;
        int cageNumber;
        int weightDate;
        int weight;
        public:
		//create a missing function which also bring privater to public 
		//there is another way to define private to public Get_x();
	void specification(char* nname,int num,int date,int wt);
			
        void Destroy();
        char* reptName();
		//now this function return day from last day of weight measure
        int daysSinceLastWeighed(int today);
};
		//now define all the functions outside the class
void ZooAnimal::specification(char* nname,int num,int date,int wt){
	name=nname;
	cageNumber=num;
	weightDate=date;
	weight=wt;
}
		//destroy function		
void ZooAnimal::Destroy(){
	delete []name;
}
		//member function to return the animal's name
char* ZooAnimal::reptName(){
	return name;
}
		//now this function return day from last day of weight measure
int ZooAnimal::daysSinceLastWeighed(int today){
	int startday,thisday=0;
	thisday=today/100*30+(today-(today/100)*100);
	startday=weightDate/100*30+(weightDate-(weightDate/100)*100);
	if(thisday<startday){ 
		thisday+=360;
	}
	return(thisday-startday);
}
		//all this given into questions
int main(){
		//we create a new class for new animal bozo, so it have all things we need
	ZooAnimal bozo;
		//fill the details of bozo
        bozo.specification("Bozo",408,1027,400);
	cout<<"This animal's name is "<<bozo.reptName()<<endl;
        bozo.Destroy();
return 0;
}
