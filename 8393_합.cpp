#include<iostream>

using namespace std;

int main()
{
	int num;

	cin>> num;

	if(1<=num && num<=10000){
		num=num*(num+1)/2;
		cout<<num<<endl;
	}
	return 0;
}