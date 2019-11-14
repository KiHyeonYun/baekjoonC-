#include<iostream>

using namespace std;
bool primeNumber(int m);
int main(){

	int m,n;
	bool first = true;
	int pfirst=0, result=0;
	cin>>m>>n;


	if(m<=n){
		
		if(m==1) 
			m++;

		if(n==1){
			cout<<"-1";
			return 0;
		}

		for(int i=m; i<=n; i++){
				
			if(primeNumber(i)){
				if(first){
					pfirst = i;
					result+=i;
					first = false;
				}
				else
					result+=i;
			}
		}
	}
	if(first){
		cout<<"-1";
	}
	else
		cout<<result<<'\n'<<pfirst;

	return 0;
}
bool primeNumber(int m){
	
	for(int i=2; i<m; i++){
		if(!(m%i)){
			return false;
		}
	}
	return true;
}