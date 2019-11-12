#include<iostream>
#include<vector>
#include<algorithm>
#include <functional>
using namespace std;

int main(){
	
	int n,ntemp,i=0;
	vector<int> arr;
	vector<int>::iterator iter;
	
	cin>>n;
	do{
		i++;
		arr.push_back(n%10);
		n/=10;
	}
	while(n>=1);
		
	sort(arr.begin(), arr.end(),greater<int>());

	for(iter=arr.begin(); iter<arr.end(); iter++){
		cout<<*iter;
	}
	
	return 0;
}