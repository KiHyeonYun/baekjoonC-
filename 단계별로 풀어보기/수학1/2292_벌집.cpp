#include<iostream>

using namespace std;

int main(){

	int n,cnt=1,tmp=1;
	
	cin>> n;

	if(1<=n && n<=1000000000){
		if(n == 1){
			cout<<cnt<<endl;
			return 0;
		}
		while(true){
			tmp = 3*cnt*(cnt+1)+1; //3*n^2 + 3n + 1
			//cout<<tmp<<endl;
			if(n <= tmp){
				cnt++;
				break;
			}
			else{
				cnt++;
			}
		}	
		cout<<cnt<<endl;
	}

	return 0;
}