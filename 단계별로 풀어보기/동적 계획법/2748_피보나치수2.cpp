#include<iostream>

using namespace std;

void fibo(long long *a, int n);

int main(){
	int n;
	long long *a;
	cin>>n;
	a= new long long[n+1];
	
	a[0] = 0;
	a[1] = 1;

	fibo(a,n);
	cout<<a[n];
	delete[] a;
	return 0;
}
void fibo(long long *a,int n){
	for(int i=2; i<=n; i++){
		a[i] = a[i-1] + a[i-2];
	}
}