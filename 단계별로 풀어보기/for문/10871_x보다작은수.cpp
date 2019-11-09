#include<iostream>

using namespace std;
#define MAX 10000
int main()
{
	int n, a[MAX] = {0,}, x;
	
	cin>>n>>x;

	if(1<=n && n<=10000 && 1<=x && x<=10000){
		for(int i=0; i<n; i++)
			cin>>a[i];

		for(int i=0; i<n; i++){
			if(a[i]< x)
				cout<<a[i]<<' ';
		}
	}
	return 0;
}