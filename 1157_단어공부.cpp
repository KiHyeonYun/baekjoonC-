#include<iostream>
#include<string>
using namespace std;

int main(){
	string alpa;
	int count[26]={};
	int ascii, mostAlpa=-1,mostAlphabet;
	bool plural=false;
	getline(cin, alpa);

	if(0<alpa.length() && alpa.length()<=1000000){
		for(int i=0; i<alpa.length(); i++){
			ascii=(int)alpa.at(i);
				if(65<=ascii && ascii<=90)
					count[ascii-65]++;
				else if(97<=ascii && ascii<=122)
					count[ascii-97]++;
		}

		for(int i=0; i<26; i++){
			if(mostAlpa < count[i]){
				mostAlpa = count[i];
				plural = false;
				mostAlphabet = i;
			}
			else if(mostAlpa == count[i]){
					plural = true;
			}
		}
		if(plural)
			cout<<"?"<<endl;
		else
			cout<<(char)(mostAlphabet+65)<<endl;
	}

	return 0;
}