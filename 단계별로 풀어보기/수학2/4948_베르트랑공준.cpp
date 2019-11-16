#include<iostream>
#include<vector>
#include<math.h>

using namespace std;
bool primeNumber(double n);
int main(){
	int n=-1;
	int count=0;
	vector<int> res;
	vector<int>::iterator iter;

	while(true){
		cin>>n;
		if(!n)
			break;

		for(int i=n+1; i<=n*2; i++){
			if(i!=1){
				if(primeNumber((double)i))
					count++;
			}
		}
		res.push_back(count);
		count=0;
	}
	for(iter=res.begin(); iter<res.end(); iter++){
		cout<<*iter<<'\n';
	}

	return 0;
}
bool primeNumber(double n){
	double ntemp;
	ntemp = sqrt(n);
	for(int i=2; i<=ntemp; i++){
		if(!((int)n%i)){
			return false;
		}
	}

	return true;
}