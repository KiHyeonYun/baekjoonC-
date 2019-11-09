#include<iostream>

using namespace std;

int main(){
	
	int year;
	cin>>year;
	if(year <=4000){
		
		if(year%400==0)
			cout<<true<<endl;
		else if(year%4==0 && year%100!=0)
			cout<<true<<endl;
		else
			cout<<false<<endl;
	}

	return 0;
}