#include<iostream>
#include<string>

using namespace std;

class SangSu{
	string num1,num2;
	string reverse(string num);

public:
	SangSu(string num1="", string num2=""){
	this->num1 = reverse(num1);
	this->num2 = reverse(num2);
	}
	inline int bigger(){return stoi(num1) > stoi(num2) ? stoi(num1) : stoi(num2); }	//짦아서 inline함수로 
};
//문자열을 반대로 뒤집는 함수 
string SangSu::reverse(string num){
	num+=num.at(2);
	num+=num.at(1);
	num+=num.at(0);
	num.erase(0,3);
	return num;
}


int main(){
	string a,b;

	cin>> a >> b;
	if(a.size() == 3 && b.size() ==3)
		
		if(a.find("0") == string::npos && b.find("0") ==string::npos){
			SangSu ss(a,b);
			cout<< ss.bigger() <<endl;
		}

	return 0;
}