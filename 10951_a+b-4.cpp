#include<iostream>
#include<vector>

using namespace std;

int main(){
	int a, b;
	vector<int> num;
	vector<int>::iterator iterator;
	
	do{
		cin>>a>>b;
		if(a!=0 && b!=0)
		num.push_back(a+b);
	}while(a!=0 && b!=0);
	
	for(iterator=num.begin(); iterator!=num.end(); iterator++)
		cout<< *iterator<<endl;


	return 0;
}