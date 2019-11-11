#include<iostream>
#include<string>
#include<vector>
using namespace std;
void swap(int& a, int& b);
int main(){
	int a,b,c;
	vector<string> res;
	vector<string>::iterator iter;

	while(true){
		cin>>a>>b>>c;
		if(a>b) swap(a,b);
		if(a>c) swap(a,c);
		if(b>c) swap(b,c);

		if(a!=0 && b!=0&& c!=0)
			a*a+b*b == c*c? res.push_back("right") : res.push_back("wrong");
		else
			break;
	}
	
	for(iter = res.begin(); iter<res.end(); iter++){
		cout<<*iter<<'\n';
	}
	return 0;
}
void swap(int& a, int& b){
	int temp = a;
	a = b;
	b = temp;
}