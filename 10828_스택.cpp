#include<iostream>
#include<vector>
#include<string>

#define SEMPTY -1
using namespace std;
vector<int> stack(int n);
int main(){
	int n;
	vector<int> result;
	vector<int>::iterator iter;
	cin>>n;
	result = stack(n);

	for(iter = result.begin(); iter !=result.end(); iter++){
		cout<<*iter<<'\n';
	}

	return 0;
}
vector<int> stack(int n){
	int num;
	vector<int> stack;
	vector<int> result;
	string comm;

		for(int i=0; i<n; i++){
		cin>>comm;
		//push
		if(!comm.compare("push")){
			cin>>num;
			stack.push_back(num);
		}
		//pop
		else if(!comm.compare("pop")){
			if(!stack.empty()){
				result.push_back(stack.back());
				stack.pop_back();
			}
			else
				result.push_back(SEMPTY);
		}
		//size
		else if(!comm.compare("size")){
			result.push_back(stack.size());
		}
		//empty
		else if(!comm.compare("empty")){
			result.push_back(stack.empty());
		}
		//top
		else if(!comm.compare("top")){
			if(!stack.empty()){
				result.push_back(stack.back());
			}
			else
				result.push_back(SEMPTY);
		}
	}
		return result;
}