#include<iostream>
#include<vector>

using namespace std;

int main(){
	int a, b;
	vector<int> num;
	vector<int>::iterator iterator;
	
	while(scanf("%d %d",&a,&b) !=EOF){
		num.push_back(a+b);
	}	
	
	for(iterator=num.begin(); iterator!=num.end(); iterator++)
		cout<< *iterator<<endl;


	return 0;
}