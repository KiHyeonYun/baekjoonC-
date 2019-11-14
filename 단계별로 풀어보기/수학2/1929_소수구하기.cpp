#include<iostream>
#include<math.h>
using namespace std;
bool primeNumber(double a);
int main(){

	int m,n;
	cin>>m>>n;
	if(m==1)
		m++;
	if(n==1)
		return 0;

	for(int i=m; i<=n;i++){
		if(primeNumber((double)i)){
			cout<<i<<'\n';
		}
	}

	return 0;
}
bool primeNumber(double a){
	int atemp;
	
	atemp = sqrt(a);
	for(int i=2; i<=atemp; i++){
		if(!((int)a%i)){
			return false;
		}
	}
	return true;
}