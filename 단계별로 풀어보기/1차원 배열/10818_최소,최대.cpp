#include<iostream>
#include<algorithm>
#include<vector>

#define MAX 1000000
#define MIN -10000000

using namespace std;
int main(){
	
	int n,x;
	vector<int> vec;
	cin>>n;
	
	if(1<=n && n<=MAX){
		for(int i=0; i<n; i++){
			cin>>x;
			if(MIN<=x && x<=MAX)
				vec.push_back(x);
			else
				return -1;
		}		
		stable_sort(vec.begin(),vec.end());

		cout<<vec.at(0)<<' '<<vec.at(n-1)<<endl;

	}


	return 0;
}