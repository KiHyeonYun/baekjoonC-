#include<iostream>
#include<vector>
#include<string>

using namespace std;

string relationOfNumber(int a, int b);
int main(){
	int a,b;
	vector<string> res;
	vector<string>::iterator iter;

	while(true){
		cin>>a>>b;
		if(a && b){
			res.push_back(relationOfNumber(a,b));
		}
		else{
			for(iter = res.begin(); iter<res.end(); iter++){
				cout<<*iter<<'\n';
			}
			break;
		}
	}
	return 0;
}
string relationOfNumber(int a, int b){
	string res;

	if(a%b == 0){
		res = "multiple";
	}
	else if(b%a == 0){
		res = "factor";
	}
	else
		res = "neither";

	return res;
}