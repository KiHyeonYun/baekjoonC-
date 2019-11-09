#include<iostream>
#include<string>
#define MAX 26

using namespace std;

int main(){

	int temp =0;
	char start = 'a';
	string str;

	getline(cin, str);
	for(int i =0; i<MAX; i++){
		
		temp =str.find((char)(start+i));
		cout<<temp<<endl;
		}
	
	
	return 0;
}