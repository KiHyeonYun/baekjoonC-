#include<iostream>

using namespace std;

class grade{
	int score;
public:
	grade(int s);
	char divGrade();

};
grade::grade(int s){
	score = s;
}
char grade::divGrade(){
	char divGrade;
	if(9 <= score/10)
		divGrade ='A';

	else if(8 <= score/10)
		divGrade ='B';

	else if(7 <= score/10)
		divGrade ='C';
	
	else if(6 <= score/10)
		divGrade ='D';

	else
		divGrade ='F';

	return divGrade;
}
int main(){

	int a;
	cin>>a;
	grade g(a);
	cout<< g.divGrade()<<endl;
	
	return 0;
}