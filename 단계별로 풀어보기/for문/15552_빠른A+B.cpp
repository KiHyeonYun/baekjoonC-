#include<iostream>

using namespace std;

int main()
{
	int a,b,c,i;
	cin.tie(NULL); 
	cout.tie(NULL);
	ios_base :: sync_with_stdio(false);

	cin>>c;

	if(0<=c && c<=1000000){
		for(i = 0; i<c; i++){
		cin>>a>>b;
		if(1<=a && a<=1000 && 1<=b && b<=1000)
			cout<<a+b<<'\n';
			
		}
	}
	return 0;
}