#include<iostream>

using namespace std;

int main()
{
	//사실 의미없음 1 2 이런식으로 입력도 가능
	int a,b;
	cin>>a;
	cin>>b;

	if(a >0 && b<10)
		cout<<a+b;
	return 0;
}