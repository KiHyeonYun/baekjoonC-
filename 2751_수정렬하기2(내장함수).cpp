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
	//���� sorting �Լ��� quick sort �˰������� ������� O(nlogn)
	sort(arr.begin(),arr.end());
	
	for(int i=0; i<n; i++){
		cout<<arr.at(i)<<"\n";
	}
	return 0;
}