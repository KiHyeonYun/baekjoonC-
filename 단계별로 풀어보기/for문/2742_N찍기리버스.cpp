#include<iostream>

using namespace std;


int main(){

	int n,i,temp;
	cin>>n;
	temp = n;
	if(n<=100000){
		for(i = 1; i<=n; i++)
			printf("%d\n",temp--);
			//cout<<i<<'\n';
	}
	return 0;
}