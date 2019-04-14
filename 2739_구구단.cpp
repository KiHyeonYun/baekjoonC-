#include<iostream>

using namespace std;

class multiplicationTable{

	int inputNum;
public:
	multiplicationTable(int input);
	void operation();
};
multiplicationTable::multiplicationTable(int input){
	inputNum = input;
}
void multiplicationTable::operation(){
	int i;
	if(inputNum>=1 && inputNum<=9)
	for(i = 1; i<=9;  i++)
		cout << inputNum<<" * "<<i<<" = "<<inputNum * i<<'\n';
}

int main(){
	int input=0;
	cin>>input;
	multiplicationTable mt(input);
	mt.operation();

	return 0;
}