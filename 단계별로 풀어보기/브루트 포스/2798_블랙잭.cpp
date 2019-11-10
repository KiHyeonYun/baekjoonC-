#include<iostream>
using namespace std;
int combination(int n);
int main(){
	int n, m;
	int result=0,temp;
	int* card;
	int select[3];
	
	cin>>n>>m;
	
	card = new int[n];

	for(int i=0; i<n; i++){
		cin>>card[i];
	}
	for(int i=0; i<n; i++){
		select[0] = card[i];
		for(int j=i+1; j<n; j++){
			select[1] = card[j];
			for(int k=j+1; k<n; k++){
				select[2] = card[k];
				temp = select[0] + select[1] +select[2];
				if(temp<=m && result<temp){
					result = temp;
				}
			}
		}
	}
	cout<<result<<'\n';
	return 0;
}
int combination(int n){
	int k = 3;
	int comb=1;
	
	//조합할 수 있는 개수를 구함
	for(int i=0; i<n-(n-k); i++){
		comb*=(n-i);
	} 
	return comb/6;
}