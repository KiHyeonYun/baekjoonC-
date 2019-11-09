#include<iostream>

using namespace std;


int main(){

	int n,i;
	cin>>n;

	if(n<=100000){
		for(i = 1; i<=n; i++)
			printf("%d\n",i);
			//cout<<i<<'\n';
	}
	return 0;
}