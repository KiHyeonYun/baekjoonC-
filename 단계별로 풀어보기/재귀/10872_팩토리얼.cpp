#include<iostream>

using namespace std;

void factorial(int a, int &res);

int main(){
	int a;
	int res=1;

	cin>> a;
	if(0<=a && a<=12){
		factorial(a,res);
		cout<<res<<endl;
	}

	return 0;
}
void factorial(int a, int &res){

	if(a-- != 0){
		factorial(a, res);
		res*=a+1;
	}
	
}