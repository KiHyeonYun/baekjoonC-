#include<iostream>
#define MAX 2100000000

using namespace std;

int main(){
	//a = 고정비용, b=가변비용, 판매가격=c

	long long int a,b,c,i=0;
	int BREAK_EVEN_POINT=-1;
	long long int resA, resB, resC;
	cin>>a>>b>>c;
	if(NULL<=a && a<=MAX && NULL<=b && b<=MAX && NULL<=c && c<=MAX){
		if(c<=b){
			cout<<BREAK_EVEN_POINT<<endl;
		}
		else{
			if(b != 0){
				cout<<a/(c-b)+1<<endl;
			}
			else{
				cout<<a/c+1<<endl;
			}
		}
	}
	return 0;
}