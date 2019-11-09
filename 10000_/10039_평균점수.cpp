#include<iostream>
#include<string>
#define MAX 5
using namespace std;

class Student{
	string name;
	int score;
public:
	Student(){}
	Student(string name){this->name = name;}
	void setName(string name);
	void setScore(int score);
	int getScore();
};
void Student::setName(string name){
	this->name = name;
}
void Student::setScore(int score){
	this->score = score;
}
int Student::getScore(){
	return score;
}

int main()
{
	Student* student = new Student[MAX];
	int temp=0;
	student[0].setName("?ì„­");
	student[1].setName("?¸í¬");
	student[2].setName("?ê·¼");
	student[3].setName("??);
	student[4].setName("ê°•ìˆ˜");

	int score;
	for(int i=0; i<MAX; i++){
		cin>>score;
		if(score%5 == 0 && score<=100 && score>=0){
			if(score >=40)
				student[i].setScore(score);
			else
				student[i].setScore(40);
		}
		else
			return -1;
	}
	for(int i = 0; i<MAX; i++){
		temp += student[i].getScore();
	}
	cout<<temp/MAX<<endl;


	return 0;
}
