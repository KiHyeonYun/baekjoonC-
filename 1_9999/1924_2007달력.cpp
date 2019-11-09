#include<iostream>

using namespace std;


class calendar{
	int month[13];

public:
	calendar();
	void dayCal(int inputMonth, int inputDay);
};
calendar::calendar(){
	month[0] =0;
	month[2] =28;
	month[4] =month[6]=month[9]=month[11] =30;
	month[1] =month[3]=month[5]=month[7]=month[8]=month[10]=month[12] = 31;
}
void calendar::dayCal(int inputMonth, int inputDay){
	int temp = 0,i;

	for(i=1; i<inputMonth; i++)
		temp +=month[i];				
	temp =(temp +inputDay)%7;
	
	switch(temp){
		case 0:
			cout<<"SUN\n";
			break;
		case 1:
			cout<<"MON\n";
			break;
		case 2:
			cout<<"TUE\n";
			break;
		case 3:
			cout<<"WED\n";
			break;
		case 4:
			cout<<"THU\n";
			break;
		case 5:
			cout<<"FRI\n";
			break;
		case 6:
			cout<<"SAT\n";
			break;
		
	}
}

int main(){

	int month, day;

	calendar cal;
	
	cin>>month >>day;
	if(1<=month && month<=12 && 1<=day && day<=31)
	cal.dayCal(month,day);


	return 0;
}