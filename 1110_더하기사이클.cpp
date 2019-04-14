#include<iostream>
#include<string>

using namespace std;
int main(){

	char n[10];
	char ntemp[10];
	int nSub[3];
	int na;
	
	cin>>n;
	na=stoi(n);
	
	if(0<=na && na<=9){
		nSub[0] = 0; //하나씩 나누기
		nSub[1] = (int)n[1]-'0'; //하나씩 나누기
		nSub[2] =(nSub[0]+nSub[1])%10;
		ntemp[0] = nSub[1];
		ntemp[1] = nSub[2];
		cout<<ntemp<<endl;
		

	}
	else if(10<=na && na<=99){
		nSub[0] = (int)n[0]-'0'; //하나씩 나누기
		nSub[1] = (int)n[1]-'0'; //하나씩 나누기
		nSub[2] =(nSub[0]+nSub[1])%10;
		ntemp[0] = nSub[1];
		ntemp[1] = nSub[2];
		cout<<ntemp<<endl;
	}

	return 0;
}