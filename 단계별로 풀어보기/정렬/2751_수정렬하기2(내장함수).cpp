#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	vector<int> arr;
	int n,num;
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>num;
		arr.push_back(num);
	}
	//내장 sorting 함수는 quick sort 알고리즘으로 만들어짐 O(nlogn)
	sort(arr.begin(),arr.end());
	
	for(int i=0; i<n; i++){
		cout<<arr.at(i)<<"\n";
	}
	return 0;
}