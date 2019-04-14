#include<iostream>

using namespace std;

class star{
	char s;
	int starNum;

public:
	star(int num);
	void printStar();
};
star::star(int num){
	s = '*'; 
	starNum = num;
}
void star:: printStar(){
	int i,j;
	if(1<=starNum && starNum<=100)
	for(i = 0; i<starNum; i++){
		for(j = starNum; 0<j; j--){
			if(starNum-j>=i)
				cout<<s;
			else
				cout<<' ';
				
		}
		cout<<'\n';
	}
}
int main(){
	int input;
	cin>>input;

	star s(input);
	s.printStar();

	return 0;
}