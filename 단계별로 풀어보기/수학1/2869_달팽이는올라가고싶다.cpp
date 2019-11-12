#include<iostream>

using namespace std;

int main(){

	int a, b, v;
	int temp1, temp2;
	int day;
	cin>>a>>b>>v;
	
	temp1 = v-a;
	temp2 = a-b;
	if(!(temp1%temp2))
		day = temp1/temp2+1; 
	else
		day = temp1/temp2+2;
	
	cout<<day<<endl;
	return 0;
}