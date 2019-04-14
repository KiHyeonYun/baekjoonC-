#include<iostream>

using namespace std;
int main()
{
	int a,b;

	cout.precision(9);
	cout << fixed;


	cin>>a>>b;
	
	if(a>0 && b<10)
		cout << (double)a/b<<endl;
		

	return 0;
}