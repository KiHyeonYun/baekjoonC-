#include<iostream>
#include<vector>

using namespace std;

int main(){
	int t, a, b;
	vector<int> num;
	vector<int>::iterator iterator;
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
		cin>>a>>b; 	
		if(0<a && b<10)
		num.push_back(a+b);
		else
			return -1;
	}
	for(iterator=num.begin(); iterator!=num.end(); iterator++)
		cout<< *iterator<<endl;


	return 0;
}