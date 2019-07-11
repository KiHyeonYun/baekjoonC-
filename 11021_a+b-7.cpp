#include<iostream>
#include<vector>

using namespace std;

int main(){
	int t, a, b;
	vector<int> num;
	
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
		cin>>a>>b; 	
		if(0<a && b<10)
		num.push_back(a+b);
		else
			return -1;
	}
	for(int i=0; i<num.size(); i++)
		cout<<"Case #"<<i+1<<": "<<num.at(i)<<endl;


	return 0;
}