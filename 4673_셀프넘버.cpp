#include<iostream>
#define MAX 10000
using namespace std;

void d(int n, int* arr);

int main()
{
	int i=0,n=0;
	int arr[MAX]={0,};
	
	while(n<MAX){
	d(n,arr);
	n++;
	}

	while(i<MAX){
		if(arr[i]==0)
		cout<<i<<endl;
		
		i++;
	}
	return 0;
}
void d(int n, int* arr){
	if(n<=MAX){
		n = n + n/1000 +(n%1000)/100 + (n%100)/10 + n%10;
		if(n<MAX)
		arr[n]++;
	}

	
}