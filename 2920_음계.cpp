#include<iostream>
#include<cstring>
using namespace std;

class Cmajor{
	char ascending[9];
	char descending[9];

public:
	Cmajor();
	void compare(char *input);
};
Cmajor::Cmajor(){
		strcpy(ascending,"12345678");
		strcpy(descending,"87654321");
	
}
void Cmajor::compare(char* input){
		if(strcmp(ascending,input)==0){
			cout<<"ascending\n";
		}
		else if(strcmp(descending,input)==0)
			cout<<"descending\n";
		else
			cout<<"mixed\n";
	}

int main(){

	Cmajor cmajor;
	char input[9]={};
	cin>>input[0]>>input[1]>>input[2]>>input[3]>>input[4]>>input[5]>>input[6]>>input[7];
	cmajor.compare(input);
		


	return 0;
}